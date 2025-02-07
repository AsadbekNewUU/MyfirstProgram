#include <iostream>
using namespace std;
#include <cctype>>
int main() {
//Problem 1
    // int number1;
    // cout << "Enter a number: ";
    // cin >> number1;
    // if (number1 > 0) {
    //     cout << "You entered a positive number" << endl;
    // }
    // else if (number1 < 0) {
    //     cout << "You entered a negative number" << endl;
    // }

//Problem 2
    // int number1;
    // cout << "Enter a number: ";
    // cin >> number1;
    // if (number1 % 2 == 0) {
    //     cout << "Number is even" << endl;
    // }
    // else {
    //     cout << "Number is odd" << endl;
    // }


//Problem 3
    // int number1, number2;
    // cout << "Enter two numbers: ";
    // cin >> number1 >> number2;
    // if (number1 > number2) {
    //     cout << number1 << " is the largest "<< endl;
    // }
    // else if (number1 < number2) {
    //     cout << number2 << " is the largest "<< endl;
    // }



//Problem 4
    // int number1, number2, number3, largest;
    // cout << "Enter three numbers: ";
    // cin >> number1 >> number2 >> number3;
    // if (number1 >= number2) {
    //     if (number1 >= number3) {
    //         largest = number1;
    //     } else {
    //         largest = number3;
    //     }
    // }
    // else {
    //     if (number2 >= number3) {
    //         largest = number2;
    //     } else {
    //         largest = number3;
    //     }
    // }
    // cout << largest << endl;


//Problem 5
    // int year;
    // cout<<"Enter Year: ";
    // cin>>year;
    // if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    //     cout<<"Year is a leap year";
    // } else {
    //     cout<<"Year is not a leap year";
    // }


//Problem 6
    // int speed;
    // cout << "Please enter your speed: ";
    // cin >> speed;
    // if (speed < 20) {
    //     cout << "You are too slow." << endl;
    // } else if (speed > 80) {
    //     cout << "You are too fast." << endl;
    // } else {
    //     cout << "You are just right." << endl;
    // }



//Problem 7
    // int marks;
    // cout << "Please enter your marks: ";
    // cin >> marks;
    // if (marks >= 50) {
    //     cout << "Passed!" << endl;
    // } else {
    //     cout << "Failed!" << endl;40
    // }


//Problem 8
    // int number1;
    // cout << "Enter a number: ";
    // cin >> number1;
    // if (number1 > 0) {
    //     cout << "You entered a positive number" << endl;
    // } else if (number1 < 0) {
    //     cout << "You entered a negative number" << endl;
    // } else {
    //     cout << "You entered a zero" << endl;
    // }



//Problem 9
    // char letter;
    // cout << "Enter a letter: ";
    // cin >> letter;
    // if (letter == 'g') {
    //     cout <<"Go!"<<endl;
    // } else if (letter == 'y') {
    //     cout <<"Get ready!"<<endl;
    // } else if (letter == 'r') {
    //     cout <<"Stop!"<<endl;
    // } else {
    //     cout <<"Error!"<<endl;
    // }


//Problem 10
    // int grade;
    // cout << "Please enter your grade: ";
    // cin >> grade;
    // switch (grade / 10) {
    //     case 10:
    //         case 9:
    //     cout <<"A"<<endl;
    //     break;
    //     case 8:
    //         cout <<"B"<<endl;
    //     break;
    //     case 7:
    //         cout <<"C"<<endl;
    //     break;
    //     case 6:
    //         cout <<"D"<<endl;
    //     break;
    //     default:
    //         cout <<"F"<<endl;
    // }

//Problem 11
    // int number1, number2;
    // cout << "Enter two numbers: ";
    // cin >> number1 >> number2;
    // if (number1 % number2 == 0) {
    //     cout << number1 <<" is divisible by " << number2 << endl;
    // } else {
    //     cout << number1 <<" is not divisible by " << number2 << endl;
    // }


//Problem 12
    // int angle1, angle2, angle3;
    // cout<<"Enter angle1: ";
    // cin>>angle1;
    // cout<<"Enter angle2: ";
    // cin>>angle2;
    // cout<<"Enter angle3: ";
    // cin>>angle3;
    // if (angle1 > 0 && angle2 >0 && angle3 >0 && (angle1 +angle2 + angle3 == 180)) {
    //     cout<<"Your triangle is valid"<<endl;
    // } else {
    //     cout<<"Your triangle is not valid"<<endl;
    // }


//Problem 13
    // char letter;
    // cout << "Enter a letter: ";
    // cin >> letter;
    // if (islower(letter)) {
    //     cout << "Lowercase letter." << endl;
    // } else if (isupper(letter)) {
    //     cout << "Uppercase letter." << endl;
    // } else {
    //     cout << "It is not an alphabet." << endl;
    // }


//Problem 14
    // double weight1,weight2, price1, price2;
    // cout << "Please enter your weight1:" << endl;
    // cin >> weight1;
    // cout << "Please enter your price1:" << endl;
    // cin >> price1;
    // cout << "Please enter your weight2:" << endl;
    // cin >> weight2;
    // cout << "Please enter your price2:" << endl;
    // cin >> price2;
    // double pricePerUnit1 = price1/weight1;
    // double pricePerUnit2 = price2/weight2;
    // if (pricePerUnit1 < pricePerUnit2) {
    //     cout << "Package 1 has a better price"<<endl;
    // } else if (pricePerUnit1 > pricePerUnit2) {
    //     cout << "Package 2 has a better price"<<endl;
    // } else {
    //     cout << "Equal"<<endl;
    // }


//Problem 15
    int number1;
    cout << "Enter a number: ";
    cin >> number1;
    if (number1 < 100 || number1 > 999) {
        cout << "Invalid input." << endl;
        return 1;
    }
    int hundreds = number1 / 100;
    int units = number1 % 10;
    if (hundreds == units) {
        cout <<number1<<" is a palindrome."<<endl;
    } else {
        cout <<number1<<" is not a palindrome."<<endl;
    }


    return 0;
}