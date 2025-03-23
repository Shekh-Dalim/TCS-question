/*********  Remove bracket from an algebric expression TC:O(n) SC: O(1)***********/


#include <bits/stdc++.h>
using namespace std;

// Function to remove parentheses and return the modified string
string solve(string input) {
    string answer = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != '(' && input[i] != ')' && input[i] != '{' && input[i] != '}' && input[i] != '[' && input[i] != ']') {
            answer += input[i];
        }
    }
    return answer;
}

int main() {
    // Example input strings
    string input1 ;  // "(a-(b+c)+d)"
    cout<<"Enter the string: ";
    getline(cin, input1);

    string input2 ;  // "a-(b-c-(d+e))-f"
    cout<<"Enter the string: ";
    getline(cin, input2);
    
    // Display original and modified strings
    cout << "Original String: " << input1 << endl;
    cout << "After removing brackets: " << solve(input1) << endl;
    
    cout << "Original String: " << input2 << endl;
    cout << "After removing brackets: " << solve(input2) << endl;
    
    return 0;
}
