/**********Sort an array according to the other array   **********/


#include <bits/stdc++.h>
using namespace std;

void sortArrayByOrder(vector<int>& arr1, vector<int>& arr2, vector<int>& result) {
    // Create a map to store the frequency of elements in arr1
    unordered_map<int, int> frequency_map;
    
    // Count the frequency of each element in arr1
    for (int num : arr1) {
        frequency_map[num]++;
    }
    
    result.clear();
    
    // Process elements in arr2 to arrange them according to arr1's frequency
    for (int num : arr2) {
        if (frequency_map.find(num) != frequency_map.end()) {
            int frequency = frequency_map[num];
            for (int j = 0; j < frequency; j++) {
                result.push_back(num); // Add num to result for its frequency times
            }
            frequency_map.erase(num); // Remove num from frequency map as it's processed
        }
    }
    
    // Process remaining elements in arr1 not present in arr2
    vector<int> remaining;
    for (auto& entry : frequency_map) {
        int key = entry.first;
        int frequency = entry.second;
        for (int j = 0; j < frequency; j++) {
            remaining.push_back(key); // Add remaining elements to result for their frequency times
        }
    }
    
    // Sort the remaining elements in ascending order
    sort(remaining.begin(), remaining.end());
    result.insert(result.end(), remaining.begin(), remaining.end());
}

int main() {
    vector<int> arr1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    vector<int> arr2 = {2, 1, 8, 3};
    vector<int> sorted_array;
    
    sortArrayByOrder(arr1, arr2, sorted_array);
    
    cout << "Sorted array: ";
    for (int num : sorted_array) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
