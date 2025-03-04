#include <iostream>
using namespace std;

void readTriangleData(float& a, float& b) {
    cout << "Please enter triangle side A : ";
    cin >> a;

    cout << "Please enter triangle side B : ";
    cin >> b;
}

float circleAreaByITriangle(float a, float b) {
    const float pi = 3.141592653589793238;
    
    return pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void printResult(float area) {
    cout << "Circle area = " << area << endl;
}

int main()
{
    float a = 0, b = 0;
    readTriangleData(a, b);

    printResult(circleAreaByITriangle(a, b));
}