/************ Factor of a given number TC: O(n) SC: O(1)***********/



#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
   for(int i = 1; i <= n; i++){
    if(n % i == 0)
        cout<<i<<" ";
   }
   cout<<endl;
}

// Driver code
int main() {
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    cout << "The divisor of the number is: " << n << " is: " ;
    printDivisors(n);
    return 0;
}