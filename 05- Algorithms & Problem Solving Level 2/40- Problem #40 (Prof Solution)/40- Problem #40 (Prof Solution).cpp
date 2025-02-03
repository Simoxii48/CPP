#include <iostream>
using namespace std;

int readNumber(int i) {
    int number = 0;
    cout << "Please enter a number [" << i << "] : ";
    cin >> number;
    return number;
}

void fillArrayWithNumbers(int arr[100], int& length) {
    length = 10;
    for (int i = 0; i < length; i++) {
        arr[i] = readNumber(i + 1);
    }
}

void printArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void addArrayElement(int number, int arr[100], int& length) {
    length++;
    arr[length - 1] = number;
}

short findNumberPositionInArray(int number, int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int number, int arr[100], int length) {
    return findNumberPositionInArray(number, arr, length) != -1;
}

void copyDistinctElements(int arr[100], int arrDst[100], int length, int& lengthDst) {

    for (int i = 0; i < length; i++) {
        if (!IsNumberInArray(arr[i], arrDst, lengthDst)) {
            addArrayElement(arr[i], arrDst, lengthDst);
        }
    }
}

int main()
{
    int arr[100] = {}, length = 0,
        arrDst[100] = {}, lengthDst = 0;

    fillArrayWithNumbers(arr, length);

    copyDistinctElements(arr, arrDst, length, lengthDst);

    cout << "\nArray 1 elements :\n";
    printArray(arr, length);

    cout << "\nArray 2 distinct elements :\n";
    printArray(arrDst, lengthDst);

    return 0;
}