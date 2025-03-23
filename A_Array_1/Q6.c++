/****************** Q:Largest element in an array  TC- O(n) SC- O(1) ***************/
#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int size)
{
    int MaxElement = INT_MIN;
    for (int i = 0; i < size ; i++)
    {
        if (MaxElement < arr[i])
        {
            MaxElement = arr[i];
        }
    }
    return MaxElement;
}
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 33, 4, 5};
    int largestElement=largest(arr,n);
    cout << "Largest element is: " << largestElement;
    return 0;
}

/*----------------  Another way ---------------- */
// #include <iostream>
// using namespace std;

// int largest(int arr[], int size)
// {
//     int maxElement = arr[0];
//     for (int i = 1; i < size ; i++)
//     {
//         if (maxElement < arr[i])
//         {
//             maxElement = arr[i];
//         }
//     }
//     return maxElement;
// }
// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 9, 4, 5};
//     int maxElement = largest(arr,n);
//     cout<<"Largest element is: "<<maxElement;
//     return 0;
// }