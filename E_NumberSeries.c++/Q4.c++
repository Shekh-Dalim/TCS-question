/********  Prime Number in the range TC: O(N^2) SC: O(1) *********/

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2){
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            return false;
        } 
    }
    return true;
}


void countPrime(int min, int max) {
    for (int i = min; i <= max; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}


int main() {
    // User input for lower and upper bounds of the interval
    int a, b;
    cout << "Enter the lower bound: ";
    cin >> a;
    cout << "Enter the upper bound: ";
    cin >> b;
    
    // Print display message
    cout << "Prime numbers between " << a << " and " << b << " are: " << endl;
    
    // Traverse each number in the interval
    countPrime(a,b);

    return 0;
}
