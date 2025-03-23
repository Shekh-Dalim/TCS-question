/************ Check if a number is a strong number or not TC: O(n*n) SC: O(1) ************/

// 1!+4!+5!=1+24+120=145 ✅ (Strong Number)

#include <iostream>
using namespace std;

bool isStrong(int x) {
    int factSum = 0;
    int temp = x; // Corrected variable initialization

    while (temp > 0) {
        int digit = temp % 10; 
        int factorial = 1;

        // Calculate the factorial of the current digit
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        // Add the factorial to the sum
        factSum += factorial;
        temp /= 10; 
    }

    // Compare the sum of factorials with the original number
    return (factSum == x);
}

int main() {
    int x = 145;

    if (isStrong(x)) {
        cout << x << " is a Strong number." << endl;
    } else {
        cout << x << " is not a Strong number." << endl;
    }

    return 0;
}
