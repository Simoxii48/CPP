#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

void printDigits(int number) {
    int remainder = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        cout << remainder << endl;
    }
}

int main()
{
    printDigits(readPositiveNumber("Please enter positive number : "));
}