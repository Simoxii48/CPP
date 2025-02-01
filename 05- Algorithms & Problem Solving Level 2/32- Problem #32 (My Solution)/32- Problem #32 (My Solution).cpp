#include <iostream>
#include <cstdlib>
using namespace std;

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

void fillArrayWithRandomNumbers(int arr[100], int length) {
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

void copyArrayReversly(int arrSrc[100], int arrDst[100], int length) {
    // solved with normal loop
    for (int i = 0; i < length; i++) {
        arrDst[i] = arrSrc[length - 1 - i];
    }
    
    // solved with reversed loop
    for (int i = length; i > 0; i--) {
        arrDst[lenth - i] = arrSrc[i - 1];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arrSrc[100] = {}, 
        arrDst[100] = {},
        length = readPositiveNumber("Please enter the number of elements : ");

    fillArrayWithRandomNumbers(arrSrc, length);

    cout << "\nArray 1 elements : \n";
    printArray(arrSrc, length);

    copyArrayReversly(arrSrc, arrDst, length);

    cout << "\nArray 2 elements after copying array 1 reversed order :\n";
    printArray(arrDst, length);

    return 0;
}