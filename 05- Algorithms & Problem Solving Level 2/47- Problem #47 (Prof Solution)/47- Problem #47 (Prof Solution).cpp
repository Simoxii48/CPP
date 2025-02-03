#include <iostream>
using namespace std;

float readNumber() {
    float number = 0;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

float getFractionPart(float number) {
    return number - int(number);
}

int myRound(float number) {
    int intPart = int(number);

    float fractionsPart = getFractionPart(number);

    if (abs(fractionsPart) >= .5) {
        if (number > 0)
            return ++intPart;
        else
            return --intPart;
    }
    else {
        return intPart;
    }
}

int main()
{
    float number = readNumber();
    
    cout << "My round result : " << myRound(number) << endl;
    cout << "C++ round result : " << round(number) << endl;
}