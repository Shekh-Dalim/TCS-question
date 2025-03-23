/*********  Reverse an  Array********** */

// /*----------  Using Two Pointer TC-> O(n)  SC->(1)--------*/

// #include<bits/stdc++.h>
// using namespace std;
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
// }

// void reverse(int arr[], int n)
// {
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         swap(arr[i++], arr[j--]);
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     print(arr, n);
//     reverse(arr, n);
//     print(arr, n);

//     return 0;
// }




// /*----------  Using for Pointer TC-> O(n)  SC->(1)--------*/


#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void reverse(int arr[], int n)
{
    for (int i = n-1; i >= 0 ; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, n);
    reverse(arr, n);

    return 0;
}