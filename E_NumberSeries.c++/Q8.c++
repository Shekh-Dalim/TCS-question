/************ Check wheather a given number is positive or negative  TC: O(1) SC: O(1) **********/


#include<bits/stdc++.h>
using namespace std;

void isPositiveNegative(int n){
    if(n > 0){
        cout<<"Positive NUmber";
    }
    else if (n < 0){
        cout<<"Negative number ";
    }
    else{
        cout<<"Is Zero";
    }
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    isPositiveNegative(n);

}