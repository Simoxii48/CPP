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

bool isPerfectNumber(int Number) {
    int sum = 0;
    for (int i = 1; i < Number; i++) {
        if (Number % i == 0)
            sum += i;
    }

    return Number == sum; // better syntax than if else
}

void printResult(int Number) {
    if (isPerfectNumber(Number))
        cout << Number << " is perfect number.\n";
    else
        cout << Number << " is not perfect number.\n";
}

int main()
{
    printResult(readPositiveNumber("Please enter positive number : "));
}