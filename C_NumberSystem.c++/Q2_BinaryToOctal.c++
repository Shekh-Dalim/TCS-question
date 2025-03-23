/*********** Binary to Octal TC: O(logn) SC: O(1)**************/  

// binary to decila and decimal to binary 

#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the binary number: ";
    cin >> n; 

    int decimal = 0; 
    int i = 1; // To represent powers of 2 (1, 2, 4, 8, ...)

    while (n != 0) 
    {
        int digit = n % 10; 
        
        if (digit == 1) 
        {
            decimal = decimal + i; 
        }

        n = n / 10; 
        i = i * 2; 
    }

    cout << "Decimal equivalent is " << decimal << endl;

    int octal = 0, place = 1; 

    while (decimal != 0) // Convert decimal to octal
    {
        int rem = decimal % 8; 
        octal =octal + rem * place; // Add it to the octal number at the correct place
        decimal /= 8; // Move to the next digit in decimal
        place *= 10; // Increase place value (1, 10, 100, ...)
    }

    cout << "Octal equivalent is " << octal << endl; // Output the octal result
}


/*

1011 (binary) = 11 (decimal)
(1×8)+(0×4)+(1×2)+(1×1) = 11

Decimal 11 = Octal 13
 11÷8=1 quotient, 3 remainder
 1÷8=0 quotient, 1 remainder


*/


// Direct binary to octal

#include <bits/stdc++.h> 
using namespace std;

int main() {
    string binary; // Variable to store the binary number as a string
    cout << "Enter the binary number: ";
    cin >> binary; 

    // Pad binary with leading zeros to make its length a multiple of 3
    while (binary.length() % 3 != 0) { 
        binary = "0" + binary; // Add '0' to the beginning if needed
    }

    string octal = ""; // Variable to store the octal equivalent
    
    // Process each group of 3 binary digits
    for (size_t i = 0; i < binary.length(); i += 3) { 
        string group = binary.substr(i, 3); // Extract a group of 3 binary digits
        
        // Convert the group of 3 binary digits to an octal digit
        int value = (group[0] - '0') * 4 + (group[1] - '0') * 2 + (group[2] - '0') * 1;
        octal += to_string(value); // Append the octal digit to the result
    }

    cout << "Octal equivalent is " << octal << endl; // Display the octal number
    return 0; // End of the program
}
