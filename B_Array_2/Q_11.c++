/****** Sort a K-Increasing-Decreasing Array TC: O(n log n)  SC:O(1) ****** */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {8, 7, 1, 6, 5, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); // Corrected size calculation

    // Sort the array in ascending order
    sort(arr, arr + n);

    // Print smaller elements first
    for (int i = 0; i < n / 2; i++) { 
        cout << arr[i] << " ";
    }

    // Print larger elements in reverse order
    for (int i = n - 1; i >= n / 2; i--) { 
        cout << arr[i] << " ";
    }

    return 0;
}
