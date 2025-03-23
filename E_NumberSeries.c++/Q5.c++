/*********** Check if the a number is armstrong number  TC: O(N^2) SC: O(1) ***********/

// Find the number of digits
// int num_digits = to_string(number).length();

#include <bits/stdc++.h>
using namespace std;

// Function to calculate base^exp manually
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}


bool isArmstrong(int number) {
    int original_number = number;
    int remainder;
    int result = 0;

    // Find the number of digits
    int num_digits = to_string(number).length();
    
    // Calculate the sum of each digit raised to num_digits
    while (original_number != 0) {
        remainder = original_number % 10;
        result += power(remainder, num_digits); // Raise to correct power
        original_number /= 10;
    }
    
    return result == number; 
}

int main() {
    int number;  
    cout << "Enter the number: ";
    cin >> number;
    
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}
