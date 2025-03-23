/************ Remove duplicate from the sorted array TC: O(n) SC: )(1)***********/

#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n){

    if(n == 0){
        return 0;
    }

    int j = 0; // Index for unique elements

    for(int i = 0; i < n; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // New size of unique array
}


int main(){

    int arr[] = {3,3,3,4,4,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int newSize = removeDuplicate(arr,size);

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// 3 3 3 4 4 6 6