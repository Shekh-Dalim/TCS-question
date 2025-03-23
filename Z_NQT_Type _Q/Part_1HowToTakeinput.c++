// 1st situation  input with size

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>> n;
//     vector<int> arr(n);   // initial size of n
    
//     for(int i =0 ; i < n; i++){
//         cin>> arr[i];
//     }

//     cout<<"Array (Size given): ";
//     for(int num : arr){
//         cout<<num<<" ";
//     }

//     cout<<endl;

//     return 0;
// }


// 2nd situation input as String 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string line;
//     getline(cin, line);

//     vector<int> arr;   // initial size of n
//     stringstream ss(line);
//     int num;
    
//     while(ss >> num){
//         arr.push_back(num);
//     }

//     cout<<"Array (from string using stringstream): ";
//     for(int val : arr){
//         cout<<val<<" ";
//     }

//     cout<<endl;

//     return 0;
// }


// 3rd situation  input without size 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     vector<int> arr;
//     int num;

//     while(cin >> num){  // EOF error means input error or array problem 
//         arr.push_back(num);
//     }

//     cout<<"Array (Size unknown): ";
//     for(int val : arr){
//         cout<<val<<" ";
//     }

//     cout<<endl;

//     return 0;
// }



// 4th situation most used input format()

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string line;
//     getline(cin, line);

//     vector<int> arr;
//     string numStr = "";

//     for (char ch : line) {
//         if (isdigit(ch)) {
//             numStr += ch;
//         } else if (!numStr.empty()) {
//             arr.push_back(stoi(numStr));
//             numStr = "";
//         }
//     }

//     if (!numStr.empty()) {
//         arr.push_back(stoi(numStr));
//     }

//     cout << "Array (extracted numbers): ";
//     for (int val : arr) {
//         cout << val << " ";
//     }
//     cout << endl;
// }


// 4th situation most used input format()

// #include <bits/stdc++.h>
// using namespace std;

// bool checkEqualAverage(string s) {
//     vector<int> arr;

//     for (char ch : s) {
//         if (isdigit(ch)) {
//             arr.push_back(ch - '0');
//         }
//     }

//     int total_sum = accumulate(arr.begin(), arr.end(), 0);
//     int curr_sum = 0;

//     for (int i = 0; i < arr.size(); i++) {
//         curr_sum += arr[i];
//         int curr_size = i + 1;
//         int rem_sum = total_sum - curr_sum;
//         int rem_size = arr.size() - curr_size;

//         if (rem_size != 0 && (curr_sum / curr_size) == (rem_sum / rem_size)) {
//             return true;
//         }
//     }

//     return false;
// }

// int main() {
//     string s;
//     getline(cin, s);

//     if (checkEqualAverage(s)) {
//         cout << "True" << endl;
//     } else {
//         cout << "False" << endl;
//     }

//     return 0;
// }
