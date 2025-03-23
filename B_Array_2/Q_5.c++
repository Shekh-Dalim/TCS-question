/******** Non repeating Element TC: O(n) SC: O(n) *********/

#include <bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        bool chk = false; // Initialize a flag to indicate if the element is repeating
        
        // Check against all other elements
        for (int j = 0; j < n; j++) {
            if (i != j && nums[i] == nums[j]) { // If element is found again, mark as repeating
                chk = true;
                break;
            }
        }
        // If the element is not marked as repeating, print it as non-repeating
        if (!chk) {   // (chk == false)
            cout << nums[i] << " ";
        }
    }
}

int main() {
    int nums[] = {1, 2, 3, 2, 1, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    cout << "Non-repeating elements: ";
    findNonRepeatingElement(nums, n);
    
    return 0;
}
