#include <iostream>
using namespace std;

float myABS(float number) {
    if (number > 0)
        return number;
    else
        return number * -1;
}

float readNumber() {
    int number = 0;
    cout << "enter a number : ";
    cin >> number;
    return number;
}

int main()
{
    float number = readNumber();
    
    cout << "My abs result : " << myABS(number) << endl;
    cout << "C++ abs result : " << abs(number) << endl;
}