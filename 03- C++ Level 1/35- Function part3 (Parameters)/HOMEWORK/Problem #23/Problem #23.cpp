#include <iostream>
using namespace std;

// procedure to read inputs from the user
void readCircleInputs(float& a, float& b, float& c) {
    cout << "Please enter a : ";
    cin >> a;

    cout << "Please enter b : ";
    cin >> b;

    cout << "Please enter c : ";
    cin >> c;
}

// function to calculate the circle area
float calculateCircleArea(float a, float b, float c) {
    const float pi = 3.14;
    float p = (a + b + c) / 2;
    float x = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));
    float area = pi * pow(x, 2);
    return area;
}

// procedure to print the circle area
void printCircleArea(float area) {
    cout << "The circle area is : " << area << endl;
}


int main()
{
    float a, b, c;

    // read inputs
    readCircleInputs(a, b, c);

    // calculate & print
    printCircleArea(calculateCircleArea(a, b, c));

    return 0;
}