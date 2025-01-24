#include <iomanip>
#include <iostream>
using namespace std;

int main() {
//Problem 1

    // int age;
    // string name;
    // cout << "Please enter your name: "<< endl;
    // cin >> name;
    // cout << "Please enter your age: "<< endl;
    // cin >> age;
    // cout << "Great " << name << ", Your age is: " << age << endl;

//Problem 2

    // cout << setw(5) <<"1"<<endl;
    // cout << setw(5) <<"2"<<endl;
    // cout << setw(5) <<"3"<<endl;
    // cout << setw(5) <<"4"<<endl;
    // cout << setw(5) <<"5"<<endl;

//Problem 3

    // cout <<"Enter two numbers : ";
    // int a, b;
    // cin >> a >> b;
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b << endl;

//Problem 4

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     cout << setw(10) << i << setw(10) << i * i << endl;
    // }

//Problem 5
    string input;
    int width = 50;
    int location = width / 2;
    cin >> input;
    cout << setw(location) << input << setw(location) << endl;

    return 0;
}
