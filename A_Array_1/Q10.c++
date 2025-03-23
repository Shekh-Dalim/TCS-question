/****** Balance Point of an Array  TC:O(N) SC: O(1)*******/

#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
    int sum = 0;     // Initialize sum of whole array
    int leftsum = 0; // initialize leftsum

    // find sum of whole araay
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum -= arr[i]; // sum is now right sum for index i
        if (leftsum == sum)
        {
            return i;
        }
        else{
            leftsum += arr[i];
        }

    }
    // if no equilibrium index found then return -1
    return -1;
}
int main()
{
    // int arr[] = {5,2,2,3,4};
    int arr[] = {1,2,3,2,1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    // Funtion call
    cout<<"First equilibrium index is: "<<equilibrium(arr,arr_size);

    return 0;
}