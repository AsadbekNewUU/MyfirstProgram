#include <iostream>
using namespace std;

// int main() {
    //Problem 1

    // int n, m;
    // cin >> n >> m;
    //
    // int matrix[n][m];
    // int sum = 0;
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> matrix[i][j];
    //         sum += matrix[i][j];
    //     }
    // }
    //
    // cout << sum << endl;

    //Problem 2

    // int n, m;
    // cin >> n >> m;
    //
    // int matrix[n][m];
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     int maxVal = matrix[i][0];
    //     for (int j = 1; j < m; j++) {
    //         if (matrix[i][j] > maxVal) {
    //             maxVal = matrix[i][j];
    //         }
    //     }
    //     cout << maxVal;
    // }

    //Problwm 3

    // int n, m;
    // cin >> n >> m;
    //
    // int matrix[n][m];
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }
    //
    // for (int j = 0; j < m; j++) {
    //     int sum = 0;
    //     for (int i = 0; i < n; i++) {
    //         sum += matrix[i][j];
    //     }
    //     cout << sum;
    // }

    //Problem 4

    // int n;
    // cin >> n;
    //
    // int matrix[n][n];
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }
    //
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += matrix[i][i];
    // }
    //
    // cout << sum;


    //Problem 5

    // int m, n;
    // cin >> m >> n;
    //
    // int A[m][n];
    //
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cin >> A[i][j];
    //     }
    // }
    //
    // for (int j = 0; j < n; j++) {
    //     for (int i = 0; i < m; i++) {
    //         cout << A[i][j];
    //     }
    // }


    //Problem 6
    // int m = 2, n = 2, p = 2;
    //
    // int A[m][n] = {
    //     {1, 2},
    //     {3, 4}
    // };
    //
    // int B[n][p] = {
    //     {2, 2},
    //     {2, 2}
    // };
    //
    // int C[m][p] = {0};
    //
    //
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < p; j++) {
    //         for (int k = 0; k < n; k++) {
    //             C[i][j] += A[i][k] * B[k][j];
    //         }
    //     }
    // }
    //
    //
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < p; j++) {
    //         cout << C[i][j];
    //     }
    // }
//     return 0;
// }

    //Problem 7
    // const int N = 3;
    //
    // void rotate90(int matrix[N][N]) {
    //     for (int i = 0; i < N; i++) {
    //         for (int j = i; j < N; j++) {
    //             swap(matrix[i][j], matrix[j][i]);
    //         }
    //     }
    //
    //     for (int i = 0; i < N; i++) {
    //         int left = 0, right = N - 1;
    //         while (left < right) {
    //             swap(matrix[i][left], matrix[i][right]);
    //             left++;
    //             right--;
    //         }
    //     }
    // }
    //
    // void printMatrix(int matrix[N][N]) {
    //     for (int i = 0; i < N; i++) {
    //         for (int j = 0; j < N; j++) {
    //             cout << matrix[i][j];
    //         }
    //     }
    // }
    //
    // int main() {
    //     int matrix[N][N] = {
    //         {1, 2, 3},
    //         {4, 5, 6},
    //         {7, 8, 9}
    //     };
    //
    //     rotate90(matrix);
    //     printMatrix(matrix);
    //return 0;
    // }

//String Problems


//Problem 1

int main() {
    // string s;
    // cin >> s;
    //
    // int vowels = 0, consonants = 0;
    //
    // for (char c : s) {
    //     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    //         vowels++;
    //     } else {
    //         consonants++;
    //     }
    // }
    //
    // cout << vowels << " " << consonants << endl;

    //Problem 2

    // string str;
    // cin >> str;
    //
    //
    // for (int i = str.length() - 1; i >= 0; i--) {
    //     cout << str[i];
    // }


    //Problem 3


    // char word[100];
    // cin >> word;
    //
    // int length = 0;
    // while (word[length] != '\0') {
    //     length++;
    // }
    //
    // bool isPalindrome = true;
    // for (int i = 0; i < length / 2; i++) {
    //     if (word[i] != word[length - 1 - i]) {
    //         isPalindrome = false;
    //         break;
    //     }
    // }
    //
    // if (isPalindrome) {
    //     cout << "Yes" << endl;
    // } else {
    //     cout << "No" << endl;
    // }


    //Problem 4

        // char str[100];
        // int freq[256] = {0};
        // cin >> str;
        //
        // for (int i = 0; str[i] != '\0'; i++) {
        //     freq[(int)str[i]]++;
        // }
        //
        // char mostFrequent;
        // int maxFreq = 0;
        // for (int i = 0; str[i] != '\0'; i++) {
        //     if (freq[(int)str[i]] > maxFreq) {
        //         maxFreq = freq[(int)str[i]];
        //         mostFrequent = str[i];
        //     }
        // }
        //
        // cout << mostFrequent << endl;

    //Problem 5

        // char str[100];
        // bool seen[256] = {false};
        // cin >> str;
        //
        // for (int i = 0; str[i] != '\0'; i++) {
        //     if (!seen[(int)str[i]]) {
        //         cout << str[i];
        //         seen[(int)str[i]] = true;
        //     }
        // }

    //Problem 6

        char sentence[1000];
        cin.getline(sentence, 1000);

        int maxLen = 0, currentLen = 0;
        int maxStart = 0, currentStart = 0;

        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] != ' ') {
                if (currentLen == 0) {
                    currentStart = i;
                }
                currentLen++;
            } else {
                if (currentLen > maxLen) {
                    maxLen = currentLen;
                    maxStart = currentStart;
                }
                currentLen = 0;
            }
        }

        if (currentLen > maxLen) {
            maxLen = currentLen;
            maxStart = currentStart;
        }

        for (int i = maxStart; i < maxStart + maxLen; i++) {
            cout << sentence[i];
        }

        return 0;
}

//Problem 7 I couldnt do
