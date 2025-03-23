/******** Palindrom in a given range TC: O( (max - min + 1) ^ * log n) SC: O(1) **********/


#include <bits/stdc++.h>
using namespace std;

// A function to check if n is a palindrome
bool isPalindrome(int n) {
    int original = n, rev = 0;
    
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return original == rev; // Returns true if palindrome, false otherwise
}

// Prints palindromes between min and max
void countPal(int min, int max) {
    for (int i = min; i <= max; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Driver Code (User provides range as input)
int main() {
    int min, max;
    cout << "Enter the range (min max): ";
    cin >> min >> max;

    if (min > max) {
        cout << "Invalid range! Min should be less than or equal to Max." << endl;
        return 1; // Exit with error code
    }

    cout << "Palindromes between " << min << " and " << max << " are:" << endl;
    countPal(min, max);

    return 0;
}
