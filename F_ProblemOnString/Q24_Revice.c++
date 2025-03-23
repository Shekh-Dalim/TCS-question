/********* Find the position of a SubString within a string TC:O(n) SC: O(1) ************/

// size_t is an unsigned integer type used for indexing and size-related values.
// text.find(pattern) is a built-in function in C++ that searches for pattern inside text.
// string::npos means "not found" when using find().
// If foundIdx != string::npos, the substring exists in the string.
// If foundIdx == string::npos, the substring does not exist in the string.


#include <bits/stdc++.h>
using namespace std;

int main() {
    string text = "helloworld";
    string pattern = "world";

    // Use the find method to get the starting index of 'pattern' in 'text'
    size_t foundIdx = text.find(pattern);

    if (foundIdx != string::npos) { //the substring exists in the string.
        cout << "The substring starts from index: " << foundIdx << endl;
    } else {
        cout << "Pattern not found in the text." << endl;
    }

    return 0;
}
