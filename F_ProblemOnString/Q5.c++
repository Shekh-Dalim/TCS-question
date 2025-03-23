/*********  Reverse a string TC:O(n) SC: O(n)***********/

#include<bits/stdc++.h>
using namespace std;

void stringReverse(const string &sc){
    string result = " ";
    for(int i= sc.length() ; i >= 0; i--){
        result += sc[i];
    }
    cout<<"the reverse string is: "<< result;
}

int main(){
    string sc;
    cout<<"Enter the string ";
    getline(cin, sc);
    stringReverse(sc);
    return 0;
}