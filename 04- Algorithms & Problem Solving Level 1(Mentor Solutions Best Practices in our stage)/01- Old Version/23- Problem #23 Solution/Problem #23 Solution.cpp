#include <iostream>
using namespace std;

void readTriangleData(float& a, float& b, float& c) {
    cout << "Please enter triangle side A : ";
    cin >> a;

    cout << "Please enter triangle side B : ";
    cin >> b;

    cout << "Please enter triangle side C : ";
    cin >> c;
}

float circleAreaByTriangle(float a, float b, float c) {
    const float pi = 3.141592653589793238;
    float p = (a + b + c) / 2;
    float t = (a * b * c) / (4 * sqrt(p * (p - a) - (p - b) * (p - c)));

    return pi * pow(t, 2);
}

void printResult(float area) {
    cout << "Circle area = " << area << endl;
}

int main()
{
    float a, b, c;
    readTriangleData(a, b, c);

    printResult(circleAreaByTriangle(a, b, c));
}