/************ Q: Add Element to an array  TC-> O(n)  SC->O(n)*************/

#include<bits/stdc++.h>
using namespace std;
int *addNum(int arr[], int size, int x)
{
    int *newArr = new int[size + 1]; // Create a new array

    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[size] = x;
    return newArr;
}


int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    int num;
    cout << "Enter the user input element: ";
    cin >> num;   

    int *updateArray = addNum(arr, n, num);

    for (int i = 0; i < n + 1; i++)
    {
        cout << updateArray[i] << " ";
    }

    return 0;
}   