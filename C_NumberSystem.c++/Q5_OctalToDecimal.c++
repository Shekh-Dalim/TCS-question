/********** Octal to Decimal ***********/  

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an octal number: ";
    cin >> n; // Take user input in octal form

    int decimal = 0;
    int i = 1; // Represents powers of 8 (1, 8, 64, ...)

    while (n != 0)
    {
        int digit = n % 10; // Extract the last digit of the octal number
        decimal = decimal + (digit * i); // Convert it to decimal and add
        n = n / 10; // Remove the last digit of the octal number
        i = i * 8; // Move to the next power of 8
    }

    cout << "Decimal equivalent is " << decimal << endl;
    return 0;
}
