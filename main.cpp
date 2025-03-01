#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Problem 1
// void restaurantOrderingSystem() {
//     int choice, quantity, totalBill = 0;
//     do {
//         cout << "Menu:\n1. Pizza ($10)\n2. Burger ($8)\n3. Salad ($5)\n4. Exit\nChoose an item: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter quantity: ";
//                 cin >> quantity;
//                 totalBill += 10 * quantity;
//                 break;
//             case 2:
//                 cout << "Enter quantity: ";
//                 cin >> quantity;
//                 totalBill += 8 * quantity;
//                 break;
//             case 3:
//                 cout << "Enter quantity: ";
//                 cin >> quantity;
//                 totalBill += 5 * quantity;
//                 break;
//             case 4:
//                 cout << "Exiting...\n";
//                 break;
//             default:
//                 cout << "Invalid choice!\n";
//         }
//     } while (choice != 4);
//     cout << "Total Bill: $" << totalBill << endl;
// }
//
// //Problem 2
// void carParkingFeeCalculator() {
//     int hours, fee;
//     char continueInput;
//     do {
//         cout << "Enter number of hours parked: ";
//         cin >> hours;
//         if (hours <= 2) fee = 0;
//         else if (hours <= 5) fee = (hours - 2) * 2;
//         else fee = (hours - 5) * 5 + 6;
//         cout << "Parking Fee: $" << fee << endl;
//         cout << "Do you want to calculate another fee? (y/n): ";
//         cin >> continueInput;
//     } while (tolower(continueInput) == 'y');
// }
//
// //Problem 3
// void simpleBankingSystem() {
//     int balance = 500, amount, choice;
//     do {
//         cout << "Menu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoose an option: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//                 balance += amount;
//                 break;
//             case 2:
//                 cout << "Enter amount to withdraw: ";
//                 cin >> amount;
//                 if (amount > balance) cout << "Insufficient balance!\n";
//                 else balance -= amount;
//                 break;
//             case 3:
//                 cout << "Current balance: $" << balance << endl;
//                 break;
//             case 4:
//                 cout << "Exiting...\n";
//                 break;
//             default:
//                 cout << "Invalid choice!\n";
//         }
//     } while (choice != 4);
// }
//
// //Problem 4
// void movieTicketBookingSystem() {
//     int choice, tickets, totalCost = 0;
//     do {
//         cout << "Movies:\n1. Movie A ($8)\n2. Movie B ($10)\n3. Movie C ($12)\n4. Exit\nChoose a movie: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 totalCost += 8 * tickets;
//                 break;
//             case 2:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 totalCost += 10 * tickets;
//                 break;
//             case 3:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 totalCost += 12 * tickets;
//                 break;
//             case 4:
//                 cout << "Exiting...\n";
//                 break;
//             default:
//                 cout << "Invalid choice!\n";
//         }
//     } while (choice != 4);
//     cout << "Total Cost: $" << totalCost << endl;
// }
//
// //Problem 5
// void trainTicketReservationSystem() {
//     int choice, tickets, totalFare = 0;
//     do {
//         cout << "Trains:\n1. Train X ($15)\n2. Train Y ($20)\n3. Train Z ($25)\n4. Exit\nChoose a train: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 totalFare += 15 * tickets;
//                 break;
//             case 2:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 totalFare += 20 * tickets;
//                 break;
//             case 3:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 totalFare += 25 * tickets;
//                 break;
//             case 4:
//                 cout << "Exiting...\n";
//                 break;
//             default:
//                 cout << "Invalid choice!\n";
//         }
//     } while (choice != 4);
//     cout << "Total Fare: $" << totalFare << endl;
// }


//Problem 6
// void passwordStrengthChecker() {
//     string password;
//     cout << "Enter a password: ";
//     cin >> password;
//     bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
//     if (password.length() >= 8) {
//         for (char c : password) {
//             if (isupper(c)) hasUpper = true;
//             if (islower(c)) hasLower = true;
//             if (isdigit(c)) hasDigit = true;
//             if (ispunct(c)) hasSpecial = true;
//         }
//         if (hasUpper && hasLower && hasDigit && hasSpecial) {
//             cout << "Strong Password" << endl;
//         } else {
//             cout << "Weak Password. Ensure it contains uppercase, lowercase, digits, and special symbols." << endl;
//         }
//     } else {
//         cout << "Weak Password. Must be at least 8 characters long." << endl;
//     }
// }

//Problem 7
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) daysInMonth[2] = 29;
    return (month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth[month]);
}

void getNextDate(int &day, int &month, int &year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) daysInMonth[2] = 29;

    day++;
    if (day > daysInMonth[month]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void calendarDateValidator() {
    int day, month, year;
    char continueInput;
    do {
        cout << "Enter a date (day month year): ";
        cin >> day >> month >> year;
        if (isValidDate(day, month, year)) {
            cout << "Valid date." << endl;
            getNextDate(day, month, year);
            cout << "Next date: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid date. Please enter again." << endl;
        }
        cout << "Do you want to enter another date? (y/n): ";
        cin >> continueInput;
    } while (tolower(continueInput) == 'y');
}


int main() {
    // restaurantOrderingSystem();
    //
    // carParkingFeeCalculator();
    //
    // simpleBankingSystem();
    //
    // movieTicketBookingSystem();
    //
    // trainTicketReservationSystem();

    // passwordStrengthChecker();

    calendarDateValidator();



    return 0;
}
