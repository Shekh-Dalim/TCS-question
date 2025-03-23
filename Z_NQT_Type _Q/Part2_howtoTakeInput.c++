// 1 2 3 4 5   suppose input is like this no size is there the code like below  

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> arr;
//     string input;  // take an input 
//     getline(cin , input);
//     stringstream ss(input);
//     int num;

//     while(ss >> num){
//         arr.push_back(num);
//     }

//     cout<<"Output is: ";
//     for(auto ele : arr){
//         cout<< ele<< " ";
//     }

//     return 0;
// }


// 1, 2, 3, 4, 5   input is like this  



#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    string input;  // take an input 
    getline(cin , input);
    stringstream ss(input);
    int num;

    char c;
    while(ss >> num){
        arr.push_back(num);
        ss>>c;
    }

    cout<<"Output is: ";
    for(auto ele : arr){
        cout<< ele<< " ";
    }


    return 0;
}


// // hw if input is like this  [1, 2, 3, 4, 5]   
