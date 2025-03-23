
/***** Q: Searching an element in an array TC: O(n) SC: O(1) *****/

#include<bits/stdc++.h>
using namespace std;

int searchElement(int arr[],int n, int element){
    for(int i = 0; i < n ; i++){
        if(arr[i] == element){
            return i;
        }

    }
    return -1;
}

void inputArray(int arr[],int n){
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[100];
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int element;
    cout<<"Enter the search elemenet: ";
    cin>>element;

    cout << "Enter the array elements: ";
    inputArray(arr,n);

    cout << "Array elements: ";
    printArray(arr,n);

    int index = searchElement(arr,n,element);

    if(index != 1 ){
        cout<<"the element is present at the index of : "<<index;
    }
    else{
        cout<<"Elemet is not found";
    }

    
    return 0;
}