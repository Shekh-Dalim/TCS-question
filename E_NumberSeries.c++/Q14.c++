

/************************* 7 Leetcode Reverce of a number TC:O(1) SC: O(1) ***************************/
#include <bits/stdc++.h>
using namespace std;

int reverce(int n)
{

    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        // if ((ans*10 > INT_MAX ) || (ans*10 < INT_MIN))  //(output is error)  The overflow check should be done using the next value of ans * 10 + digit instead of ans * 10.
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }

        ans = (ans * 10) + digit; // Normal flow
        n = n / 10;
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result = reverce(n);
    cout << "The reverce of the number is: " << result;
    return 0;
}