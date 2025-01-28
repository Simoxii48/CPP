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
    return Number == sum;
}

void printPerfectNumbersFrom1ToN(int Number) {
    for (int i = 1; i <= Number; i++) {
        if (isPerfectNumber(i))
            cout << i << endl;
    }
}

int main()
{
    printPerfectNumbersFrom1ToN(readPositiveNumber("Please enter positive number : "));
}