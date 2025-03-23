/****************  This is the DP problem ******************/


/*********** Max Sum without Adjacens ************/



#include <bits/stdc++.h>
using namespace std;

class Main {
public:
    // Function to find the maximum sum of non-adjacent elements
    static int findMaxSum(int arr[], int n) {
        // Base cases
        if (n == 0) {
            return 0;
        } 
        if (n == 1) {
            return arr[0];
        }

        // Initialize the dynamic programming array
        int dp[n];

        dp[0] = arr[0];
        dp[1] = std::max(arr[0], arr[1]);

        // Fill the dynamic programming array using bottom-up approach
        for (int i = 2; i < n; i++) {
            // Either take the current element + dp[i-2] OR exclude the current element
            dp[i] = std::max(dp[i - 1], dp[i - 2] + arr[i]);
        }

        // The final answer is the maximum value in the dp array
        return dp[n - 1];
    }
};

int main() {
    int arr[] = {5, 5, 10, 100, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum sum of non-adjacent elements: " << Main::findMaxSum(arr, n) << endl;
    return 0;
}
