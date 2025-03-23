/*********** Average of an array TC: O(n) SC: O(1) ************/

#include <iostream>

using namespace std;

double calculateAverage(int arr[], int n) {
    if (n == 0) {
        return 0; // Return 0 for an empty array to avoid division by zero
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Calculate the sum of all elements
    }
    
    double average = sum / n; // Calculate the average
    return average;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    double average = calculateAverage(arr, n);
    cout << "Average of the array: " << average << endl;
    
    return 0;
}