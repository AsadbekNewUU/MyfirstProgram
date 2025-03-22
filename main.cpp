#include <iostream>
using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;
//
//     int arr[n];
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//
//     cout << "Sum = " << sum << endl;
//
//     return 0;
// }




// int calcAverage(int arr[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum / n;
// }

// int main() {
//     int n;
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " numbers: ";
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     cout << "Average = " << calcAverage(arr, n) << endl;
//
//     return 0;
// }


// int findMin(int arr[], int n) {
//     int minVal = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < minVal) {
//             minVal = arr[i];
//         }
//     }
//     return minVal;
// }
//
// int main() {
//     int n;
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " numbers: ";
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     cout << "Min = " << findMin(arr, n) << endl;
//
//     return 0;
// }




// int indexOfLargestElement(double array[], int size) {
//     if (size <= 0) {
//         return -1;
//     }
//
//     int maxIndex = 0;
//     for (int i = 1; i < size; i++) {
//         if (array[i] >= array[maxIndex]) {
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
//
// int main() {
//     const int SIZE = 15;
//     double numbers[SIZE];
//
//     cout << "Enter 15 numbers: ";
//     for (int i = 0; i < SIZE; i++) {
//         cin >> numbers[i];
//     }
//
//     int largestIndex = indexOfLargestElement(numbers, SIZE);
//     cout << "Index of the largest element: " << largestIndex << endl;
//
//     return 0;
// }




// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int size;
//     cout << "Enter the size of the lists: ";
//     cin >> size;
//
//     int list1[size], list2[size];
//
//     cout << "Enter elements of list1: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list1[i];
//     }
//
//     cout << "Enter elements of list2: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list2[i];
//     }
//
//     if (strictlyEqual(list1, list2, size)) {
//         cout << "The two lists are strictly identical." << endl;
//     } else {
//         cout << "The two lists are NOT strictly identical." << endl;
//     }
//
//     return 0;
// }
//
//
// int main() {
//     int freq[26] = {0};
//     char ch;
//
//     while (true) {
//         cin >> ch;
//         if (ch == '0') break;
//
//         if (ch >= 'a' && ch <= 'z') {
//             freq[ch - 'a']++;
//         }
//     }
//
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > 0) {
//             cout << char(i + 'a') << ": " << freq[i] << endl;
//         }
//     }
//
//     return 0;
// }



// void ArrSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     ArrSort(arr, n);
//
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//
//     return 0;
// }



// #include <cstdlib>
// #include <ctime>
//
//
// int main() {
//     srand(time(0));
//
//     int rolls = 10000;
//     int counts[6] = {0};
//
//     // Roll the die 10,000 times
//     for (int i = 0; i < rolls; i++) {
//         int roll = (rand() % 6) + 1;
//         counts[roll - 1]++;
//     }
//
//
//     cout << "Die Roll Results (10000 Rolls):\n";
//     for (int i = 0; i < 6; i++) {
//         cout << (i + 1) << ": " << counts[i] << " times\n";
//     }
//
//     return 0;
// }




// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     reverseArray(arr, 0, n - 1);
//
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//
//     return 0;
// }




bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}




