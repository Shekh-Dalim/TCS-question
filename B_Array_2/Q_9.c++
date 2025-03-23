/*********** Program for array left rotation by d position  TC: O(n) SC:O(d) ***********/

#include <bits/stdc++.h>

using namespace std;

void leftRotate(int arr[], int n, int d) {
    int temp[d];

    // Store the first d elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by d positions
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy the temporary array back to the original array
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    leftRotate(arr, n, d);

    cout << "Array after left rotations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
