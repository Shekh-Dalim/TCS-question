/********* Write a program to find a word in a given string which has the highest number of repeated letter  TC:O(n^2) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

// Function to find the word with the highest number of repeated letters
void highestRepeatedLetters(string str) {
    stringstream ss(str);
    string word, result = "";
    int maxRepeats = 0;

    // Process each word in the string
    while (ss >> word) {
        int frequency[26] = {0};
        int currentRepeats = 0;

        // Count frequency of letters in the word
        for (char c : word) {
            if (isalpha(c)) {  // Ensure it's a letter
                frequency[c - 'a']++;
            }
        }

        // Count the number of letters that appear more than once
        for (int i = 0; i < 26; i++) {
            if (frequency[i] > 1) {
                currentRepeats++;
            }
        }

        // Update result if current word has more repeated letters
        if (currentRepeats > maxRepeats) {
            maxRepeats = currentRepeats;
            result = word;
        }
    }

    // Check if no word with repeated letters was found
    if (result.empty()) {
        cout << "-1" << endl;
    } else {
        cout << "Word with the highest number of repeated letters: " << result << endl;
    }
}

int main() {
    string str = "google team";
    highestRepeatedLetters(str);
    return 0;
}
