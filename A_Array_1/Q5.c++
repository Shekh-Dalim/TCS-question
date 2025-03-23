/*************** Q:Meadian of an unsorted array TC- O(nlogn)  SC-O(1)*************/

/*
meadian of an unsorted array using c++
1: simple sort the array .
2: check the number of eleemnts present in the array is even or odd .
3: if odd then return mid value of the array .
4: else the meadin is the average of the two middle values .
*/
#include<bits/stdc++.h>
using namespace std;

double findMedian(int arr[], int n)
{
    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: return the middle element if the number of elements odd 
    if (n % 2 != 0) 
    { 
        return arr[n / 2];
    }
    else  // return the average of the two middle elements If even, 
    { 
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2;
    }
}

int main()
{
    // int arr[] = {7, 1, 3, 4, 5, 6, 2};    // Example unsorted array
    int arr[] = {1,4,5,7,2};    // Example unsorted array
    int n = sizeof(arr) / sizeof(arr[0]); 

    double median = findMedian(arr, n);                   // Find the median
    cout << "Median of the array is: " << median << endl; // Print the result

    return 0;
}
