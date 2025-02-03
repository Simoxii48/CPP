#include <iostream>
using namespace std;

int readNumber(int i) {
    int number = 0;
    cout << "Please enter a number [" << i <<"] : ";
    cin >> number;
    return number;
}

void fillArrayElement(int number, int arr[100], int& length) {
    length++;
    arr[length - 1] = number;
}

void fillArrayWithNumbers(int arr[100], int& length) {
    for (int i = 0; i < length; i++) {
        arr[i] = readNumber(i + 1);
    }
}

int digitFreq(int arr[100], int length,int digitToCount) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] == digitToCount)
            counter++;
    }
    return counter;
}

void copyDistinctElements(int arr[100], int arrDst[100], int length, int& lengthDst) {

    for (int i = 0; i < length; i++) {
        if (digitFreq(arrDst, lengthDst, arr[i]) <= 0) {
            fillArrayElement(arr[i], arrDst, lengthDst);
        }
    }
}

void printArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {}, length = 10,
        arrDst[10] = {}, lengthDst = 0;

    fillArrayWithNumbers(arr, length);

    copyDistinctElements(arr, arrDst, length, lengthDst);
    
    cout << "\nArray 1 elements :\n";
    printArray(arr, length);

    cout << "\nArray 2 distinct elements :\n";
    printArray(arrDst, lengthDst);

    return 0;
}