#include <iostream>
using namespace std;

float readSquareSide() {
    float A = 0;
    cout << "Please enter the square side A : ";
    cin >> A;
    return A;
}

float circleAreaInscribedInSquare(float A) {
    const float pi = 3.141592653589793238;
    return (pi * pow(A, 2)) / 4;
}

void printResult(float area) {
    cout << "Circle area = " << area << endl;
}

int main()
{
    printResult(circleAreaInscribedInSquare(readSquareSide()));
}