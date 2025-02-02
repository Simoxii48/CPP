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

void fillArrayWithPositiveNumbers(int arr[100], int& length) {
    length = readPositiveNumber("Please enter how many elements to fill : ");

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

void addArrayElement(int number, int arr[100], int& length) {
    length++;
    arr[length - 1] = number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int
    arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
        addArrayElement(arrSource[i], arrDestination,
            arrDestinationLength);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0;
    fillArrayWithPositiveNumbers(arr, length);

    int arr2[100] = {}, length2 = 0;
    CopyArrayUsingAddArrayElement(arr, arr2, length, length2);

    cout << "\nArray 1 elements :\n";
    printArray(arr, length);

    cout << "\nArray 2 elements after copy :\n";
    printArray(arr2, length2);
}