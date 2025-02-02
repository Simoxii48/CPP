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

void addArrayElements(int number, int arr[100], int& length) {
    length++;
    arr[length - 1] = number;
}

void copyArrayToOtherArray(int arrSrc[100],int arrDst[100], int& length,int length1) {
    int i = 0;
    do {
        addArrayElements(arrSrc[i], arrDst, length);
        i++;
    } while (length1 != length);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0;
    fillArrayWithPositiveNumbers(arr, length);

    int arr2[100] = {}, length2 = 0;
    copyArrayToOtherArray(arr, arr2, length2,length);

    cout << "\nArray 1 elements :\n";
    printArray(arr, length);

    cout << "\nArray 2 elements after copy :\n";
    printArray(arr2, length2);
}