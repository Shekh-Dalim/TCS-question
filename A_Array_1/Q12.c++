/***********   APPROACH:1 Program to check if an array is sorted or not  TC: O(n) SC: O(n) **********/

// #include <bits/stdc++.h>
// using namespace std;

// bool isArraySorted(int arr[], int size)
// {
//     if (size == 1 || size == 0)
//     {
//         return true;
//     }

//     if (arr[size - 1] < arr[size - 2])
//     {
//         return 0;
//     }

//     return isArraySorted(arr, size - 1);
// }

// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     if (isArraySorted(arr, size))
//     {
//         cout << "Yes, the array is sorted" << endl;
//     }
//     else
//     {
//         cout << "No, the array is not sorted" << endl;
//     }

//     return 0;
// }

/*********** APPROACH:2 Program to check if an array is sorted or not TC: O(n) SC: O(1) ************/  

//????????????/  This is a Recurtion but why Space complexity is : O(1)
#include <iostream>
using namespace std;

// Function to check if the array is sorted
bool arraySorted(int arr[], int size)
{

    if (size == 1 || size == 0)
    {
        return true;
    }

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false; // If any adjacent pair is unsorted, return false
        }
    }
    return true; // If no unsorted pair is found, return true
}

int main()
{
    // Input array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Check if array is sorted
    if (arraySorted(arr, size))
    {
        cout << "Yes, the array is sorted." << endl;
    }
    else
    {
        cout << "No, the array is NOT sorted." << endl;
    }

    return 0;
}
