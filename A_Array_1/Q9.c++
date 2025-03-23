/************* Q: Second smallest Element in an array TC- O(n)  SC-O(1)*************/
#include <bits/stdc++.h>
using namespace std;

pair<int, int> findSecondSmallestt(int arr[], int size)
{
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest; // Update second largest
            smallest = arr[i];        // Update largest
        }
        else if (arr[i] < secondSmallest && arr[i] > smallest)
        {
            secondSmallest = arr[i]; // Update second largest if current is in between
        }
    }

    return make_pair(smallest, secondSmallest);
}

int main()
{
    int n = 5;
    int arr[5] = {0, 35, 33, 4, 5};

    pair<int, int> result = findSecondSmallestt(arr, n);
    cout << "Smallest element is: " << result.first << endl;
    cout << "Second smallest element is: " << result.second << endl;

    return 0;
}
