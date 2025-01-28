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

int sumOfDigits(int Number) {
    int remainder = 0, sum = 0;

    while (Number > 0) {
        remainder = Number % 10;
        sum += remainder;
        Number /= 10;
    }

    return sum;
}

void printSumOfDigits(int Number) {
    cout << "Sum of Digits = " << sumOfDigits(Number) << endl;
}

int main()
{
    printSumOfDigits(readPositiveNumber("Please enter a positive number : "));
}