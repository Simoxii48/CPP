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

void copyArrayElementsToNewArray(int arr1[100], int arr2[100], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int arr1[100] = {}, arr2[100] = {}, length = 0;
    fillArrayWithRandomNumbers(arr1, length);
    
    cout << "\nArray 1 elements : ";
    printArray(arr1, length);

    cout << "\nArray 2 elements after copy : ";
    copyArrayElementsToNewArray(arr1, arr2, length);
    printArray(arr2, length);
}