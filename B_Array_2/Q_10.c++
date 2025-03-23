/*********** Print array after it is right rotate K time  TC: O(n) SC: O(1) **********/

#include <iostream>

using namespace std;

void right_rotate(int arr[], int n, int rotations) {
    for (int i = 0; i < rotations; i++) {
        int last = arr[n - 1]; // Store the last element

        // Shift elements to the right
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = last; // Place the last element at the beginning
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Correct array size calculation

    int rotations ;
    cout<<"Enter the number of rotation: ";
    cin>>rotations;

    right_rotate(arr, n, rotations);

    cout << "Array after right rotation:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
