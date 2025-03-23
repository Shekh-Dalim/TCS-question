/********* Check if the String are anagram of each other  TC:O(n*n log n) SC: O(1) ************/

//  If two strings contain the same letters in different orders, they are anagrams (e.g., "gram" and "armg" are anagrams).

#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string str1, string str2) {
    
    if (str1.length() != str2.length()) {  // If lengths of both strings are not the same, they cannot be anagrams
        return false;
    }
    
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    // Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1;
    cout<<"Enter the str1: ";
    getline(cin,str1);

    string str2 = "arm";
    cout<<"Enter the str2: ";
    getline(cin,str2);
    
    if (areAnagram(str1, str2)) {
        cout << "The two strings are anagrams of each other" << endl;
    } else {
        cout << "The two strings are not anagrams of each other" << endl;
    }
    
    return 0;
}