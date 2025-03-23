/************ Replace all 1s with 1s in a given integersTC: O(N) SC: O(1) ************/


#include <iostream>
using namespace std;

int replaceZerosWithOnes(int num) {

    if (num == 0) {
        return 1; 
    }

    int ans = 0; // Initialize the result number
    int tmp = 1; // Initialize a multiplier to keep track of digit positions

    while (num > 0) {
        int d = num % 10; 
        
        if (d == 0) {
            d = 1; // Replace 0 with 1
        }
        
        ans = d * tmp + ans; 
        num = num / 10; 
        tmp = tmp * 10; 
    }
    
    return ans; // Return the final result number
}

int main() {
    int n = 204; // The original number
    int result = replaceZerosWithOnes(n); // Call the function
    
    cout << "After replacing zeros with ones, " << n << " becomes " << result << endl;
    
    return 0;
}
