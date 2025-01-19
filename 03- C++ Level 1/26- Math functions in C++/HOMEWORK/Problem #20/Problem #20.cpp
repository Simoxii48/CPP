
#include <iostream>
using namespace std;

int main()
{
    // Problem #20 Write program to calculate the circle area inscribed in a square
    int A;
    const float pi = 3.14;

    cout << "Please enter A : ";
    cin >> A;

    float area = (pi * pow(A, 2)) / 4;

    cout << "The circle area = " << ceil(area) << endl;
}