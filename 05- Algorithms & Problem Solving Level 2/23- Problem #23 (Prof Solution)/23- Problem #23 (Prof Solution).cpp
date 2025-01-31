#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    cout << "\Enter number of elements : \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));


    int arr[100] = {}, arrLength = 0;

    fillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements : ";
    printArray(arr, arrLength);
}