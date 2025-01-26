#include <iostream>
using namespace std;

float readCircumferences() {
    float l = 0;

    cout << "Please enter circumference : ";
    cin >> l;

    return l;
}

float circleAreaByCircumference(float l) {
    const float pi = 3.141592653589793238;
    
    return pow(l, 2) / (4 * pi);
}

void printResult(float area) {
    cout << "Circle area = " << area << endl;
}

int main()
{
    printResult(circleAreaByCircumference(readCircumferences()));
}