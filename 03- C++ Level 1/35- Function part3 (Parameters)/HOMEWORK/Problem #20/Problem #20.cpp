#include <iostream>
using namespace std;

// float function to read from user
float readA(float& a) {
    cout << "Enter a : ";
    cin >> a;
    return a;
}

// float function to calculate area
float calculateCircleArea(float a) {
    const float pi = 3.14;
    float area = (pi * pow(a, 2)) / 4;
    return area;
}

// procedure to print area
void printCircleArea(float area) {
    cout << "Circle area is : " << area << endl;
}


int main()
{
    float a;

    printCircleArea(calculateCircleArea(readA(a)));
}