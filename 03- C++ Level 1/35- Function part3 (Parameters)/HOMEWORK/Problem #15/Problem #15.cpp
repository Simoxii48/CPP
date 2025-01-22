#include <iostream>

using namespace std;

// function to calculate the rectangle area
float calculateRectangleArea(float a, float b) {
    return a * b;
}

// procedure to print area on screen
void printRectangleArea(float area) {
    cout << "Rectangle area is : " << area << endl;
}

// procedure to read the parameters from the user, we need to send the parameters by reference
void readRectangleSides(float &a, float &b) {
    cout << "Please enter a : ";
    cin >> a;

    cout << "Please enter b : ";
    cin >> b;
}

int main()
{
    // float rectangle sides declaration
    // for demonstration, i assign both of them with 0 and i print the value straight down
    float a=0, b=0;
    
    /*
    cout << a << endl;
    cout << b << endl;
    */

    // reading the sides from the user
    // after reading from the user, the 2 variables should hold whatever the user enter for a & b because it was used by Ref
    // NOTE if you forget to send the parameters by Ref (float &a, float &b), and you sent them by Value (float a, float b) it will just print 0 if you assign them before
    // otherwise it will cause you program to fail
    readRectangleSides(a, b);
    
    // checking that the variables are holding the correct values
    /*
    cout << a << endl;
    cout << b << endl;
    */

    // because the printRectangleArea procedure has 1 parameter (area), i sent the function calculate because it's returning 1 value which is the area 
    // calculate the area and print it on screen
    printRectangleArea(calculateRectangleArea(a, b));
    
}