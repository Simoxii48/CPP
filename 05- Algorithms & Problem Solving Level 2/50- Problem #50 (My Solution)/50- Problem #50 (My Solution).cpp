#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

float mySqrt(int number) {
    // no idea how to do it :(
}

int main()
{
    int number = readNumber();

    cout << "My sqrt result : " << mySqrt(number) << endl;
    cout << "C++ sqrt result : " << sqrt(number) << endl;
}