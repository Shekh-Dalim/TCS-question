/*********  Remove characters from a string except alphabets TC:O(n) SC: O(n)***********/


#include <bits/stdc++.h>
using namespace std;

// Function to remove non-alphabet characters and return the resultant string
string removeSpecialCharacter(string s) {
    string result = "";
    
    // Iterate through the given string
    for (char c : s) {
        // If the character is an alphabet, add it to the result
        if (isalpha(c)) {
            result += c;
        }
    }
    
    return result; // Return the resultant string
}

int main() {
    string inputString = "Hello, world! 123";
    string outputString = removeSpecialCharacter(inputString);
    
    cout << "Resultant String: " << outputString << endl;
    
    return 0;
}



/*********  Remove characters from a string except alphabets TC:O(n) SC: O(n)***********/


// #include<bits/stdc++.h>
// using namespace std;

// void removeSpecialCharacter(string sc){
//     string result = " ";
//     for(int i= 0 ; i < sc.length(); i++){
//         if(isalpha(sc[i]))
//         result += sc[i];
//     }
//     cout<<"the string is: "<< result;
// }

// int main(){
//     string sc;
//     cout<<"Enter the string: ";
//     getline(cin, sc);
//     removeSpecialCharacter(sc);
//     return 0;
// }