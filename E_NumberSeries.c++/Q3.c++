/********* Prime number TC: O(n) SC: O(1) **********/


// n % i == 0  // Not primt
// n % i != 0  // Prime

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    bool flag = false;
    for (int i = 2; i < n; i++)
    // for (int i = 2; i <= n / 2; i++)
    // for (int i = 2; i * i <= n; i++) // is the best choice
    {
        if (n % i == 0)
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n) == 0)
    {
        cout << "Not a prime Number" << endl;
    }
    else
    {
        cout << "prime number";
    }
    return 0;
}