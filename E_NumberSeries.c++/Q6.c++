/******** perfect Number  TC: O(n) SC: (1) ********/
// A Perfect Number is a positive integer that is equal to the sum of its proper divisors (excluding itself). 
// ex:factor of 6 is  1,2,3  and the sum of the three factor 1+2+3 = 6

#include <iostream>  
using namespace std;

bool isPerfect(int number) {
    int sum = 0;
    
    for (int i = 1; i < number; i++) {
        if (number % i == 0) { // Check if i is a divisor of number
            sum += i; 
        }
    }
    
    return sum == number; 
}

int main() {
    int number; 
    cout<<"Enter the number: ";
    cin>>number;
    
    if (isPerfect(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }
    
    return 0;
}
