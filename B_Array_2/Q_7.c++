/***********  Maximum Product Subarray TC: O(n) SC: O(1)***********/

#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    if (n == 0) return 0;
    
    int max_product = arr[0]; // Initialize the maximum product ending at the current index
    int min_product = arr[0]; // Initialize the minimum product ending at the current index
    int result = arr[0]; // Initialize the final result
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            swap(max_product, min_product); // Swap max and min when encountering a negative number
        }
        
        max_product = max(arr[i], max_product * arr[i]);
        min_product = min(arr[i], min_product * arr[i]);
        
        result = max(result, max_product);
    }
    
    return result;
}

int main() {
    int arr[] = {6, -3, -10, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum product subarray: " << maxProductSubarray(arr, n) << endl;
    
    return 0;
}