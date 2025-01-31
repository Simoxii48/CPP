#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

void readArray(int arr[100], int& arrLength) {
    cout << "\nEnter number of elements : \n";
    cin >> arrLength;
    
    cout << "\nEnter array elements : \n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int timesRepeated(int number, int arr[100],int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (number == arr[i])
            counter++;
    }
    return counter;
}

int main()
{
    int arr[100], arrlength = 0, numberToCheck = 0;

    readArray(arr, arrlength);
    numberToCheck = readPositiveNumber("Please enter the number you want to check : ");

    cout << "\nOriginal array : ";
    printArray(arr, arrlength);

    cout << "\nNumber " << numberToCheck;
    cout << " is repeated : ";
    cout << timesRepeated(numberToCheck, arr, arrlength) << " time(s)\n";
}