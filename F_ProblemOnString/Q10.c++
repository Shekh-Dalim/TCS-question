/********* Chalculate frequency of characters in a string  TC:O(n) SC: O(1) ************/

/*

for (char ch : s) {
    freq[ch]++;
}

'h' → 1
'e' → 1
'l' → 2
'o' → 1


Understanding for (const auto &pair : freq)

   const ensures that the pair is not modified during iteration.

   auto automatically deduces the type (std::pair<char, int>).

   pair represents each key-value pair in the unordered_map freq.

   & (Reference Operator) avoids copying each pair, improving performance.

Accessing Elements of the Pair

   pair.first → This is the character (key in the map).
   pair.second → This is the frequency (value in the map).


Character Frequencies:
h : 1
e : 1
l : 2
o : 1


*/


#include <bits/stdc++.h>
using namespace std;

void calculateFrequency(string &s) {
    unordered_map<char, int> freq; //is used to store key-value pairs O(1)
    
    for (char ch : s) {
        freq[ch]++;
    }
    
    cout << "Character Frequencies:\n";
    for (const auto &pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

// Driver function
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    calculateFrequency(str);
    
    return 0;
}