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

int getDigitFrequency(int number, int frequency) {
    int remainder = 0, sum = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        if (remainder == frequency)
            sum++;
    }
    return sum;
}

int main()
{
    int
        number = readPositiveNumber("Please enter a positive number : "),
        frequency = readPositiveNumber("Please enter the frequency to search : ");

    cout << "Digit " << frequency << " is " 
        << getDigitFrequency(number, frequency) << " Times(s)." 
        << endl;
}