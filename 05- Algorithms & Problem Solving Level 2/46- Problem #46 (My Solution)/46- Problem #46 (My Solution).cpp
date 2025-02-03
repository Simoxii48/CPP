#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

int myAbs(int number) {
    if (number > 0)
        return number;
    else
        return -number;
}

int main()
{
    int number = readNumber();

    cout << "My abs result : " << myAbs(number) << endl;
    cout << "C++ abs result : " << abs(number) << endl;
}