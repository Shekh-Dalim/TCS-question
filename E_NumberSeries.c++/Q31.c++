/************ calculate the area of circle  O(1) SC: O(1) ************/

#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateCircleArea(double radius) {
    return PI * radius * radius; // Calculate and return the area
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    double area = calculateCircleArea(radius); // Call the function
    
    cout << "The area of the circle with radius " << radius << " is " << area << endl;
    
    return 0;
}



