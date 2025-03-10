#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int reverseNumber(int number) {
    int remainder = 0, number2 = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        number2 = number2 * 10 + remainder;
    }
    return number2;
}

int main()
{
    cout << "\nReverse is :\n"
        << reverseNumber(readPositiveNumber("Please enter a positive number : "))
        << "\n";
}