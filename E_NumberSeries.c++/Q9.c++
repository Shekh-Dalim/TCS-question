/********* Sum of first N naturat numbes TC: O(n) SC: O(1) ********/

#include<bits/stdc++.h>
using namespace std;

int findSum(int n){
   int sum = 0;
   for(int i  = 1; i <= n; i++){
    sum += i;
   }
   return sum;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int result = findSum(n);
    cout<<"Sum of first n natural number: "<<result;
}