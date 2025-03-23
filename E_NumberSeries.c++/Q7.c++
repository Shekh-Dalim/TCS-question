/********* Even or Odd   TC: O(1) SC: O(1) **********/


#include<bits/stdc++.h>
using namespace std;

void isEvenOdd(int n){
    if(n&1){
        cout<<"odd NUmber";
    }
    else{
        cout<<"Even number ";
    }
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    isEvenOdd(n);

}



// #include<bits/stdc++.h>
// using namespace std;

// void isEvenOdd(int n){
//     if(n%2 == 0){
//         cout<<"Even NUmber";
//     }
//     else{
//         cout<<"Odd number ";
//     }
// }

// int main(){

//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     isEvenOdd(n);

// }