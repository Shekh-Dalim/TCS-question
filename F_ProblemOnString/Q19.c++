/********* Write a program to sort character in a string   TC:O(n^2) SC: O(n) ************/


#include <bits/stdc++.h>
using namespace std;

string sortString(string str) {
    sort(str.begin(), str.end());
    return str;
}

int main() {
    string str = "zxcbg";

    // Print the sorted string
    cout << "String after sorting: " << sortString(str) << endl;

    return 0;
}
