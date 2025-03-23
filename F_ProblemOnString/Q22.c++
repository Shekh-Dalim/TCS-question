/********* Change case of each character in a string TC:O(n) SC: O(n) ************/


#include <bits/stdc++.h>
using namespace std;

// Function to toggle the case of characters in a string
string toggleCase(string str, int n) {
    string ans = "";

    for (int i = 0; i < n; i++) {
        char ch = str[i];

        // Toggle case using built-in functions
        if (isupper(ch)) {
            ans += tolower(ch);  // Convert uppercase to lowercase
        } else if (islower(ch)) {
            ans += toupper(ch);  // Convert lowercase to uppercase
        } else {
            ans += ch;  // Keep non-alphabetic characters unchanged
        }
    }

    return ans;
}

int main() {
    string str = "Java4SCRIPT";
    int length = str.length();

    cout << "Resultant string: " << toggleCase(str, length) << endl;
    
    return 0;
}
