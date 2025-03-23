/********* Find the largest word in a string  TC:O(n) SC: O(n) ************/


// #include <bits/stdc++.h>
// using namespace std;

// string findLongestWord(string str) {
//     int len = str.length();
//     int max_length = 0, max_start = 0;
//     int i = 0, j = 0;

//     while (j <= len) {
//         // If current character is not a space and within bounds, move j forward
//         if (j < len && str[j] != ' ') {
//             j++;
//         } else {
//             // Calculate length of the current word
//             int curr_length = j - i;

//             // Update max length and starting index if this word is the longest
//             if (curr_length > max_length) {
//                 max_length = curr_length;
//                 max_start = i;
//             }

//             // Move to the next word
//             j++;
//             i = j;
//         }
//     }

//     // Extract and return the longest word from the input string
//     return str.substr(max_start, max_length);
// }

// int main() {
//     string str = "Microsoft Team Collaboration";

//     // Call the function and print the result
//     cout << "The Longest Word is: " << findLongestWord(str) << endl;

//     return 0;
// }


/********* Find the largest word in a string  TC:O(n) SC: O(n) ************/


#include <bits/stdc++.h>
using namespace std;
string findLargestWord(string s) {
    stringstream ss(s); // Convert the string into a stream to extract words easily
    string word, largestWord; // Variables to store current word and largest word found
    int maxLength = 0; // Variable to keep track of the longest word length

    while (ss >> word) { // Extract each word one by one from the string
        if (word.length() > maxLength) { // Check if the current word is longer than the previous longest
            maxLength = word.length(); // Update maxLength with the new longest word length
            largestWord = word; // Update largestWord with the new longest word
        }
    }
    return largestWord; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = findLargestWord(input);
    cout << "Largest word: " << result << endl;
    return 0;
}
