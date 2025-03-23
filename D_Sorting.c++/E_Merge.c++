
/************** Merge Sort  **************/


#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e){

    int mid = s + (e - s) / 2;
    int len_1 = mid - s + 1;
    int len_2 = e - mid;

    int *first = new int[len_1];   // Create dynamic arry_1
    int *second = new int[len_2];  // Create dynamic arry_2

    // copy values 
    int k = s;
    for(int i = 0 ; i< len_1 ; i++){
        first[i] = arr[k++];
    }

    k = mid + 1;
    for(int i = 0 ; i< len_2 ; i++){
        second[i] = arr[k++];
    }
  
    // Merge 2 sorted arrays
    int index_1 = 0;
    int index_2 = 0;
    k = s;

    while(index_1 < len_1 && index_2 < len_2){
        if(first[index_1] < second[index_2]){
            arr[k++] = first[index_1++];
        }
        else{
            arr[k++] = second[index_2++];
        }
    }

    while(index_1 < len_1){
        arr[k++] = first[index_1++];
    }

    while(index_2 < len_2){
        arr[k++] = second[index_2++];
    }

    delete[] first;
    delete[] second;

}

void mergeSort(int arr[],int s,int e){
    //Base Case
    if(s >= e){
        return ;
    }

    int mid = s + (e - s) / 2;

    mergeSort(arr,s,mid);   // left part sort karna h
    mergeSort(arr,mid+1,e); // right part sort karna h
    merge(arr,s,e);         // merge
}
int main()
{

    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
} 