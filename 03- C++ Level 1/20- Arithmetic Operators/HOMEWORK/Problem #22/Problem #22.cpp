
#include <iostream>
using namespace std;

int main()
{
    // Problem #22
    // Write a program to calculate circle area inscribed in an isosceles triangle
    float a, b;
    float pi = 3.14;

    cout << "Please enter A : ";
    cin >> a;

    cout << "Please enter B : ";
    cin >> b;

    float area = pi * (b * b / 4) * ((2 * a - b) / (2 * a + b));
    
    cout << "The area of the circle is : " << area << endl;




    // Then Solve From Algorithms & Problem solving these Problems:
    // #31, #35, #39, #40, #42, #43, #47, & #48
}