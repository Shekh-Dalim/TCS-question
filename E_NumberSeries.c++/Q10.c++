/************ Find sum of Gp Series TC: O(log n) Sc: O(1) ************/


#include <bits/stdc++.h>
using namespace std;
// Function to compute power manually to avoid precision errors
float power(float base, int exp) {
    float result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

float sumOfGP(float a, float r, int n) {
    if (r == 1){
        return a * n; // Handle case when r is 1
    } 
    else if(r < 1){
        return (a * (1 - power(r, n))) / (1 - r);
    }
    else{
        return (a * (power(r, n) - 1)) / (r - 1);
    }
}

// Driver code
int main() {
    float a = 2.0; // First term
    float r = 2.0; // Common ratio
    int n = 15; // Number of terms
    
    // Calculate and display sum of geometric series
    cout << "Sum of geometric series: " << sumOfGP(a, r, n) << endl;
    
    return 0;
}
