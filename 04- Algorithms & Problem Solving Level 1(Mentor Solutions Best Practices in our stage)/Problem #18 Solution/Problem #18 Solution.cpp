#include <iostream>
using namespace std;

float readRadious() {
    float radious = 0;
    cout << "Please enter circle radious R : ";
    cin >> radious;
    return radious;
}

float circleArea(float r) {
    const float pi = 3.141592653589793238;
    return pow(r, 2) * pi;
}

void printResult(float area) {
    cout << "Circle area = " << area << endl;
}

int main()
{
    printResult(circleArea(readRadious()));
}