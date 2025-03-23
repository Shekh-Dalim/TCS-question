/*  Give an array of integers and an integer k, find the maximum element in every continuous subarray of size k 

input: 
arr = [1,3,-1,-3,5,3,6,7]
k = 3

output :
[3,3,5,5,6,7]

*/


#include<bits/stdc++.h>
using namespace std;

vector<int> result(int arr[],int n){
    
    vector<int> result_arr;

    for(int i = 0; i< n - 2 ; i++){

        int D_1st = arr[i];
        int D_2nd = arr[i + 1];
        int D_3rd = arr[i + 2];

        int max_value = max({D_1st, D_2nd, D_3rd});


        // int max_value = (D_1st > D_2nd) ? ((D_1st > D_3rd ) ? D_1st : D_3rd) :  ((D_2nd > D_3rd ) ? D_2nd : D_3rd);

        result_arr.push_back(max_value);


    }

    return result_arr;


}

int main(){
    int arr[] = {1,3,-1,-3,5,3,6,7};
    int size = 8;

    vector<int> ans = result(arr,size);



    cout<<"The resultant array is : ";
    for(int num: ans){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}