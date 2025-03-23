/************ power of a number  TC: O(log n) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    return pow(x,n);
}

// Driver code
int main() {
    int x,n;
    cout<<"Enter the x: ";
    cin>>x;
    cout<<"Enter the n: ";
    cin>>n;
    cout << "facorial of the number is: " << n << " is: " << power(x,n) << endl;
    return 0;
}