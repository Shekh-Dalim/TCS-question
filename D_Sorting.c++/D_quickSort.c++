/********  Quick Sort **********/


#include<bits/stdc++.h>
using namespace std;

void InputData(int A[], int n)
{
    cout << "Input the Array number: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void Display(int A[], int n)
{
    cout << "Display the Array Number: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int partiotion(int arr[],int lb,int ub){

    int pivot = arr[lb];
    int s = lb;
    int e = ub;

    while(s < e){
        while(arr[s] <= pivot){
            s++;
        }
        while(pivot < arr[e]){
            e--;
        }
        if( s < e){
            swap(arr[s],arr[e]);
        }
    } 
    swap(arr[lb],arr[e]);
    return e;

}
void QuickSort(int arr[],int lb,int ub){
    if(lb < ub){
        int loc = partiotion(arr,lb,ub);
        QuickSort(arr,lb,loc - 1); // sort left part
        QuickSort(arr,loc+1,ub);   // sort right part
    }
}

int main()
{
    int n;
    cout << "size of n is: ";
    cin >> n;
    int A[n];
    int lb = 0;
    int ub = n - 1;
    InputData(A, n);
    Display(A, n);
    QuickSort(A, lb, ub);
    Display(A, n);

    return 0;
}














