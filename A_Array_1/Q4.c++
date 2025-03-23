// /*************** Mean of Unsorted Array TC-> O(n)  SC->O(1)**************/



#include<bits/stdc++.h>
using namespace std;

double sum(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
       sum = sum+ arr[i];
    }

    double mean = double(sum)/size;
    return mean;
    
}
int main()
{
    int n = 7;
    int arr[] = {1,4,4,2,7,5,6};
    double meanValue = sum(arr, n);
    cout << "Sum value: " << meanValue;
    return 0;
}

