

// Size is given 
// No size is given 

/*******************************  Size of an array is given **********************/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];

//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }

//     for(int a : arr){
//         cout << a << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     vector<int> arr;

//     for(int i = 0; i < n; i++){
//         int num;
//         cin>>num;
//         arr.push_back(num);
//     }

//     for(int a : arr){
//         cout << a << " ";
//     }
//     return 0;
// }


/****  NO size of an array is given ****************************** */

// solve  1 2 3 4 5 6

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

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> arr;
//     string input;  // take an input 
//     getline(cin , input);
//     stringstream ss(input);
//     string temp;

//     while(getline(ss,temp,',')){  // , separated input value 1,2,3
//     while(getline(ss,temp,' ')){     // space separated input value 1 2 3
//         int num = stoi(temp);
//         arr.push_back(num);
//     }

//     cout<<"Output is: ";
//     for(auto ele : arr){
//         cout<< ele<< " ";
//     }

//     return 0;
// }

// (1, 2, 3, 4, 5)   input is like this  
// {1, 2, 3, 4, 5}   input is like this  
// [1, 2, 3, 4, 5]   input is like this  


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> arr;
//     string input;  // take an input 
//     getline(cin , input);
    
//     if(input.front() == '[' && input.back() == ']'){
//         input = input.substr(1, input.length() - 2);
//     }
    
//     stringstream ss(input);
//     string temp;

//     while(getline(ss,temp,',')){  
//         int num = stoi(temp);
//         arr.push_back(num);
//     }

//     cout<<"Output is: ";
//     for(auto ele : arr){
//         cout<< ele<< " ";
//     }


//     return 0;
// }



/***************  Print num with string like 11 dalim  *****************/ 


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    cin.ignore();

    string s;
    getline(cin, s);

    cout<<n<<" "<<s<<endl;
 
    return 0;
}