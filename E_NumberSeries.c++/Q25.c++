/************ Check if a number is Harshad Number  TC: O(N) SC: O(1) ************/

// if the number is divisible by the sum of its digits then call as Harshad Number 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 18; // Given number

    int temp = n; 
    int sum = 0;  

    // Loop to calculate the sum of digits
    while (temp > 0) {
        sum += temp % 10; 
        temp /= 10; 
    }

    if (n % sum == 0) {
        cout << "YES, it is a Harshad Number" << endl;
    } else {
        cout << "NO, it is not a Harshad Number" << endl;
    }

    return 0;
}
