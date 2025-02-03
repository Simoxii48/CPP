#include <iostream>
using namespace std;

int myFloor(float number) {
    if (number >= 0)
        return (int)number;
    else
        return (int)number - 1;
}

float readNumber() {
    float number = 0;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

int main()
{
    float number = readNumber();

    cout << "My floor result : " << myFloor(number) << endl;
    cout << "C++ floor result : " << floor(number) << endl;
}