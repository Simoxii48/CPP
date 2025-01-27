#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float readPositiveNumber(string message) {
    float number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

enPrimeNotPrime checkPrime(int number) {
    int m = round(number / 2);

    for (int i = 2; i <= m; i++) {
        if (number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void printNumberType(int number) {
    switch (checkPrime(number)) {
    case enPrimeNotPrime::Prime:
        cout << "The number is prime" << endl;
        break;
    case enPrimeNotPrime::NotPrime:
        cout << "The number is not prime" << endl;
        break;
    }
}

int main()
{
    printNumberType(readPositiveNumber("Please enter a positive number : "));
}