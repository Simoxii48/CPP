
#include <iostream>
using namespace std;

int main()
{
    // Problem #17
    // Write a program to calculate rectangle area through diagonal and side area then print it
    short a, d;

    cout << "Please enter A : ";
    cin >> a;

    cout << "Please enter D : ";
    cin >> d;

    float area = a * sqrt(d * d - a * a);

    cout << "The area of the triangle is : " << area << endl;
    



    // Then Solve From Algorithms & Problem solving these Problems:
    // #19, #20, #21, #22, #31, #35, #39, #40, #42, #43, #47, & #48
}