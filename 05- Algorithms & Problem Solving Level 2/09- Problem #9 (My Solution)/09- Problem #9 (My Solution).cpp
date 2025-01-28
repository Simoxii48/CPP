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

int oneDigitFrequency(int number, int digitToCheck) {
    int remainder = 0, sum = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        if (remainder == digitToCheck)
            sum++;
    }
    return sum;
}
    
void printAllDigitFrequencies(int number) {
    // Stopped Here after many tries :( :(
}

int main()
{
    printAllDigitFrequencies(readPositiveNumber("Please enter a positive number : "));
}