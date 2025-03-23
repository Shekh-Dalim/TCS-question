/***** Q: Remove duplicate from unsorted array TC:-O(n2)  SC:-O(1)  ****/

#include <iostream>
using namespace std;

void removeDuplicatesSimple(int arr[], int& n) {
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] is already in the unique part
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[j] == arr[i]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add it to the unique part
        if (!isDuplicate) {
            arr[uniqueCount++] = arr[i];
        }
    }

    // Update the array size
    n = uniqueCount;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    removeDuplicatesSimple(arr, n);

    cout << "Array after removing duplicates: ";
    printArray(arr, n);

    return 0;
}
