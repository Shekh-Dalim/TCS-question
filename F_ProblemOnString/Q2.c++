/*********  Find the ASCII value of a character TC:O(1) SC: O(1)***********/


#include <iostream>

using namespace std;

int ASCII(char ch){
    int n = ch;
    return n;
}

int main() {
    char ch;
    cout<<"Enter the char: ";
    cin>>ch;

    int val =ASCII(ch);
    cout<<"Ascii value of "<< ch <<"is: "<<val;
    
    return 0;
}