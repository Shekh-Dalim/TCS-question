/********* Print all the duplicate in the input string  TC:O(n log n) SC: O(1) ************/


#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string str) {

    // Sort the characters in the string alphabetically
    sort(str.begin(), str.end());
    
    int i = 0;
    while (i < str.length()) {
        int count = 1;
        
        // Count the occurrences of each character
        while (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        
        // Print the duplicate character and its count
        if (count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
        
        i++;
    }
}

int main() {

    string str; //  = "abbcdeddl";
    cout<<"Enter the String: ";
    getline(cin, str);
    
    // Example input string
    printDuplicates(str); // Call the function to print duplicates
    
    return 0;
}
