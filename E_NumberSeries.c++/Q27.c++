/************ Sum of digits of a number  TC: O(log N) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digits of a number
int getSum(int n) {
    int d, sum = 0;

    // Extract digits one by one and add them to the sum
    while (n > 0) {
        d = n % 10;  // Get the last digit of the number
        sum += d;    // Add the digit to the sum
        n = n / 10;  // Remove the last digit from the number
    }

    return sum; // Return the sum of digits
}

// Driver function
int main() {
    int n = 472;

    // Call the getSum function and print the result
    cout << "Sum of digits of the given number is: " << getSum(n) << endl;

    return 0;
}


