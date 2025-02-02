#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

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

enOddOrEven checkIsOdd(int number) {
    if (number % 2 != 0) {
        return enOddOrEven::Odd;
    }
    else {
        return enOddOrEven::Even;
    }
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

void copyOddNumbers(int arrSrc[100], int arrDst[100], int lengthSrc, int& lengthDst) {
    for (int i = 0; i < lengthSrc; i++) {
        if (checkIsOdd(arrSrc[i]) == enOddOrEven::Odd)
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

    copyOddNumbers(arrSrc, arrDst, lengthSrc, lengthDst);

    cout << "\nArray 2 Odd numbers :\n";
    printArray(arrDst, lengthDst);

    return 0;
}