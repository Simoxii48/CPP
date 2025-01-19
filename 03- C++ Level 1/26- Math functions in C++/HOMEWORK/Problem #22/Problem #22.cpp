
#include <iostream>
using namespace std;

int main()
{
    // Problem #22 Write program to calculate the circle area inscribed in an isosceles triangle
    float a, b;
    const float pi = 3.14;

    cout << "Please enter a : ";
    cin >> a;

    cout << "Please enter b : ";
    cin >> b;

    float area = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

    cout << "The circle area = " << floor(area) << endl;
}