/*********  Palindrom Number TC:O(log N) SC: O(1)***********/


#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    if (num < 0) {
        return false; // Negative numbers are not palindromes
    }    
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}
