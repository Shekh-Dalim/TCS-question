/************ Find all symmetric pairs from a pairs of array ***********/

#include <bits/stdc++.h>

using namespace std;

// Function to find all symmetric pairs in a given array
void findSymPairs(int arr[][2], int row) {
    unordered_map<int, int> hM; // HashMap to store pairs

    for (int i = 0; i < row; i++) {
        int first = arr[i][0]; // First element of the pair
        int sec = arr[i][1];   // Second element of the pair

        // Check if the symmetric pair exists in the map
        if (hM.find(sec) != hM.end() && hM[sec] == first) {
            cout << "(" << sec << ", " << first << ")" << endl;
        } else {
            // Otherwise, store the pair in the map
            hM[first] = sec;
        }
    }
}

// Driver function
int main() {
    int arr[5][2] = {
        {11, 20},
        {30, 40},
        {5, 10},
        {40, 30},
        {10, 5}
    };

    int row = sizeof(arr) / sizeof(arr[0]); // Calculate number of rows
    findSymPairs(arr, row); // Find symmetric pairs

    return 0;
}
