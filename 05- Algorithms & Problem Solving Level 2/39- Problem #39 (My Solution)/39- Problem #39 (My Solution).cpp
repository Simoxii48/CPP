#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

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

void fillArrayWithRandomNumber(int arr[100], int& length) {
    length = readPositiveNumber("How many elements to fill : ");

    for (int i = 0; i < length; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void addArrayElement(int number, int arrDst[], int& lengthDst) {
    lengthDst++;
    arrDst[lengthDst - 1] = number;
}

void copyPrimeNumbers(int arrSrc[100], int arrDst[100], int lengthSrc, int& lengthDst) {
    for (int i = 0; i < lengthSrc; i++) {
        if (checkIsPrime(arrSrc[i]) == enPrimeNotPrime::Prime)
            addArrayElement(arrSrc[i], arrDst, lengthDst);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arrSrc[100] = {}, lengthSrc = 0,
        arrDst[100] = {}, lengthDst = 0;

    fillArrayWithRandomNumber(arrSrc, lengthSrc);

    cout << "\nArray 1 elements :\n";
    printArray(arrSrc, lengthSrc);

    copyPrimeNumbers(arrSrc, arrDst, lengthSrc, lengthDst);

    cout << "\nArray 2 Prime numbers :\n";
    printArray(arrDst, lengthDst);

    return 0;
}