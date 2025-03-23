/********* Capitalize first and last Character of each Word TC:O(n) SC: O(1) ************/

#include <bits/stdc++.h>
using namespace std;

void capitalizeFirstLast(string &s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        
        if (i == 0 || s[i - 1] == ' ') {  // Check if it's the start of a word
            s[i] = toupper(s[i]);
        }
        
        if (i == n - 1 || s[i + 1] == ' ') {  // Check if it's the last character of a word
            s[i] = toupper(s[i]);
        }
    }
}

// Driver function
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    capitalizeFirstLast(str);
    
    cout << "Modified string: " << str << endl;
    return 0;
}
