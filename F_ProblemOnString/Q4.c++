/*********  Remove Space from the string TC:O(N) SC: O(n)***********/


// #include <iostream>

// using namespace std;

// string removeSpaces(string input) {
//     string result = "";
//     for (char c : input) {
//         if (c != ' ') {
//             result += c; // Append non-space characters to the result
//         }
//     }
//     return result; // Return the result without spaces
// }

// int main() {
//     string input = "How are you doing";
//     string output = removeSpaces(input);
//     cout << output << endl;
//     return 0;
// }


/*********  Remove Space from the string TC:O(N) SC: O(n)***********/


#include <iostream>
using namespace std;

void remoSpace(string sc){

    string result = "";

    for(int i = 0; i < sc.length() ; i++){
        if(sc[i] != ' '){
            result += sc[i];
        }
    }

    cout<<"String without Space is: "<<result;

}

int main() {
    string sc;
    cout<<"Enter the String: ";
    // cin >> sc; // error  (reads only a single word, stopping at the first space.)
    getline(cin, sc); // reads the entire line, including spaces, until a newline (\n) is encountered.
    

    remoSpace(sc);

    return 0;
}