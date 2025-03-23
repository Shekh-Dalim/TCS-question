/********* Count number of vowels,consonants, apaces in string TC:O(n) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

// Function to count vowels, consonants, and white spaces in a given string
void solve(string str) {
    int vowels = 0, consonants = 0, whitespaces = 0;

    // Convert the given string to lowercase for uniformity
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Iterate through each character in the string
    for (char ch : str) {
        // Check if the character is a vowel (a, e, i, o, u)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check if the character is a lowercase letter (a-z)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        // Check if the character is a white space
        else if (ch == ' ') {
            whitespaces++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "White spaces: " << whitespaces << endl;
}

int main() {
    string str = "Last moment tuition";

    // Call the solve function to count vowels, consonants, and white spaces
    solve(str);

    return 0;
}
