/****** Counting Rock Sample *******/


#include <iostream>
using namespace std;

void findRockSample(int ranges[][2], int n, int r, int arr[]) {
    
    int a[r];

    // Iterate over the ranges
    for (int i = 0; i < r; i++) {
        int c = 0;
        int l = ranges[i][0]; // Lower bound of the range
        int h = ranges[i][1]; // Upper bound of the range

        // Count elements in the array that lie within the range
        for (int j = 0; j < n; j++) {
            if (l <= arr[j] && arr[j] <= h) {
                c += 1;
            }
        }
        a[i] = c;
    }

    // Output the results
    for (int i = 0; i < r; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Driver Code
int main() {
    int n = 5; // Number of elements in the array
    int r = 2; // Number of ranges

    int arr[] = {400, 567, 890, 765, 987}; // Array of elements
    int ranges[2][2] = {{300, 380}, {400, 480}}; // Ranges to check

    // Function call
    findRockSample(ranges, n, r, arr);

    return 0;
}



/**** same using vetor ****/

// #include <bits/stdc++.h>
// using namespace std;

// void findRockSample(vector<vector<int>> ranges, int n, int r, vector<int> arr) {
//     vector<int> a;

//     // Iterate over the ranges
//     for (int i = 0; i < r; i++) {
//         int c = 0;
//         int l = ranges[i][0]; // Lower bound of the range
//         int h = ranges[i][1]; // Upper bound of the range

//         // Count elements in the array that lie within the range
//         for (int j = 0; j < arr.size(); j++) {
//             if (l <= arr[j] && arr[j] <= h) {
//                 c += 1;
//             }
//         }
//         a.push_back(c);
//     }

//     // Output the results
//     for (auto count : a) {
//         cout << count << " ";
//     }
//     cout << endl;
// }

// // Driver Code
// int main() {
//     int n = 5; // Number of elements in the array
//     int r = 2; // Number of ranges

//     vector<int> arr = {400, 567, 890, 765, 987}; // Array of elements
//     vector<vector<int>> ranges = {{300, 380}, {800, 1000}}; // Ranges to check

//     // Function call
//     findRockSample(ranges, n, r, arr);

//     return 0;
// }
