#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& length) {
    cout << "Please enter the number of elements : ";
    cin >> length;

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

void copyArrayInReverseOrder(int arrSrc[100], int arrDst[100], int length) {
    for (int i = 0; i < length; i++) {
        arrDst[i] = arrSrc[length - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arrSrc[100] = {},
        length = 0;

    fillArrayWithRandomNumbers(arrSrc, length);

    int arrDst[100] = {};
    copyArrayInReverseOrder(arrSrc, arrDst, length);
    
    cout << "\nArray 1 elements : \n";
    printArray(arrSrc, length);

    cout << "\nArray 2 elements after copying array 1 reversed order :\n";
    printArray(arrDst, length);

    return 0;
}