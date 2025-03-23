/*********** Greatest of two number TC: O(1) SC: O(1)  ***********/


#include <iostream>
using namespace std;

float largestNum(float a, float b) {
    return (a > b) ? a : b;
}

int main() {

    float a,b;
    cout<<"Enter the value if a: ";
    cin>>a;
    cout<<"Enter the value if b: ";
    cin>>b;

    cout << "Largest number: " << max(a, b) << endl;
    return 0;
}

