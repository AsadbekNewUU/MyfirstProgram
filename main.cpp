#include <iostream>
using namespace std;
//Problem 1
// int multiply(int a, int b) {
//
//     if (b == 0)
//         return 0;
//
//     if (b > 0)
//         return a + multiply(a, b - 1);
//
//
//     if (b < 0)
//         return -multiply(a, -b);
// }
//
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     cout << "Product: " << multiply(num1, num2) << endl;
//     return 0;
// }

//Problem 2
// int factorial(int n) {
//
//     if (n == 0)
//         return 1;
//
//
//     return n * factorial(n - 1);
// }
//
// int main() {
//     int num;
//     cin >> num;
//     cout << "Factorial: " << factorial(num) << endl;
//     return 0;
// }

//Problem 3

// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
//
// int main() {
//     int num;
//     cin >> num;
//     cout << "Fibonacci: " << fibonacci(num) << endl;
//     return 0;
// }

//Problem 4

// int sumNatural(int n) {
//     if (n == 0)
//         return 0;
//     return n + sumNatural(n - 1);
// }
//
// int main() {
//     int num;
//     cin >> num;
//     cout << "Sum of first " << num << " natural numbers: " << sumNatural(num) << endl;
//     return 0;
// }


//Problem 5

// void printDescending(int n){
//     if (n == 0)
//         return;
//     cout << n << " ";
//
//     printDescending(n - 1);
// }
//
// int main() {
//     int num;
//     cin >> num;
//     printDescending(num);
//     cout << endl;
//     return 0;
// }

//Problem 6

// int countDigits(int n) {
//     if (n == 0)
//         return 0;
//     return 1 + countDigits(n / 10);
// }
//
// int main() {
//     int num;
//     cin >> num;
//
//     if (num == 0)
//         cout << "Number of digits: 1" << endl;
//     else
//         cout << "Number of digits: " << countDigits(abs(num)) << endl;
//
//     return 0;
// }


//Problem 7

// int sumOfDigits(int n) {
//     if (n == 0)
//         return 0;
//
//
//     return (n % 10) + sumOfDigits(n / 10);
// }
//
// int main() {
//     int num;
//     cin >> num;
//
//     cout << "Sum of digits: " << sumOfDigits(abs(num)) << endl;
//
//     return 0;
// }

//Problem 8

// int power(int x, int y) {
//     if (y == 0)
//         return 1;
//
//     return x * power(x, y - 1);
// }
//
// int main() {
//     int base, exponent;
//     cin >> base >> exponent;
//
//     cout << "Result: " << power(base, exponent) << endl;
//
//     return 0;
// }


//Problem 9

// int reverseNumberHelper(int n, int reversed) {
//     if (n == 0)
//         return reversed;
//
//     return reverseNumberHelper(n / 10, reversed * 10 + (n % 10));
// }
//
//
// int reverseNumber(int n) {
//     return reverseNumberHelper(n, 0);
// }
//
// int main() {
//     int num;
//     cin >> num;
//
//     cout << "Reversed number: " << reverseNumber(num) << endl;
//
//     return 0;
// }

//Problem 10

// int reverseNumberHelper(int n, int reversed) {
//     if (n == 0)
//         return reversed;
//
//     return reverseNumberHelper(n / 10, reversed * 10 + (n % 10));
// }
//
//
// bool isPalindrome(int n) {
//     return n == reverseNumberHelper(n, 0);
// }
//
// int main() {
//     int num;
//     cin >> num;
//
//     if (isPalindrome(num))
//         cout << "The number is a palindrome." << endl;
//     else
//         cout << "The number is not a palindrome." << endl;
//
//     return 0;
// }

//Problem 11

// bool isPrimeHelper(int n, int i) {
//     if (n <= 1) return false;
//     if (i * i > n) return true;
//     if (n % i == 0) return false;
//
//     return isPrimeHelper(n, i + 1);
// }
//
// bool isPrime(int n) {
//     return isPrimeHelper(n, 2);
// }
//
// int main() {
//     int num;
//     cin >> num;
//
//     if (isPrime(num))
//         cout << "The number is prime." << endl;
//     else
//         cout << "The number is not prime." << endl;
//
//     return 0;
// }


//Problem 12 Bonus Problem.
void towerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        cout << "Move disk 1 from " << fromPeg << " to " << toPeg << endl;
        return;
    }

    towerOfHanoi(n - 1, fromPeg, auxPeg, toPeg);

    cout << "Move disk " << n << " from " << fromPeg << " to " << toPeg << endl;

    towerOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int num;
    cin >> num;

    towerOfHanoi(num, 'A', 'C', 'B');

    return 0;
}


