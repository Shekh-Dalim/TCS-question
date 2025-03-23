/************ GCD of two number TC: O(log min(a,b)) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return (a == 0) ? b : a;
}

int main() {

    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
