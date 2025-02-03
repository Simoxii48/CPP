#include <iostream>
using namespace std;

float readNumber() {
    float number = 0;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

float myRound(float number) {
    int intNumber = (int)number;
    float fractionPart = number - intNumber;

    if (number > 0) {
        if (fractionPart >= 0.5)
            return intNumber + 1;
        else
            return intNumber;
    }
    else {
        if (fractionPart > -0.5)
            return intNumber;
        else
            return intNumber - 1;
    }
}

int main()
{
    float number = readNumber();

    cout << "My round result : " << myRound(number) << endl;
    cout << "C++ round result : " << round(number) << endl;
}