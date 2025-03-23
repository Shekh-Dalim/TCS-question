/********* Concatenate one string to another TC:O(1) SC: O(1) ************/


#include <iostream>

using namespace std;

int main() {
    string str1 = "Java";
    string str2 = "Script";

    str1 = str1 + str2; // (Concatenate str1 and str2 using the '+' operator) or (Alternative: str1.append(str2));

    // Print the concatenated string to the console
    cout << "Concatenated String: " << str1 << endl;

    return 0;
}
