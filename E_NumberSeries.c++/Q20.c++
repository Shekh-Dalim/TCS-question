/************ Print all prime factors of the given number TC: O(n) SC: O(1) ************/
/*

1st Iterartion: 

Start Loop (i = 2)

n % 2 == 0 (since 12 % 2 == 0) → Enter if condition.
Enter while loop:
cout << 2 → Output: 2
n = 12 / 2 = 6

n % 2 == 0 (since 6 % 2 == 0) → Continue while loop.
cout << 2 → Output: 2
n = 6 / 2 = 3
n % 2 != 0 (since 3 % 2 != 0) → Exit while loop.


2nd Iterartion: 

Increment i to 3

n % 3 == 0 (since 3 % 3 == 0) → Enter if condition.
Enter while loop:
cout << 3 → Output: 3
n = 3 / 3 = 1
n % 3 != 0 (since 1 % 3 != 0) → Exit while loop.


Increment i to 4

n = 1, so n > 1 is false, and the loop terminates.

*/

#include <bits/stdc++.h>
using namespace std;

void primeFactor(int n) {
    cout << "Prime Factors: ";

    for (int i = 2; n > 1; i++) { 
        if (n % i == 0) {
            while (n % i == 0) {
                cout << i << " "; // Fixed output syntax
                n = n / i; // Corrected division
            }
        }
    }
    cout << endl;
}

int main() {
    int n; // Fixed missing semicolon
    cout<<"Enter the Number: ";
    cin>>n;  // dry run ex 12
    
    primeFactor(n);
    return 0;
}
