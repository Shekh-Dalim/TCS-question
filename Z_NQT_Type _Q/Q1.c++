/*  Find the subarray which is present in the array which sum is target(ex 7) find the starting index and end index and if nothing is find equal to target then return -1*/


#include <bits/stdc++.h>
using namespace std;

void findIndex(int arr[], int n, int target) {
    int left = 0, sum = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right]; 

        // Shrink the window from the left if sum exceeds target
        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        // If sum matches the target, print the indices
        if (sum == target) {
            cout << "Subarray found from index " << left << " to " << right << endl;
            return;
        }
    }

    // If no subarray found
    cout << "-1" << endl;
}

int main() {
    int arr[] = {1, 10, 4, 0, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    findIndex(arr, size, target);
    return 0;
}
