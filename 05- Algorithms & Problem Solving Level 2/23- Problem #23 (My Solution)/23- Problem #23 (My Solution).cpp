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

void readArray(int arr[], int& length) {
    for (int i = 0; i < length; i++) {
        arr[i] = randomNumber(0, 100);
    }
}

void printArray(int arr[], int length) {
    cout << "\nArray Elements : ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int
        arr[100] = {},
        length = readPositiveNumber("Please enter array elements to generate : ");
    readArray(arr, length);
    printArray(arr, length);

}