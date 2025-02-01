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
    cout << "\Array elements : ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int averageOfArrayElements(int arr[100], int length) {
    int average = 0;
    for (int i = 0; i < length; i++) {
        average += arr[i];
    }
    return (int)average / length;
}

int main()
{
    int arr[100] = {}, length = 0;
    fillArrayWithRandomNumbers(arr, length);
    printArray(arr, length);

    cout << "\nAverage of all numbers is : "
        << averageOfArrayElements(arr, length) << endl;
}