
#include <iostream>
using namespace std;

int main()
{
    // Problem #19 Write program to calculate the circle area through diameter
    int D;
    const float pi = 3.14;

    cout << "Please enter the diameter D : ";
    cin >> D;

    float area = (pi * pow(D, 2)) / 4;

    cout << "The circle area = " << ceil(area) << endl;
}