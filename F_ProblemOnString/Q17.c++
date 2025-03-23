/********* Change every letter with next lexicographic alphabet TC:O(n) SC: O(n) ************/

#include <bits/stdc++.h>
using namespace std;

string Solve(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'z') {
            s[i] = 'a';
        } else if (s[i] == 'Z') {
            s[i] = 'A';
        } else if(isalpha(s[i])) { // Only change alphabetic characters
            s[i] = s[i] + 1;
        }
    }
    return s;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = Solve(input);
    cout << "Modified string: " << result << endl;
    return 0;
}
