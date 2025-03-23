/************ Check if a number is abundant Number  or not TC: O(N) SC: O(1) ************/

// A number is Abundant if the sum of its divisors is greater than itself

#include <iostream>
using namespace std;

bool isAbundantNumber(int n) {
    int sum = 0; 

    // Loop through numbers [1, n-1] to find divisors
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum > n;
}

// Driver program
int main() {
    // Function call
    if (isAbundantNumber(12)) {
        cout << "YES, it is an Abundant Number" << endl;
    } else {
        cout << "NO, it is not an Abundant Number" << endl;
    }

    return 0;
}
