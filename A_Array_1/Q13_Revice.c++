// /************* @LMT Rank Transform of an Array  TC: O(N*N)  SC: O(N) ************/

// #include <bits/stdc++.h>
// using namespace std;

// // Function to calculate the rank of each element in the array
// void rankify(int A[], int n)
// {
//     // Rank Array to store ranks of elements
//     float R[n] ={ };

//     // Loop through each element in the array
//     for (int i = 0; i < n; i++)
//     {
//         int r = 1; // `r` to count the number of elements less than the current element
//         int s = 1; // `s` to count the number of elements equal to the current element

//         // Nested loop to compare the current element with all other elements
//         for (int j = 0; j < n; j++)
//         {
//             if (j != i && A[j] < A[i]) // Increment `r` if the other element is smaller
//                 r += 1;

//             if (j != i && A[j] == A[i]) // Increment `s` if the other element is equal
//                 s += 1;
//         }
//         // Calculate the rank using the formula: rank = r + (s - 1) / 2
//         R[i] = r + static_cast<float>(s - 1) / 2;
//     }

//     // Print the ranks of elements
//     for (int i = 0; i < n; i++)
//         cout << R[i] << " ";
// }

// int main()
// {
//     // Initialize the input array
//     int A[] = {20, 30, 10};

//     // Calculate the size of the array
//     int n = sizeof(A) / sizeof(A[0]);

//     // Print the input array
//     cout << "Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }

//     cout << "\nRanks: ";
//     // Call the function to calculate and print the ranks
//     rankify(A, n);

//     return 0; // End of program
// }


/*************** @LEETCODEIO By me Rank Transform of an Array  TC: O(N log N)  SC: O(N)************/


    // step_1 - Create an array temp[] to copy the orginal array
    // step_2 - sort the array  (By default in acending order)
    // step_3 - Visit all element in the temp and give the rank value
    // step_4 - Create Ranks array





#include <bits/stdc++.h>
using namespace std;

int *rankingArray(int arr[], int n)
{

    // step_1 - Create an new array temp to copy the orginal array
    int temp[n];

    // copy the original array into temp
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }

    // step_2 - sort the array  (By default in acending order)
    sort(temp, temp + n);

    // Create a map to store rank
    unordered_map<int, int> Map;
    int rank = 1;

    // step_3 - Visit all element in the temp and give the rank value
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && temp[i] != temp[i - 1])
        {
            rank = rank + 1; // agar element are not same then rank will be incrase
        }
        // agar element are  same then rank will remain same
        Map[temp[i]] = rank;
    }

    //  step_4 - Create Ranks array
    int *ranks = new int[n];

    for (int i = 0; i < n; i++)
    {
        ranks[i] = Map[arr[i]];
    }

    return ranks;
}

int main()
{

    // Input array
    int arr[] = {40, 10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the rankingArray function
    int *ranks = rankingArray(arr, n);

    // Print the input array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print the ranks
    cout << "Ranks: ";
    for (int i = 0; i < n; i++)
    {
        cout << ranks[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] ranks;

    return 0;
}
