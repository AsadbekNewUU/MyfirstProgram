#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// int main() {
    //Problem 1

    // int arr[5] = {10, 20, 30, 40, 50};
    // int* ptr = arr;
    //
    // for (int i = 0; i < 5; i++) {
    //     cout << *(ptr + i);
    // }

    //Problem 2
        // int arr[6] = {2, 4, 6, 8, 10, 12};
        // int* ptr = arr;
        //
        // for (int i = 0; i < 6; i++) {
        //     *(ptr + i) = *(ptr + i) * 3;
        //     cout << *(ptr + i);
        // }

    //Problem 3

        // int arr[4] = {5, 10, 15, 20};
        // int* ptr = arr;
        //
        // cout  << ptr[2] << endl;
        // cout  << *(arr + 2) << endl;

    //Problem 4

        // int arr[5] = {1, 2, 3, 4, 5};
        // int* ptr = arr + 4;
        //
        // for (int i = 0; i < 5; i++) {
        //     cout << *(ptr - i);
        // }

    //Problem 5

        // int arr[3] = {1, 2, 3};
        // int* ptr = arr;
        // ptr = ptr + 1;
        // cout << "*ptr=" << *ptr << endl;

    // Arrays have fixed address but pointers we can change because we can edit their address


    //Problem 6

        // int arr[4] = {10, 20, 30, 40};
        // int* ptr = arr;
        //
        // for (int i = 0; i < 4; i++) {
        //     cout << "Value: " << *(ptr + i)
        //          << " Address: " << (ptr + i) << endl;
        // }

    //Problem 7

        // int arr[7] = {11, 4, 7, 18, 5, 2, 9};
        // int* ptr = arr;
        //
        // for (int i = 0; i < 7; i++) {
        //     if (*(ptr + i) % 2 == 0) {
        //         cout << *(ptr + i);
        //     }
        // }


    //Problem 8

        // int matrix[2][3] = {1, 2, 3, 4, 5, 6};
        //
        // int* ptr = &matrix[0][0];
        //
        // for (int i = 0; i < 6; i++) {
        //     cout << *(ptr + i);
        // }

    //Problem 9

        // int a = 7, b = 14, c = 21;
        //
        // int* ptrs[3] = {&a, &b, &c};
        //
        // for (int i = 0; i < 3; i++) {
        //     cout << *ptrs[i];
        // }


    //Problem 10

        // int arr[5] = {9, 3, 7, 1, 6};
        // int* ptr = arr;
        //
        // for (int i = 0; i < 5 - 1; i++) {
        //     for (int j = 0; j < 5 - i - 1; j++) {
        //         int* a = ptr + j;
        //         int* b = ptr + j + 1;
        //         if (*a > *b) {
        //             int temp = *a;
        //             *a = *b;
        //             *b = temp;
        //         }
        //     }
        // }
        // for (int i = 0; i < 5; i++) {
        //     cout << *(ptr + i);
        // }


    //Problem 11

        // const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
        //
        // for (int i = 0; i < 4; i++) {
        //     cout << suit[i];
        // }

    //Problem 12

        // const char* days[3] = {"Mon", "Tue", "Wed"};
        //
        // for (int i = 0; i < 3; i++) {
        //     cout << *(*(days + i) + 1);
        // }

    //Problem 13

        // const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
        // const char* faces[13] = {
        //     "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
        //     "Eight", "Nine", "Ten", "Jack", "Queen", "King"
        // };
        //
        // int deck[4][13] = {0};
        // deck[0][0] = 1;
        // deck[2][1] = 1;
        // for (int suit = 0; suit < 4; suit++) {
        //     for (int face = 0; face < 13; face++) {
        //         if (deck[suit][face] == 1) {
        //             cout << faces[face] << " of " << suits[suit] << endl;
        //         }
        //     }
        // }

    //Problem 14

        // const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
        // const char* faces[13] = {
        //     "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
        //     "Eight", "Nine", "Ten", "Jack", "Queen", "King"
        // };
        //
        // int deck[4][13] = {0};
        //
        // srand(time(0));
        // for (int card = 1; card <= 52; card++) {
        //     int row, col;
        //     do {
        //         row = rand() % 4;
        //         col = rand() % 13;
        //     } while (deck[row][col] != 0);
        //     deck[row][col] = card;
        // }
        //
        //
        // for (int card = 1; card <= 52; card++) {
        //     for (int suit = 0; suit < 4; suit++) {
        //         for (int face = 0; face < 13; face++) {
        //             if (deck[suit][face] == card) {
        //                 cout << faces[face] << " of " << suits[suit] << endl;
        //             }
        //         }
        //     }
        // }
    // return 0;
    // }


//Problem 15

// void greet() {
//     cout << "Hello from greet()" << endl;
// }
//
// void bye() {
//     cout << "Goodbye from bye()" << endl;
// }
//
// int main() {
//     void (*fptr)();
//
//     fptr = greet;
//     fptr();
//     fptr = bye;
//     fptr();
//     return 0;
// }



//Problem 16


// int add(int a, int b) {
//     return a + b;
// }
//
// int multiply(int a, int b) {
//     return a * b;
// }
//
// int main() {
//     int (*fptr)(int, int);
//
//     int x, y;
//     cin >> x >> y;
//
//     fptr = add;
//     cout << "Add: " << fptr(x, y) << endl;
//     fptr = multiply;
//     cout << "Multiply: " << fptr(x, y) << endl;
//     return 0;
// }


//Problem 17

// int add(int a, int b) {
//     return a + b;
// }
// int multiply(int a, int b) {
//     return a * b;
// }
//
// void calculate(int (*op)(int, int), int x, int y) {
//     int result = op(x, y);
//     cout << result << endl;
// }
//
// int main() {
//     int a, b;
//     cin >> a >> b;
//     calculate(add, a, b);
//     calculate(multiply, a, b);
//
//     return 0;
// }

//Problem 18

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*ops[])(int, int) = {add, multiply};

    int choice;
    int x, y;
    cin>>x>>y;

    cout << "Select:\n";
    cout << "1. Add\n";
    cout << "2. Multiply\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice >= 1 && choice <= 2) {
        int result = ops[choice - 1](x, y);
        cout << "Output: " << result << endl;
    } else {
        cout << "Visit the doctor!" << endl;
    }
    return 0;
}









