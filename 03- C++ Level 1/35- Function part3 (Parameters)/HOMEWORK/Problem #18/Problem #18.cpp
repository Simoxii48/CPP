#include <iostream>
using namespace std;

// function to read r from the user and return the entered value
float readR(float& r) {
    cout << "Please enter r : ";
    cin >> r;
    return r;
}

// calculate the circle area
float calculateCircleArea(float r) {
    const float pi = 3.14;
    float area = pi * pow(r, 2);
    return area;
}

// print procedure 
void printCircleArea(float area) {
    cout << "Circle area is : " << area << endl;
}

int main()
{
    float r;
 
    // we can assign as well like the following way
    printCircleArea(calculateCircleArea(readR(r)));
    
}