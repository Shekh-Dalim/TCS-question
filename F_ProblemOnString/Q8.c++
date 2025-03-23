/********* Sum of the numbers in a String TC:O(n) SC: O(n)***********/



#include<bits/stdc++.h>
using namespace std;

int sumNumberInString(const string &sc) {  // due to Pass by Reference SC is O(1) also use const string &sc
    int sum = 0;
    for(int i = 0; i < sc.length(); i++){
        if(isdigit(sc[i])){
            sum += sc[i] - '0';
        }
    }
    return sum; 

}
int main(){
    string sc;
    cout<<"Enter the string: ";
    getline(cin, sc);
    int result = sumNumberInString(sc);
    cout<<"The sum of number present between string is: "<<result;
    return 0;
}