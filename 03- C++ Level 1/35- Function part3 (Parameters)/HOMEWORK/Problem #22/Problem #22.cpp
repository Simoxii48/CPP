#include <iostream>
using namespace std;

// procedure to read inputs from the user
void readA_B(float& a, float& b) {
    cout << "Please enter a : ";
    cin >> a;

    cout << "Please enter b : ";
    cin >> b;
}

// function to calculate circle area
float calculateCircleArea(float a, float b) {
    const float pi = 3.14;
    float area = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    return area;
}

// procedure to print circle area
void printCircleArea(float area) {
    cout << "The circle area is : " << area << endl;
}

int main()
{
    float a, b;

    readA_B(a, b);
    
    printCircleArea(calculateCircleArea(a, b));
}