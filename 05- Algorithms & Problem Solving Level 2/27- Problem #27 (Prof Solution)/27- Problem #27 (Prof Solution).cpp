#include <cstdlib>
#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& length) {
    cout << "Please enter the array elements to fill : ";
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

int sumArray(int arr[100], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

float arrayAverage(int arr[100], int length) {
    return (float)sumArray(arr, length) / length;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, arrLength = 0;
    fillArrayWithRandomNumbers(arr, arrLength);

    cout << "\Array elements : ";
    printArray(arr, arrLength);

    cout << "\nAverage of all numbers is : ";
    cout << arrayAverage(arr, arrLength) << endl;
}