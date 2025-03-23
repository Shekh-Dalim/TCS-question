/*********** Greatest of three numbers TC: O(1) SC: O(1) ***********/
// return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);  for three number 

#include <iostream>
using namespace std;

float largestNum(float a, float b, float c) {
    return max(a, max(b, c));
}

int main() {
    
    float a,b,c;
    cout<<"Enter the value if a: ";
    cin>>a;
    cout<<"Enter the value if b: ";
    cin>>b;
    cout<<"Enter the value if c: ";
    cin>>c;

    cout << "Largest number: " << largestNum(a, b, c) << endl;
    return 0;
}

