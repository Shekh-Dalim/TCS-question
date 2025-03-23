/************ Sum of number in the given range TC: O(N) SC: O(1) ************/

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of numbers in a given range
int calculateSum(int left, int right) {
    int sum = 0;
    for (int i = left; i <= right; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int left, right;

    // Taking user input for the range
    cout << "Enter the left bound: ";
    cin >> left;
    cout << "Enter the right bound: ";
    cin >> right;

    // Calling the function and displaying the result
    int result = calculateSum(left, right);
    cout << "The sum of the numbers in the given range is: " << result << endl;

    return 0;
}

