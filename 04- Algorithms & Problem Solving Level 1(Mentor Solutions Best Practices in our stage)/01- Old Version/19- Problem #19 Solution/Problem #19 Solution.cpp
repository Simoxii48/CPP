#include <iostream>
using namespace std;

float readDiameter() {
    float D = 0;
    cout << "Please enter circle diameter D : ";
    cin >> D;
    return D;
}

float circleAreaByDiameter(float D) {
    const float pi = 3.141592653589793238;
    return (pow(D, 2) * pi) / 4;
}

void printResult(float area) {
    cout << "Circle area = " << area << endl;
}

int main()
{
    printResult(circleAreaByDiameter(readDiameter()));
}