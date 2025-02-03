#include <iostream>
using namespace std;

float readNumber() {
    float number = 0;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

float getFractionPart(float number) {
    return number - (int)number;
}

int myCeil(float number) {
    if (abs(getFractionPart(number)) > 0) {
        if (number > 0)
            return int(number) + 1;
        else
            return (int)number;
    }
    else
        return number;
}

int main()
{
    float number = readNumber();

    cout << "My ceil result : " << myCeil(number) << endl;
    cout << "C++ ceil result : " << ceil(number) << endl;
}