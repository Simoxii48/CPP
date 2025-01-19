
#include <iostream>
using namespace std;

int main()
{
    // Problem #18 Write program to calculate the circle area
    int r;
    const float pi = 3.14;

    cout << "Please enter r : ";
    cin >> r;

    float area = pi * pow(r, 2);
    
    cout << "The circle area = " << ceil(area) << endl;
}