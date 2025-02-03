#include <iostream>
using namespace std;

int readNumber(int i) {
    int number = 0;
    cout << "Enter number [" << i << "] : ";
    cin >> number;
    return number;
}

void fillArray(int arr[100], int& length) {
    length = 6;
    
    for (int i = 0; i < length; i++) {
        arr[i] = readNumber(i + 1);
    }
}

void printArray(int arr[100], int length) {
    cout << "Array elements :\n";

    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void addArrayelement(int number, int arr[100], int& length) {
    length++;
    arr[length - 1] = number;
}

void copyReversedArray(int arr[100], int length, int arrDst[100], int& lengthDst) {
    for (int i = length-1; i >= 0; i--) {
        addArrayelement(arr[i], arrDst, lengthDst);
    }
}

bool isArrayPalindrom(int arr[100], int length) {
    int arrDst[100] = {}, lengthDst = 0;
    copyReversedArray(arr, length, arrDst, lengthDst);

    for (int i = 0; i < length; i++) {
        if (arr[i] != arrDst[i]) {
            return 0;
        }

    }
    return 1;
}

int main()
{
    int arr[100] = {}, length = 0;

    fillArray(arr, length);
    printArray(arr, length);

    if (isArrayPalindrom(arr, length))
        cout << "\nYes array is Palindrom" << endl;
    else
        cout << "\nNo array is not Palindrome" << endl;
    
    return 0;
}