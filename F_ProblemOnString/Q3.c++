/*********  Remove all vowels from the string TC:O(N) SC: O(1)***********/

// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s); // Read the input string

//     // Loop through each character in the input string
//     for (int i = 0; i < s.length(); i++) {
//         // Check if the character is a vowel (lowercase or uppercase)
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
//             s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
//             continue; // If it's a vowel, skip to the next iteration
//         } else {
//             cout << s[i]; // If it's a consonant, print it
//         }
//     }
//     return 0;
// }



/*********  Remove all vowels from the string TC:O(N) SC: O(N)***********/

#include <iostream>
using namespace std;

void removeVowel(string sc){

    string result = "";

    for(int i = 0; i < sc.length() ; i++){
        if(sc[i] == 'a' ||  sc[i] == 'e' || sc[i] == 'i' ||sc[i] == 'o' ||sc[i] == 'u' || sc[i] == 'A' ||sc[i] == 'E' ||sc[i] == 'I' ||sc[i] == 'O' ||sc[i] == 'U' ){
            continue;
        }
        else{
            result = result + sc[i];
        }
    }

    cout<<"String without vowel is: "<<result;

}

int main() {
    string sc;
    cout<<"Enter the String: ";
    cin>>sc;

    removeVowel(sc);

    return 0;
}