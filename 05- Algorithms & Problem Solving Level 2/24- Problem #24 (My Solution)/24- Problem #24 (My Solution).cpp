#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArray(int arr[100], int& arrLength) {
    cout << "\nPlease enter how many random numbers to fill : ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = randomNumber(0, 100);
    }
}

int maxNumberInArr(int arr[100], int arrLength) {
    int max = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[0] < arr[i + 1]) {
            arr[0] = arr[i + 1];
            max = arr[0];
        }
    }
    return max;
}

void printArray(int arr[100], int arrLength) {
    cout << "\nArray Elements : ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, arrLength = 0;
    fillArray(arr, arrLength);
    printArray(arr, arrLength);

    cout << "Max Number is : ";
    cout << maxNumberInArr(arr, arrLength);
}