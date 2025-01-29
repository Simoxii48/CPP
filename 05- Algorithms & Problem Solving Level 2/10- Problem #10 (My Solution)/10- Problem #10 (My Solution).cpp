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

int oneDigitFrequency(int number, int digitToCheck) {
    int remainder = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        if (remainder == digitToCheck)
            remainder;
    }
    return 0;
}

void printDigitsInOrder(int number) {
    for (int i = 0; i < 10; i++) {
        int digitFrequency = oneDigitFrequency(number, i);
        // Stopped here with no idea
        
    }
}

int main()
{
    printDigitsInOrder(readPositiveNumber("Please enter a positive number : "));
}