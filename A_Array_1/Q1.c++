/***** Q: Sum of array element  ****/


/*-----------------  Using loop  TC-> O(n)  SC->(1) -----------------*/

// we know

/*-------------- using Recurtion Relation  TC-> O(n)  SC->(n) -------------*/

#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size)
{

    // Base case
    if (size <= 0)
    {
        return 0;
    }
    return sum(arr, size - 1) + arr[size - 1];
}
int main()
{
    int n = 3;
    int arr[] = {2, 3, 4};
    int s = sum(arr, n);
    cout << "Sum value: " << s;
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int sum(int *arr ,int size)
// {

//     // Base case
//     if (size <= 0)
//     {
//         return 0;
//     }
//     return arr[0]+sum(arr+1,size-1);
// }
// int main()
// {
//     int n = 3;
//     int arr[] = {2, 4, 4};
//     int s = sum(arr, n);
//     cout << "Sum value: " << s;
//     return 0;
// }