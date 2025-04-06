#include <iostream>
using namespace std;
// int main() {
    //Problem 1

    // int num = 7;
    // int* ptr = &num;
    // cout << num << endl;
    // cout << ptr << endl;
    // cout<< *ptr << endl;

    //Problem 2

    // int num = 10;
    // int* ptr = &num;
    // cout << num << endl;
    // *ptr = 20;
    // cout << "Modification: " << num << endl;
//     return 0;
// }

    //Problem 3

//     void swap(int* a, int* b) {
//         int c = *a;
//         *a = *b;
//         *b = c;
//     }
//
//     int main() {
//         int num1 = 5, num2 = 10;
//
//         cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
//         swap(&num1, &num2);
//         cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
//         return 0;
// }

//Problem 4


// int main() {
    // int arr[] = {1, 2, 3, 4, 5};
    // int* ptr = arr;
    // for (int i = 0; i < 5; i++) {
    //     cout << *(ptr + i) << " ";
    // }


    //Problem 5

    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int* ptr = arr;
    // int* mid = ptr + (size / 2);
    // cout << *mid << endl;
//     return 0;
// }

    //Problem 6

// void square(int* num) {
//     *num = (*num) * (*num);
// }
//
// int main() {
//     int num = 5;
//     cout<< num << endl;
//     square(&num);
//     cout << num << endl;
//
//     return 0;
// }


//Problem 7

// int main() {
    // int arr[] = {1, 2, 3, 4, 5};
    // int* ptr = arr;
    //
    // cout <<sizeof(arr)<< endl;
    // cout <<sizeof(ptr)<< endl;


    //Problem 8

    //     int num = 42;
    //     void* ptr = &num;
    // cout << "The value of num is: " << *(static_cast<int*>(ptr)) << endl;
//     return 0;
// }


//Problem 9

// int findMax(int* arr, int size) {
//
//     int max = *arr;
//
//     for (int* ptr = arr; ptr < arr + size; ++ptr) {
//         if (*ptr > max) {
//             max = *ptr;
//         }
//     }
//
//     return max;
// }
//
// int main() {
//     int arr[] = {1, 2, 3, 7, 5, 6, 19};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int maxValue = findMax(arr, size);
//     cout << maxValue << endl;
//
//     return 0;
// }


//Problem 10



int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int* ptr = arr;
    int* maxPtr = arr;
    for (int* ptr = arr; ptr < arr + n; ++ptr) {
        if (*ptr > *maxPtr) {
            maxPtr = ptr;
        }
    }
    cout << *maxPtr << endl;
    cout << maxPtr << endl;

    return 0;
}



