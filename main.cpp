#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

// int main() {

    //Problem 1

    // ofstream outputFile("output.txt");
    // if (outputFile.is_open()) {
    //     outputFile << "Hello, File!" << endl;
    //     outputFile.close();
    // } else {
    //     cout << "Error!" << endl;
    // }

    //Problem 2

        // ifstream inputFile("greeting.txt");
        // if (inputFile.is_open()) {
        //     string line;
        //     while (getline(inputFile, line)) {
        //         cout << line << endl;
        //     }
        //     inputFile.close();
        // } else {
        //     cout << "Error!" << endl;
        // }

    //Problem 3

        // string name;
        // int age;
        // getline(cin, name);
        // cin >> age;
        // ofstream outputFile("user.txt");
        // if (outputFile.is_open()) {
        //     outputFile << name << age << endl;
        //     outputFile.close();
        // } else {
        //     cout << "Error!" << endl;
        // }

    //Problem 4

        // ifstream inputFile("data.txt");
        // if (inputFile.is_open()) {
        //     string line;
        //     while (getline(inputFile, line)) {
        //         cout << line << endl;
        //     }
        //     inputFile.close();
        // } else {
        //     cout << "Error!" << endl;
        // }


    //Problem 5

        // ifstream sourceFile("source.txt");
        // ofstream targetFile("target.txt");
        //
        // if (!sourceFile.is_open()) {
        //     cout << "Error!" << endl;
        //     return 1;
        // }
        // if (!targetFile.is_open()) {
        //     cout << "Error!" << endl;
        //     return 1;
        // }
        // string line;
        // while (getline(sourceFile, line)) {
        //     targetFile << line << endl;
        // }
        // sourceFile.close();
        // targetFile.close();

    //Problem 6

        // ifstream file("essay.txt");
        // if (!file.is_open()) {
        //     cout << "Error!" << endl;
        //     return 1;
        // }
        //
        // string line;
        // int wordCount = 0;
        // while (getline(file, line)) {
        //     stringstream ss(line);
        //     string word;
        //     while (ss >> word) {
        //         wordCount++;
        //     }
        // }
        // cout << "Total words: " << wordCount << endl;
        // file.close();


    //Problem 7

        // ifstream file("numbers.txt");
        // if (!file.is_open()) {
        //     cout << "Error!" << endl;
        //     return 1;
        // }
        // int sum = 0;
        // int number;
        // while (file >> number) {
        //     sum += number;
        // }
        // cout << "Sum: " << sum << endl;
        // file.close();

    //Problem 8

        // ifstream file("values.txt");
        //
        // if (!file.is_open()) {
        //     cout << "Error!" << endl;
        //     return 1;
        // }
        // int number;
        // if (!(file >> number)) {
        //     cout << "File is empty" << endl;
        //     return 1;
        // }
        //
        // int max = number;
        // int min = number;
        // while (file >> number) {
        //     if (number > max) {
        //         max = number;
        //     }
        //     if (number < min) {
        //         min = number;
        //     }
        // }
        //
        // cout << "Max: " << max << ", Min: " << min << endl;
        // file.close();

    //Problem 9

    // struct Student {
    //     int id;
    //     string name;
    //     float gpa;
    // };
    //     Student s;
    //     cin >> s.id >> s.name >> s.gpa;
    //     ofstream outFile("student.txt");
    //
    //     if (!outFile.is_open()) {
    //         cout << "Error!" << endl;
    //         return 1;
    //     }
    //     outFile << "ID: " << s.id << endl;
    //     outFile << "Name: " << s.name << endl;
    //     outFile << "GPA: " << s.gpa << endl;
    //     outFile.close();


    //Problem 10

    // struct Student {
    //     int id;
    //     string name;
    //     float gpa;
    // };
    //
    //     ifstream inFile("student.txt");
    //
    //     if (!inFile.is_open()) {
    //         cout << "Error!" << endl;
    //         return 1;
    //     }
    //     Student s;
    //     string label;
    //
    //     inFile >> label >> s.id;
    //     inFile >> label >> s.name;
    //     inFile >> label >> s.gpa;
    //     inFile.close();
    //     cout << "ID: " << s.id
    //          << ", Name: " << s.name
    //          << ", GPA: " << s.gpa << endl;




    //Structs


    //Problem 13

//     struct Date {
//         int day;
//         int month;
//         int year;
//     };
//         Date d;
//         cin >> d.day>>d.month>>d.year;
//         cout << d.day << " " << d.month << " " << d.year << endl;
//


    //Problem 14

    // struct StudentInfo {
    //     int Id;
    //     int Age;
    //     char Gender;
    //     float CGA;
    // };
    //     StudentInfo s;
    //     cin >> s.Id >> s.Age >> s.Gender >> s.CGA;
    //
    //     cout << "Id: " << s.Id
    //          << ", Age: " << s.Age
    //          << ", Gender: " << s.Gender
    //          << ", CGA: " << s.CGA << endl;


    //Problem 15

    // struct StudentGrade {
    //     int Lab[5];
    //     int Homework[3];
    //     int Exam[2];
    // };
    //
    //     StudentGrade s;
    //     int total = 0;
    //     float average;
    //     int count = 0;
    //
    //     for (int i = 0; i < 5; i++) {
    //         cin >> s.Lab[i];
    //         total += s.Lab[i];
    //         count++;
    //     }
    //     for (int i = 0; i < 3; i++) {
    //         cin >> s.Homework[i];
    //         total += s.Homework[i];
    //         count++;
    //     }
    //
    //     for (int i = 0; i < 2; i++) {
    //         cin >> s.Exam[i];
    //         total += s.Exam[i];
    //         count++;
    //     }
    //
    //
    //     average = (float)total / count;
    //     cout << "Total: " << total << ", Average: " << average << endl;


    //Problem 16

    // struct StudentInfo {
    //     int Id;
    //     int Age;
    //     char Gender;
    //     float CGA;
    // };
    //
    //     StudentInfo students[3];
    //
    //     for (int i = 0; i < 3; i++) {
    //         cout <<"Student "<< i + 1 << ":" << endl;
    //         cout << "ID: ";
    //         cin >> students[i].Id;
    //         cout << "Age: ";
    //         cin >> students[i].Age;
    //         cout << "Gender (M/F): ";
    //         cin >> students[i].Gender;
    //         cout << "CGA: ";
    //         cin >> students[i].CGA;
    //         cout << endl;
    //     }
    //
    //     for (int i = 0; i < 3; i++) {
    //         cout << "Id: " << students[i].Id
    //              << ", Age: " << students[i].Age
    //              << ", Gender: " << students[i].Gender
    //              << ", CGA: " << students[i].CGA << endl;
    //     }


    //Problem 17

    // struct StudentInfo {
    //     int Id;
    //     int Age;
    //     char Gender;
    //     float CGA;
    // };
    //
    //     StudentInfo student1, student2;
    //
    //     student1.Id = 1;
    //     student1.Age = 69;
    //     student1.Gender = 'M';
    //     student1.CGA = 4;
    //
    //
    //     student2 = student1;
    //
    //     cout << "Student1: Id = " << student1.Id
    //          << ", Age = " << student1.Age
    //          << ", Gender = " << student1.Gender
    //          << ", CGA = " << student1.CGA << endl;
    //
    //     cout << "Student2 (copied): Id = " << student2.Id
    //          << ", Age = " << student2.Age
    //          << ", Gender = " << student2.Gender
    //          << ", CGA = " << student2.CGA << endl;


    //Problem 18

    // struct StudentInfo {
    //     int Id;
    //     int Age;
    //     char Gender;
    //     float CGA;
    // };
    //     StudentInfo students[5];
    //     cout << "Enter details for Student 3:\n";
    //     cout << "ID: ";
    //     cin >> students[2].Id;
    //     cout << "Age: ";
    //     cin >> students[2].Age;
    //     cout << "Gender (M/F): ";
    //     cin >> students[2].Gender;
    //     cout << "CGA: ";
    //     cin >> students[2].CGA;
    //
    //
    //     students[4] = students[2];
    //     cout << "Id: " << students[2].Id
    //          << ", Age: " << students[2].Age
    //          << ", Gender: " << students[2].Gender
    //          << ", CGA: " << students[2].CGA << endl;
    //
    //     cout << "Student 5 (copied):\n";
    //     cout << "Id: " << students[4].Id
    //          << ", Age: " << students[4].Age
    //          << ", Gender: " << students[4].Gender
    //          << ", CGA: " << students[4].CGA << endl;


    //Problem 19

    // struct DateBirthday {
    //     int day;
    //     int month;
    //     int year;
    // };
    //
    // struct BankAccount {
    //     string Name;
    //     int AccountNumber;
    //     float balance;
    //     DateBirthday birthday;
    // };
    //
    //     BankAccount account;
    //     getline(cin, account.Name);
    //     cin >> account.AccountNumber;
    //     cin >> account.balance;
    //     cin >> account.birthday.day >> account.birthday.month >> account.birthday.year;
    //
    //
    //     cout << "\nBank Account Information:\n";
    //     cout << "Name: " << account.Name << endl;
    //     cout << "Account No: " << account.AccountNumber << endl;
    //     cout << "Balance: " << account.balance << endl;
    //     cout << "Birthday: " << account.birthday.day << "-"
    //          << account.birthday.month << "-"
    //          << account.birthday.year << endl;
    //return 0;}



    //Problem 20


    // struct Point {
    //     float x, y;
    // };
    // struct Line {
    //     Point p1, p2;
    // };
    // float calculateDistance(Point p1, Point p2) {
    //     return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    // }
    //
    // int main() {
    //     Line line;
    //     cin >> line.p1.x >> line.p1.y;
    //     cin >> line.p2.x >> line.p2.y;
    //     float distance = calculateDistance(line.p1, line.p2);
    //
    //     // Display the distance
    //     cout << "Distance is " << distance << endl;
    //
    //     return 0;
    // }



//Problem 21


struct Points {
    float x, y;
};

struct Triangle {
    Points a, b, c;
};

float distance(Points p1, Points p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}

int main() {
    Triangle t;
    cin >> t.a.x >> t.a.y;
    cin >> t.b.x >> t.b.y;
    cin >> t.c.x >> t.c.y;

    float side1 = distance(t.a, t.b);
    float side2 = distance(t.b, t.c);
    float side3 = distance(t.c, t.a);
    float perimeter = side1 + side2 + side3;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}







