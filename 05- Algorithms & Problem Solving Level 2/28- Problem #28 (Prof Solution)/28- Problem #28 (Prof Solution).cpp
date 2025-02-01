#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& length) {
    cout << "Please enter the array number of elements to fill : ";
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

void copyArray(int arrSource[100], int arrDestination[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrDestination[i] = arrSource[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100] = {}, arrLength = 0;

    fillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100] = {};
    copyArray(arr, arr2, arrLength);

    cout << "\nArray 1 elements : \n";
    printArray(arr, arrLength);

    cout << "\nArray 2 elements after copy :\n";
    printArray(arr2, arrLength);
}