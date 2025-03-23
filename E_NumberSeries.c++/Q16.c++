/************ Print Fibonacci upto Nth Term TC: O(n) SC: O(1) ************/

// Fibonacci Series using Space Optimized Method

// #include <bits/stdc++.h>
// using namespace std;

// int fib(int n) {
//     int a = 0, b = 1, c;
    
//     if (n == 0)
//         return a;
    
//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
    
//     return b;
// }

// // Driver code
// int main() {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout << "Fibonacci number at position " << n << " is: " << fib(n) << endl;
//     return 0;
// }


/************ Print Fibonacci upto Nth Term TC: O(n) SC: O(1) ************/

#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n < 2) {
        return n;
    }
    return fib(n - 2) + fib(n - 1);
}

void fibNumber(int n) {
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    cout << "The term in Fibonacci sequence at position " << a << " is " << fib(a) << endl;
    cout << "First " << a << " Fibonacci numbers: ";
    fibNumber(a);
    
    return 0;
}
