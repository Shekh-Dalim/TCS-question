/************ Factorial of a number  TC: O(n) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

int factotial(int n) {
    int a = 0, b = 1, c;
    
    if (n <= 1){
        return 1;
    }

    return n * factotial(n - 1);
}


// Driver code
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout << "facorial of the number is: " << n << " is: " << factotial(n) << endl;
    return 0;
}