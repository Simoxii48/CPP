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

void sumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, arr2[100]={},arrSum[100]={},
        arrLength = readPositiveNumber("How many elements : ");

    fillArrayWithRandomNumbers(arr, arrLength);
    fillArrayWithRandomNumbers(arr2, arrLength);

    sumOf2Arrays(arr, arr2, arrSum, arrLength);
    
    cout << "\Array 1 elements : \n";
    printArray(arr, arrLength);

    cout << "\Array 2 elements : \n";
    printArray(arr2, arrLength);

    cout << "\Sum of array 1 and array 2 elements : \n";
    printArray(arrSum, arrLength);
}