#include <iostream>
using namespace std;

void fillArray(int arr[100], int& length) {
    length = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void printArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isPalindromeArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] != arr[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[100] = {}, length = 0;
    fillArray(arr, length);

    cout << "\nArray elements :\n";
    printArray(arr, length);

    if (isPalindromeArray(arr, length))
        cout << "\nYes array is Palindrom" << endl;
    else
        cout << "\nNo array is not Palindrome" << endl;
}