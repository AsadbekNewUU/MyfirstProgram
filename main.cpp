    #include <iostream>
    #include <fstream>
    #include <sstream>
    #include <cstdlib>
    #include <ctime>
    #include <string>
    #include <windows.h>
    using namespace std;

    const int MAX_DAYS = 7;
    const int MAX_HISTORY_WEEKS = 52;
    const int MAX_EXERCISES = 30;

    const string motivationalQuotes[] = {
        "Push yourself, because no one else is going to do it for you.",
        "Great things never come from comfort zones.",
        "Success doesn’t just find you. You have to go out and get it.",
        "Don’t stop when you’re tired. Stop when you’re done.",
        "Dream it. Wish it. Do it.",
        "No excuses. Just results.",
        "Discipline is doing it even when you don’t want to."
    };

    const string nutritionTips[] = {
        "Drink at least 8 cups of water a day.",
        "Eat protein with every meal.",
        "Include fruits and vegetables daily.",
        "Avoid sugary drinks and snacks.",
        "Plan your meals ahead."
    };

    const string exerciseLibrary[MAX_EXERCISES] = {
        "Push-ups", "Squats", "Lunges", "Plank", "Jumping Jacks", "Burpees",
        "Mountain Climbers", "Crunches", "Tricep Dips", "Bicep Curls",
        "Shoulder Press", "Deadlifts", "Bench Press", "Pull-ups", "Rows",
        "Leg Raises", "Russian Twists", "High Knees", "Butt Kicks", "Side Plank",
        "Glute Bridge", "Superman", "Wall Sit", "Step-ups", "Box Jumps",
        "Farmer's Carry", "Skipping Rope", "Shadow Boxing", "Yoga Flow", "Foam Rolling"
    };

    const string daysOfWeek[MAX_DAYS] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"
    };

    struct UserProfile {
        string name;
        string password;
        string goal;
        string workoutType;
        string equipment;
        int workoutDays[MAX_DAYS];
        int numWorkoutDays;
        int progressHistory[MAX_HISTORY_WEEKS][MAX_DAYS];
        int totalWeeks;
        int streak;
    };

    void setConsoleColor(int backgroundColor, int textColor) {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
    }

    void clearScreen() {
        system("cls");
    }

    void pause() {
        cout << "\nPress Enter to continue...";
        cin.ignore();
    }

    int getRandomInt(int min, int max) {
        return min + rand() % (max - min + 1);
    }

    void printBanner() {
        cout << "==============================================\n";
        cout << "  Personalized Fitness Plan Generator | TrainTailor   \n";
        cout << "==============================================\n";
    }

    void printMotivation() {
        int index = getRandomInt(0, sizeof(motivationalQuotes) / sizeof(motivationalQuotes[0]) - 1);
        cout << "\nMotivation: " << motivationalQuotes[index] << "\n";
    }

    void printNutritionTip() {
        int index = getRandomInt(0, sizeof(nutritionTips) / sizeof(nutritionTips[0]) - 1);
        cout << "\nNutrition Tip: " << nutritionTips[index] << "\n";
    }

    void inputUserProfile(UserProfile &user) {
        cout << "\n--- Setup Your Profile ---\n";
        cout << "Fitness goal (Lose weight/Gain muscle/Maintain): ";
        getline(cin, user.goal);
        cout << "Preferred workout type (Strength/Cardio/Maintain): ";
        getline(cin, user.workoutType);
        cout << "Available equipment (comma separated): ";
        getline(cin, user.equipment);
        cout << "Which days to workout? (e.g., 1 3 5 for Mon Wed Fri)\n";
        cout << "0=Mon,...6=Sun: ";
        user.numWorkoutDays = 0;
        string line;
        getline(cin, line);
        istringstream iss(line);
        int d;
        while (iss >> d && user.numWorkoutDays < MAX_DAYS) {
            if (d >= 0 && d < MAX_DAYS) {
                user.workoutDays[user.numWorkoutDays++] = d;
            }
        }
        if (user.numWorkoutDays == 0) {
            user.workoutDays[0] = 1; user.workoutDays[1] = 3; user.workoutDays[2] = 5;
            user.numWorkoutDays = 3;
        }
        user.totalWeeks = 0;
        user.streak = 0;
        for (int i = 0; i < MAX_HISTORY_WEEKS; ++i)
            fill(begin(user.progressHistory[i]), end(user.progressHistory[i]), 0);
    }

    void saveUserProfile(const UserProfile &user) {
        ofstream file(user.name + ".profile");
        if (file) {
            file << user.name << '\n' << user.password << '\n' << user.goal << '\n'
                 << user.workoutType << '\n' << user.equipment << '\n'
                 << user.numWorkoutDays << '\n';
            for (int i = 0; i < user.numWorkoutDays; ++i)
                file << user.workoutDays[i] << ' ';
            file << '\n' << user.totalWeeks << '\n' << user.streak << '\n';
            for (int w = 0; w < user.totalWeeks; ++w)
                for (int d = 0; d < MAX_DAYS; ++d)
                    file << user.progressHistory[w][d] << ' ';
        }

        ifstream check("users.list");
        string line;
        bool found = false;
        while (getline(check, line)) {
            if (line == user.name) {
                found = true;
                break;
            }
        }
        check.close();
        if (!found) {
            ofstream add("users.list", ios::app);
            add << user.name << '\n';
        }
    }

    bool loadUserProfile(UserProfile &user, const string& name, const string& password) {
        ifstream file(name + ".profile");
        if (!file) return false;

        getline(file, user.name);
        getline(file, user.password);
        getline(file, user.goal);
        getline(file, user.workoutType);
        getline(file, user.equipment);

        if (user.password != password) return false;

        file >> user.numWorkoutDays;
        for (int i = 0; i < user.numWorkoutDays; ++i)
            file >> user.workoutDays[i];
        file >> user.totalWeeks >> user.streak;
        for (int w = 0; w < user.totalWeeks; ++w)
            for (int d = 0; d < MAX_DAYS; ++d)
                file >> user.progressHistory[w][d];

        return true;
    }

    void listUsers() {
        ifstream file("users.list");
        if (!file) {
            cout << "No users found.\n";
            return;
        }
        cout << "\n--- Registered Users ---\n";
        string name;
        while (getline(file, name)) {
            cout << "- " << name << '\n';
        }
    }

    bool switchUser(UserProfile &user) {
        string name, pass;
        cout << "\n--- Switch User ---\n";
        cout << "Username: ";
        cin >> name;
        cout << "Password: ";
        cin >> pass;
        cin.ignore();

        if (loadUserProfile(user, name, pass)) {
            cout << "Welcome, " << user.name << "!\n";
            pause();
            return true;
        } else {
            cout << "Incorrect login.\n";
            pause();
            return false;
        }
    }

    bool isSuitableExercise(const string& exercise, const string& equipment) {
        string bodyweight[] = {
            "Push-ups", "Squats", "Lunges", "Plank", "Jumping Jacks", "Burpees",
            "Mountain Climbers", "Crunches", "High Knees", "Butt Kicks", "Side Plank",
            "Glute Bridge", "Superman", "Wall Sit", "Yoga Flow"
        };

        for (string bw : bodyweight)
            if (exercise == bw)
                return true;

        if ((exercise.find("Dips") != string::npos || exercise.find("Pull-ups") != string::npos) &&
            equipment.find("bar") != string::npos)
            return true;

        if ((exercise.find("Bench Press") != string::npos || exercise.find("Press") != string::npos) &&
            equipment.find("bench") != string::npos && equipment.find("dumbbell") != string::npos)
            return true;

        if ((exercise.find("Curls") != string::npos || exercise.find("Rows") != string::npos) &&
            equipment.find("dumbbell") != string::npos)
            return true;

        if (exercise.find("Jump Rope") != string::npos && equipment.find("rope") != string::npos)
            return true;
        if (exercise.find("Box") != string::npos && equipment.find("box") != string::npos)
            return true;

        return false;
    }

    string getSuitableExercise(const UserProfile &user) {
        int attempts = 0;
        int index;
        do {
            index = (user.totalWeeks + attempts) % MAX_EXERCISES;
            if (isSuitableExercise(exerciseLibrary[index], user.equipment)) {
                return exerciseLibrary[index];
            }
            attempts++;
        } while (attempts < 10);
        return "Push-ups";
    }

    void displayWorkoutPlan(const UserProfile &user) {
        cout << "\n--- Workout Plan (Week " << user.totalWeeks+1 << ") ---\n";
        cout << "Goal: " << user.goal << "\n";
        cout << "Workout type: " << user.workoutType << "\n\n";

        for (int i = 0; i < MAX_DAYS; ++i) {
            cout << daysOfWeek[i] << ": ";
            bool isWorkout = false;
            for (int j = 0; j < user.numWorkoutDays; ++j)
                if (user.workoutDays[j] == i) { isWorkout = true;
                    break;
                }

            if (isWorkout) {
                string ex1 = getSuitableExercise(user);
                string ex2 = getSuitableExercise(user);
                cout << ex1 << " & " << ex2 << "\n";

                string goal = user.goal;
                string repRange;
                if (goal.find("muscle") != string::npos || goal.find("strength") != string::npos)
                    repRange = "3 sets of 8-12 reps";
                else if (goal.find("weight") != string::npos || goal.find("cardio") != string::npos)
                    repRange = "3 sets of 15-20 reps";
                else if (goal.find("Maintain") != string::npos || goal.find("mobil") != string::npos)
                    repRange = "3 sets of 30 seconds each";
                else
                    repRange = "3 sets of 10-15 reps";

                cout << "    " << repRange << "\n";
            } else {
                cout << "Rest or light activity\n";
            }
        }

        printMotivation();
    }

    void trackProgress(UserProfile &user) {
        cout << "\n--- Track Progress for Week " << user.totalWeeks+1 << " ---\n";
        int weekDone = 0;
        for (int i = 0; i < MAX_DAYS; ++i) {
            bool isWorkout = false;
            for (int j = 0; j < user.numWorkoutDays; ++j)
                if (user.workoutDays[j] == i) { isWorkout = true;
                    break;
                }

            if (isWorkout) {
                cout << daysOfWeek[i] << " done? (1=Yes,0=No): ";
                int done; cin >> done;
                user.progressHistory[user.totalWeeks][i] = (done ? 1 : 0);
                weekDone += (done ? 1 : 0);
            } else {
                user.progressHistory[user.totalWeeks][i] = -1;
            }
        }
        cin.ignore();
        cout << "Completed " << weekDone << "/" << user.numWorkoutDays << " workouts\n";
        user.streak = (weekDone == user.numWorkoutDays) ? user.streak + 1 : 0;
        user.totalWeeks++;
    }

    void displayHistory(const UserProfile &user) {
        cout << "\n--- Workout History ---\n";
        for (int w = 0; w < user.totalWeeks; ++w) {
            int cnt = 0;
            for (int d = 0; d < MAX_DAYS; ++d)
                if (user.progressHistory[w][d] == 1) cnt++;
            cout << "Week " << w+1 << ": " << cnt << "/" << user.numWorkoutDays << "\n";
        }
    }

    void resetProgress(UserProfile &user) {
        cout << "\n--- Reset Progress ---\n";
        cout << "Are you sure you want to reset your progress? (y/n): ";
        char choice;
        cin >> choice;
        cin.ignore();
        if (choice == 'y' || choice == 'Y') {
            for (int i = 0; i < MAX_HISTORY_WEEKS; ++i)
                fill(begin(user.progressHistory[i]), end(user.progressHistory[i]), 0);
            user.totalWeeks = 0;
            user.streak = 0;
            cout << "Progress has been reset.\n";
        } else {
            cout << "Cancelled.\n";
        }
    }

    void about() {
        cout << "\nPersonalized Fitness Plan Generator\n";
        cout << "Tracks multiple users and weekly progress.\n";
    }

    void displayMainMenu() {
        cout << "\n--- Main Menu ---\n";
        cout << "1. View plan\n2. Track progress\n3. View history\n4. Nutrition tip\n";
        cout << "5. About\n6. Reset progress\n7. Switch user\n8. List users\n0. Exit\n";
    }

    int main() {
        srand((unsigned)time(0));
        setConsoleColor(2, 15);

        UserProfile user;
        bool running = true;

        clearScreen();
        printBanner();
        cout << "\n--- Welcome to TrainTailor ---\n";

        string name, pass;
        cout << "Login or create a new user.\n";
        cout << "Enter your username: ";
        cin >> name;
        cout << "Enter your password: ";
        cin >> pass;
        cin.ignore();

        if (!loadUserProfile(user, name, pass)) {
            cout << "\nNew user! Creating your profile...\n";
            user.name = name;
            user.password = pass;
            inputUserProfile(user);
            saveUserProfile(user);
        } else {
            cout << "\nWelcome back, " << user.name << "!\n";
        }

        pause();

        while (running) {
            clearScreen();
            printBanner();
            displayMainMenu();
            cout << "Enter choice 1(Workout Plan), 2(Tracking the process) or 3(View History: ";
            int choice;
            cin >> choice;
            cin.ignore();

            switch (choice) {
                case 1: displayWorkoutPlan(user); pause();
                break;
                case 2: trackProgress(user); saveUserProfile(user); pause();
                break;
                case 3: displayHistory(user); pause();
                break;
                case 4: printNutritionTip(); pause();
                break;
                case 5: about(); pause();
                break;
                case 6: resetProgress(user); saveUserProfile(user); pause();
                break;
                case 7: switchUser(user);
                break;
                case 8: listUsers(); pause();
                break;
                case 0: running = false;
                break;
                default: cout << "Invalid choice.\n"; pause();
                break;
            }
        }

        cout << "\nThanks for using TrainTailor. Stay strong!\n";
        return 0;
    }
