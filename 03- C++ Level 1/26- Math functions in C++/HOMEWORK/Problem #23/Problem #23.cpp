
#include <iostream>
using namespace std;

int main()
{
    // Problem #23 Write program to calculate the circle area described around an arbitrary triangle
    float a, b, c, pi = 3.14;

    cout << "Please enter a : ";
    cin >> a;

    cout << "Please enter b : ";
    cin >> b;

    cout << "Please enter c : ";
    cin >> c;

    float
        p = (a + b + c) / 2,
        x = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))); // We took the half of the equation in this variable

    float area = pi * pow(x, 2); // as we can see here it's easier to write in the pow() function x,2 then write all the statment inside ;)

    cout << "The circle area = " << round(area) << endl;
}