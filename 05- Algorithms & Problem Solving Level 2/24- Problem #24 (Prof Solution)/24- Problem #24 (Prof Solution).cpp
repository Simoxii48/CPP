#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    cout << "Please enter how many random numbers to fill : ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = randomNumber(0, 100);
    }
}

int maxNumberInArray(int arr[100], int arrLength) {
    int max = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
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

    cout << "\nMax Number is : ";
    cout << maxNumberInArray(arr, arrLength) << endl;
}