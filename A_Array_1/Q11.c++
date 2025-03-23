/************ Array is a subset of another array  TC: O(m*n) Sc: O(1)************/

#include<bits/stdc++.h>
using namespace std;
bool isSubset(int arr1[], int arr2[], int m, int n)
{
    for (int i = 0; i < n; i++) // arr2[]
    {
        for (int j = 0; j < m; j++) // arr1[]
        {
            if (arr2[i] == arr1[j])
            {
                break;
            }
            else if (j == m - 1)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    int arr1[] = {2, 1, 3, 4, 5};
    int arr2[] = {2, 3, 6};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, m, n))
    {
        cout << "arr2[] is subset of arr1[] ";
    }
    else
    {
        cout << "arr2[] is not subset of arr1[] ";
    }
    return 0;
}





/************ Array is a subset of another array  TC: O(m*n) SC: O(1) ************/

// #include <bits/stdc++.h>
// using namespace std;

// bool isSubset(int arr1[], int arr2[], int m, int n) {
//     for (int i = 0; i < n; i++) { // Traverse arr2[]

//         bool found = false;
//         for (int j = 0; j < m; j++) { // Traverse arr1[]
//             if (arr2[i] == arr1[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             return false;
//         }
        
//     }
//     return true;
// }

// int main() {
//     int arr2[] = {2, 3, 6};
//     int arr1[] = {2, 1, 3, 4, 5};

//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);

//     if (isSubset(arr1, arr2, m, n)) {
//         cout << "arr2[] is a subset of arr1[]";
//     } else {
//         cout << "arr2[] is not a subset of arr1[]";
//     }
//     return 0;
// }
