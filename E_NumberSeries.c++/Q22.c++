/************ Check if a Number is Automorphic TC: O(log n) SC: O(1) ************/
// N^2 ends with N

#include <bits/stdc++.h>
using namespace std;

bool isAutomorphic(int N) {
    
    int sq = N * N;

    // Start Comparing digits
    while (N > 0) {
        if (N % 10 != sq % 10){
            return false; // Return false if any digit of N doesn't match with the last digits of its square
        }

        N = N / 10;
        sq = sq / 10;
    }

    return true;
}

// Driver code
int main() {
    int N = 5;

    if (isAutomorphic(N)) {
        cout << N << " is an Automorphic number." << endl;
    } else {
        cout << N << " is not an Automorphic number." << endl;
    }

    return 0;
}
