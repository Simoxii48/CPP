#include <iostream>
using namespace std;

void readNumbers(float& a, float& h) {
    cout << "Please enter triangle base A : ";
    cin >> a;

    cout << "Please enter triangle Hight H : ";
    cin >> h;
}

float triangleArea(float a, float h) {
    return (a / 2) * h;
}

void printResult(float area) {
    cout << "Triangle area = " << area << endl;
}

int main()
{
    float a = 0, h = 0;
    readNumbers(a, h);

    printResult(triangleArea(a, h));
}