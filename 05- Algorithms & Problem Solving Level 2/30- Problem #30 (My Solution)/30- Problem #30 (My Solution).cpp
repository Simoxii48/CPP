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

void sumOf2ArraysElements(int arr1[100], int arr2[100], int arr3[100], int length) {
    for (int i = 0; i < length; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, 
        length = readPositiveNumber("Please enter the arrays length : ");
    
    fillArrayWithRandomNumbers(arr, length);

    int arr2[100] = {};
    fillArrayWithRandomNumbers(arr2, length);

    cout << "\Array 1 elements : \n";
    printArray(arr, length);

    cout << "\Array 2 elements : \n";
    printArray(arr2, length);

    int arr3[100] = {};

    cout << "\Sum of array 1 and array 2 elements : \n";
    sumOf2ArraysElements(arr,arr2,arr3,length);
    printArray(arr3, length);
}