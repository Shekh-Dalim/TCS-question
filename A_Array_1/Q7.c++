/************* Q: Second largest Element in an array TC- O(n)  SC-O(1)*************/
#include <bits/stdc++.h>
using namespace std;

pair<int, int> findLargestAndSecondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest; // Update second largest
            largest = arr[i];        // Update largest
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i]; // Update second largest if current is in between
        }
    }

    return make_pair(largest, secondLargest);
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 33, 4, 9};

    pair<int, int> result = findLargestAndSecondLargest(arr, n);
    cout << "Largest element is: " << result.first << endl;
    cout << "Second largest element is: " << result.second << endl;

    return 0;
}
