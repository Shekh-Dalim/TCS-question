/************ LCM of two number TC: O(log min(a,b)) SC: O(log min(a,b)) ************/


#include <bits/stdc++.h>
using namespace std;

// Recursive function to return gcd of a and b
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// Driver program to test above function
int main() {
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;

    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
    return 0;
}
