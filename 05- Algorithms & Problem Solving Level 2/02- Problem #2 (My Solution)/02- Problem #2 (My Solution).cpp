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

enPrimeNotPrime checkIsPrime(int number) {
    int M = round(number / 2);
    for (int i = 2; i <= M; i++) {
        if (number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void printPrimeNumbersfrom1ToN(int N) {
    for (int i = 1; i <= N; i++) {
        if (checkIsPrime(i) == enPrimeNotPrime::Prime)
            cout << i << endl;
    }
}

int main()
{
    int Number = readPositiveNumber("Please enter a positive number : ");
    printPrimeNumbersfrom1ToN(Number);
}