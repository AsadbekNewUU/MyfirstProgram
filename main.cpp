#include <iostream>
using namespace std;

int main() {

    // // Problem 1
    //     int sum = 0;
    //     for (int i = 1; i <= 100; i++) {
    //         sum += i;
    //     }
    //     cout << "Sum up to 100: " << sum << endl;
    //
    //     int n, i = 1;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     sum = 0;
    //     while (i <= n) {
    //         sum += i;
    //         i++;
    //     }
    //     cout << "Sum up to " << n << ": " << sum << endl;
    //

    // Problem 2
    //     int count = 0, num = 2;
    //     cout << "First 10 prime numbers: ";
    //     for (int i = 0; count < 10; i++) {
    //         bool prime = true;
    //         for (int j = 2; j * j <= num; j++) {
    //             if (num % j == 0) {
    //                 prime = false;
    //                 break;
    //             }
    //         }
    //         if (prime) {
    //             cout << num << " ";
    //             count++;
    //         }
    //         num++;
    //     }
    //     cout << endl;
    //

    // // Problem 3
    //     int n;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     while (n != 1) {
    //         cout << n << ", ";
    //         if (n % 2 == 0) n /= 2;
    //         else n = 3 * n + 1;
    //     }
    //     cout << "1" << endl;


    // Problem 4
    //     int n, count = 0;
    //     cout << "Enter a number: ";
    //     cin >> n;
    //     while (n > 0) {
    //         n /= 10;
    //         count++;
    //     }
    //     cout << "Number of digits: " << count << endl;
    //

    // // // Problem 5
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout << "Digits in reverse: ";
    // while (n > 0) {
    //     cout << n % 10 << " ";
    //     n /= 10;
    // }
    // cout << endl;
    //

    // Problem 6
    //     int a, b;
    //     cout << "Enter two numbers: ";
    //     cin >> a >> b;
    //     while (b != 0) {
    //         int temp = b;
    //         b = a % b;
    //         a = temp;
    //     }
    //     cout << "GCD: " << a << endl;
    //

    // Problem 7
    //     int sum = 0, count = 0, num;
    //     while (sum <= 100) {
    //         cout << "Enter a number: ";
    //         cin >> num;
    //         sum += num;
    //         count++;
    //     }
    //     cout << "Sum exceeded 100! Total sum: " << sum << endl;
    //     cout << "Total numbers entered: " << count << endl;
    //
    //
    // // Problem 8
    //     int balance = 500, withdrawal;
    //     while (balance > 0) {
    //         cout << "Your balance: $" << balance << endl;
    //         cout << "Enter withdrawal amount (or 0 to cancel): ";
    //         cin >> withdrawal;
    //         if (withdrawal == 0) break;
    //         if (withdrawal > balance) {
    //             cout << "Insufficient funds!" << endl;
    //         } else {
    //             balance -= withdrawal;
    //         }
    //     }
    //
    //
    // // Problem 9
    //     char response;
    //     do {
    //         cout << "Enter Y or N: ";
    //         cin >> response;
    //     } while (response != 'Y' && response != 'N');
    //
    //
    // // Problem 10
    //     int option;
    //     do {
    //         cout << "1: Withdraw\n2: Deposit\n3: Exit\nEnter choice: ";
    //         cin >> option;
    //     } while (option != 3);
    //
    //
    // // Problem 11
    //     int option;
    //     do {
    //         cout << "1: Add\n2: Subtract\n3: Multiply\n4: Exit\nEnter choice: ";
    //         cin >> option;
    //     } while (option != 4);
    //
    //
    // // Problem 12
    //     string password = "1234", input;
    //     int attempts = 0;
    //     do {
    //         cout << "Enter password: ";
    //         cin >> input;
    //         if (input == password) {
    //             cout << "Access granted." << endl;
    //             break;
    //         }
    //         cout << "Incorrect password." << endl;
    //         attempts++;
    //     } while (attempts < 3);
    //
    //
    // Problem 13: Guessing Game (Do While Loop)
        int number = 50, guess;
        do {
            cout << "Guess the number: ";
            cin >> guess;
            if (guess > number) cout << "Too high!" << endl;
            else if (guess < number) cout << "Too low!" << endl;
        } while (guess != number);
        cout << "Congratulations! You guessed it right." << endl;


    return 0;
}
