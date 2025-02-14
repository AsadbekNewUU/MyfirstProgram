#include <iostream>
using namespace std;

int main() {
 //    int choice;
 //    cin >> choice;
 //
 //    // Problem 1
 //    if (choice == 1) {
 //        int N;
 //        cout << "Enter N: ";
 //        cin >> N;
 //        for (int i = 1; i <= N; i++) {
 //            cout << i << " ";
 //        }
 //        cout << endl;
 //        int sum = 0;
 //        for (int i = 1; i <= N; i++) {
 //            sum += i;
 //        }
 //        cout << "Sum: " << sum << endl;
 //        cout << "Average: " << (sum / (double)N) << endl;
 //    }
 //
 //    // Problem 2
 //    else if (choice == 2) {
 //        int N;
 //        cout << "Enter N: ";
 //        cin >> N;
 //        cout << "Odd numbers: ";
 //        for (int i = 1; i <= N; i++) {
 //            if (i % 2 != 0) {
 //                cout << i << " ";
 //            }
 //        }
 //        cout << "\nEven numbers: ";
 //        for (int i = 1; i <= N; i++) {
 //            if (i % 2 == 0) {
 //                cout << i << " ";
 //            }
 //        }
 //        cout << "\nNumbers divisible by 10: ";
 //        for (int i = 10; i <= N; i += 10) {
 //            cout << i << " ";
 //        }
 //        cout << endl;
 //    }
 //
 //    // Problem 3
 //    else if (choice == 3) {
 //        int count = 0;
 //        for (char c = 'A'; c <= 'Z'; c++) {
 //            cout << c << " ";
 //            count++;
 //            if (count % 5 == 0) {
 //                cout << endl;
 //            }
 //        }
 //    }
 //
 //    // Problem 4
 //    else if (choice == 4) {
 //        int n;
 //        cout << "Enter a number: ";
 //        cin >> n;
 //        if (n < 0) {
 //            cout << "Factorial of a negative number is not defined.\n";
 //        } else {
 //            long long fact = 1;
 //            for (int i = 1; i <= n; i++) {
 //                fact *= i;
 //            }
 //            cout << "Factorial of " << n << " is " << fact << endl;
 //        }
 //    }
 //
 //    // Problem 5
 //    else if (choice == 5) {
 //        int classes;
 //        cout << "Enter number of classes: ";
 //        cin >> classes;
 //        double totalCredits = 0, weightedSum = 0;
 //        for (int i = 0; i < classes; i++) {
 //            double credits, marks;
 //            cin >> credits >> marks;
 //            totalCredits += credits;
 //            weightedSum += credits * marks;
 //        }
 //        cout << "Your total GPA is " << (weightedSum / totalCredits) << endl;
 //    }
 //
 //    // Problem 6
 //    else if (choice == 6) {
 //        int students;
 //        cout << "Enter number of students: ";
 //        cin >> students;
 //        for (int s = 0; s < students; s++) {
 //            int classes;
 //            cout << "Enter number of classes for student " << s + 1 << ": ";
 //            cin >> classes;
 //            double totalCredits = 0, weightedSum = 0;
 //            for (int i = 0; i < classes; i++) {
 //                double credits, marks;
 //                cin >> credits >> marks;
 //                totalCredits += credits;
 //                weightedSum += credits * marks;
 //            }
 //            cout << "Student " << s + 1 << " GPA is " << (weightedSum / totalCredits) << endl;
 //        }
 //    }
 //
 //    // Problem 7
 //    else if (choice == 7) {
 //        int size;
 //        cout << "Enter size: ";
 //        cin >> size;
 //        for (int i = 0; i < size; i++) {
 //            for (int j = 0; j < size; j++) {
 //                cout << "*";
 //            }
 //            cout << endl;
 //        }
 //    }
 //
 //    // Problem 8
 //    else if (choice == 8) {
 //        int size;
 //        cout << "Enter size: ";
 //        cin >> size;
 //        for (int i = 1; i <= size; i++) {
 //            for (int j = 0; j < i; j++) {
 //                cout << "*";
 //            }
 //            cout << endl;
 //        }
 //    }
 //
 //    else {
 //        cout << "Invalid choice." << endl;
 //    }
 //
 // // Problem 9
 //    if (choice == 9) {
 //        int n;
 //        cout << "Enter a number: ";
 //        cin >> n;
 //        bool prime = true;
 //        if (n < 2) prime = false;
 //        for (int i = 2; i * i <= n; i++) {
 //            if (n % i == 0) {
 //                prime = false;
 //                break;
 //            }
 //        }
 //        cout << "Number is " << (prime ? "prime" : "not prime") << endl;
 //    }
 //
 //    // Problem 10
 //    else if (choice == 10) {
 //        int n, sum = 0;
 //        cout << "Enter N: ";
 //        cin >> n;
 //        for (int i = 1; i <= n; i++) {
 //            cout << i << "*" << i << "=" << (i * i) << endl;
 //            sum += i * i;
 //        }
 //        cout << "Sum: " << sum << endl;
 //    }
 //
 //    // Problem 11
 //    else if (choice == 11) {
 //        int num, positives = 0, negatives = 0, total = 0, count = 0;
 //        cout << "Enter numbers (0 to stop): ";
 //        while (cin >> num && num != 0) {
 //            if (num > 0) positives++;
 //            else negatives++;
 //            total += num;
 //            count++;
 //        }
 //        cout << "Positives: " << positives << " Negatives: " << negatives;
 //        cout << " Total: " << total << " Average: " << (count ? (total / (double)count) : 0) << endl;
 //    }
 //
 //    // Problem 12
 //    else if (choice == 12) {
 //        int n;
 //        cout << "Enter number: ";
 //        cin >> n;
 //        cout << "Reversed: ";
 //        while (n) {
 //            cout << (n % 10);
 //            n /= 10;
 //        }
 //        cout << endl;
 //    }
 //
 //    // Problem 13
 //    else if (choice == 13) {
 //        int depth;
 //        cout << "Enter depth: ";
 //        cin >> depth;
 //        if (depth == 0) cout << "The depth is 0\n";
 //        else {
 //            for (int i = 1; i <= depth; i++) {
 //                for (int j = 0; j < i; j++) cout << i;
 //                cout << endl;
 //            }
 //        }
 //    }

    // Problem 14
    else if (choice == 14) {
        string binary;
        cout << "Enter binary: ";
        cin >> binary;
        int decimal = 0;
        for (char c : binary) decimal = decimal * 2 + (c - '0');
        cout << "The decimal number is " << decimal << endl;
    }

    else {
        cout << "Invalid choice." << endl;
    }








    return 0;
}
