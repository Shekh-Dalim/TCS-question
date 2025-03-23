/********* Find Non-repeating character of a string  TC:O(n^2) SC: O(n) ************/


#include <bits/stdc++.h>
using namespace std;

void findNonRepeatingCharacter(string &s) {
    unordered_map<char, int> freq; // Stores frequency of each character
    
    for (char ch : s) {
        freq[ch]++; 
    }
    
    // bool found = false;
    // cout<<"Non repeating character found : ";
    for (char ch : s) {
        if (freq[ch] == 1) {
            cout << ch <<" ";
            // found = true;
        }
    }
    
    // if(!found){
    //     cout << "No non-repeating character found" << endl;
    // }
}

// Driver function
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    findNonRepeatingCharacter(str);
    
    return 0;
}
