/*  Find the Total Number of Subarrays with Given Sum 


 Problem: Given an array of integers and an integer sum, return the total number of subarrays whose sum equals sum.
 
 */


#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int targetSum) {
    unordered_map<int, int> prefixSumCount;
    int runningSum = 0, count = 0;

    // Initialize with 0 to handle the case when the subarray starts from index 0
    prefixSumCount[0] = 1;

    for (int num : nums) {
        runningSum += num;
        
        // Check if (runningSum - targetSum) exists in the map
        if (prefixSumCount.find(runningSum - targetSum) != prefixSumCount.end()) {
            count += prefixSumCount[runningSum - targetSum];
        }

        // Store the running sum count
        prefixSumCount[runningSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 1, 1, 1};
    int sum = 3;
    cout << "Total Subarrays: " << subarraySum(nums, sum) << endl;
    return 0;
}
