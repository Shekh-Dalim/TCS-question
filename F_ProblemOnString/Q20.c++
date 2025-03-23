/********* Count number of words in a given string   TC:O(n) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

int countWords(const string& str) {
    
    int spaces = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            spaces++;
        }
    }
    
    return (n > 0) ? spaces + 1 : 0;
}

int main() {
    string str = "HELLO WORLD";
    
    int wordCount = countWords(str);
    
    cout << "Number of words: " << wordCount << endl;
    
    return 0;
}
