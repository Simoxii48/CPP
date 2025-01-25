#include <iostream>
using namespace std;

void readNumbers(float& a, float& b) {
    cout << "Please enter rectangle width A : ";
    cin >> a;

    cout << "Please enter rectangle length B : ";
    cin >> b;
}

float calculateRectangleArea(float a, float b) {
    return a * b;
}

void printResult(float area) {
    cout << "Rectangle area is : " << area << endl;
}

int main()
{
    float a = 0, b = 0;

    readNumbers(a, b);
    printResult(calculateRectangleArea(a, b));
}