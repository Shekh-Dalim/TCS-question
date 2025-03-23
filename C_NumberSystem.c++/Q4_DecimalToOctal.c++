/********** Decimal to Octal ***********/  

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n; // Take user input in decimal form

    int ans = 0;
    int i = 1; // Represents the place value in octal (1, 10, 100, ...)

    while (n != 0)
    {
        int digit = n % 8; // Extract the last octal digit
        ans = (digit * i) + ans; // Add the digit at the correct place
        n = n / 8; // Reduce n by dividing by 8
        i = i * 10; // Update place value
    }

    cout << "Octal equivalent is " << ans << endl;
    return 0;
}
