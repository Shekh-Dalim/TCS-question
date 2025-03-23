// /********* Return maximum occurring character in the input string TC:O(n) SC: O(1) ************/

// #include <iostream>
// #include <vector>

// using namespace std;

// char maxOccurringChar(string str) {
//     char ans = 'a'; // Initialize the answer character to 'a'
//     int maxfreq = 0; // Initialize the maximum frequency to 0
//     vector<int> count(256, 0); // Create a vector to store character frequencies

//     int n = str.length(); // Get the length of the input string

//     // Loop through each character in the string
//     for (int i = 0; i < n; i++) {
//         count[str[i]]++; // Increment the frequency count for the current character

//         // Check if the frequency of the current character is greater than the max frequency so far
//         if (count[str[i]] > maxfreq) {
//             maxfreq = count[str[i]]; // Update the maximum frequency
//             ans = str[i]; // Update the answer character to the current character
//         }
//     }

//     return ans; // Return the maximum occurring character
// }

// int main() {
//     string str = "lastmomenttuitions"; // Input string
//     cout << "Maximum occurring character is: " << maxOccurringChar(str) << endl; // Print the result
//     return 0;
// }




// /********* Return maximum occurring character in the input string TC:O(n) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

void findMaxOccurringCharacter(string &s) {
    unordered_map<char, int> freq; // Stores frequency of each character
    
    for (char ch : s) {
        freq[ch]++; // Counting occurrences
    }
    
    char maxChar = ' ';  // Placeholder for max occurring character
    int maxFreq = 0;     // Maximum frequency found so far
    
    for (const auto &pair : freq) {
        cout << pair.first << " : " << pair.second << endl;

        if (pair.second > maxFreq) {
            maxChar = pair.first;
            maxFreq = pair.second;
        }
    }
    
    if (maxChar != '\0') {
        cout << "Maximum occurring character: " << maxChar << " (" << maxFreq << " times)" << endl;
    } else {
        cout << "No characters found" << endl;
    }
}

// Driver function
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    findMaxOccurringCharacter(str);
    
    return 0;
}