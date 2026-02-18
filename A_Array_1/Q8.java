/************* Q: Smallest Element in an array TC- O(n)  SC-O(1)*************/
#include <bits/stdc++.h>
using namespace std;

int smallestElement(int arr[], int size)
{
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

    int main()
    {
        int n = 5;
        int arr[5] = {1, 2, 33, -1, 5};

        int result = smallestElement(arr, n);
        cout << "Largest element is: " << result<<endl;

        return 0;
    }
