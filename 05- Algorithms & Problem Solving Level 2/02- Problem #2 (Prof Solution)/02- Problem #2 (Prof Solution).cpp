#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

enPrimeNotPrime checkPrime(int Number) {
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++) {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void printPrimeNumbersFrom1ToN(int Number) {
    cout << "\n";
    cout << "Prime numbers from " << 1 << " to " << Number;
    cout << " are : " << endl;
    for(int i = 1; i <= Number; i++) {
        if (checkPrime(i) == enPrimeNotPrime::Prime)
            cout << i << endl;
    }
}

int main()
{
    printPrimeNumbersFrom1ToN(readPositiveNumber("Please enter a positive number : "));
}