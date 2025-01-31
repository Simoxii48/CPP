#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    cout << "Please enter how many elements to fill : ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = randomNumber(0, 100);
    }
}

void printArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int minNumberInArray(int arr[100], int arrLength) {
    int min = 0;
    min = arr[0];
    
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, arrLength = 0;
    fillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements : ";
    printArray(arr, arrLength);

    cout << "\Min Number is : "
        << minNumberInArray(arr, arrLength) << endl;

}