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

int countDigitFrequency(short digitToCheck, int number) {
    int freqCount = 0, remainder = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        if (digitToCheck == remainder)
            freqCount++;
    }
    return freqCount;
}

int main()
{
    int number = readPositiveNumber("Please enter a positive number : ");
    short digitToCheck = readPositiveNumber("Please enter one digit to check : ");

    cout << "\nDigit " << digitToCheck << " Frequency is "
        << countDigitFrequency(digitToCheck, number) << " Time(s)." << endl;
}