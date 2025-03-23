/*****************  Largest and Smallest digits of a number TC: O(log(d) SC: O(1)     *********************/

#include <bits/stdc++.h>
using namespace std;

void findLargestAndSmallestDigits(int n) {
    int largest = 0; 
    int smallest = 9; 

    while (n > 0) {
        int digit = n % 10; 
        largest = max(largest, digit); 
        smallest = min(smallest, digit); 
        n /= 10; 
    }

    if(smallest == 1){
        smallest--;
    }

    cout << "Largest digit: " << largest << endl;
    cout << "Smallest digit: " << smallest << endl;
}

int main() {
    int n;
    cout<<"Enter the n value: ";
    cin>>n;
    findLargestAndSmallestDigits(n);
    return 0;
}









