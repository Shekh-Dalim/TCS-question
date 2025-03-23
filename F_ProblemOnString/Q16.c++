/*********Print all the duplicates in the input string TC:O(m*n) SC: O(n) ************/

// Function to remove characters from str1 that are present in str2

#include <bits/stdc++.h>
using namespace std;

string solve(const string &str1, const string &str2) {
    string ans ="";
    
    for (char char1 : str1) {
        
        bool flag = false; 
        for (char char2 : str2) {
            if (char1 == char2) {
                flag = true; 
                break;
            }
        }
        
        if (!flag) { //  !flag means "flag is false".
            ans += char1;
        }
    }
    
    return ans;
}

int main() {
    string str1 = "abadew";
    string str2 = "cefzl";
    
    cout << "Final string: " << solve(str1, str2) << endl; 
    
    return 0;
}