/********* Remove all duplicate from the input string  TC:O(n^2) SC: O(1) ************/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(const string& s) {
    string ans =""; 

    for (char c : s) {
        if (ans.find(c) == string::npos) {  // 'npos' indicates "not found"
            ans += c; // Add to 'ans' if not already present
        }
    }

    return ans; 
}

int main() {
    string str; //  = "abbcdeddl";
    cout<<"Enter the String: ";
    getline(cin, str);

    cout << "Original String: " << str << endl;
    cout << "After removing duplicates: " << removeDuplicateLetters(str) << endl;

    return 0;
}
