#include <iostream>
using namespace std;

// procedure to read from the user a and d
void readRectangleSides(float& a, float& d) {
    cout << "Please enter a : ";
    cin >> a;

    cout << "Please enter d : ";
    cin >> d;
}

// Function to calculate the rectangle area
float calculateRectangleArea(float a, float d) {
    float area = a * sqrt(pow(d, 2) - pow(a, 2));
    return area;
}

// Procedure to print the rectagle area on screen
void printRectangleArea(float area) {
    cout << "Rectangle area is : " << area << endl;
}

int main()
{
    float a, d;

    // read from the user to change a,d value to what the user enter
    readRectangleSides(a, d);

    // calculate the area then print it on screen
    printRectangleArea(calculateRectangleArea(a, d));
    

}