#include <iostream>
using namespace std;

float readNumber() {
    float number = 0;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

int mySqrt(int number) {
    return pow(number, 0.5); // any number power 0.5 is the sqrt :)
}

int main()
{
    int number = readNumber();

    cout << "My sqrt result : " << mySqrt(number) << endl;
    cout << "C++ sqrt result : " << sqrt(number) << endl;
}