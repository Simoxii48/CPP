#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArray(int arr[100], int& length) {
    cout << "Please enter the array size : ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[100], int length) {
    cout << "\nArray Elements : ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int maxNumberInArray(int arr[100], int length) {
    int max = 0;
    for (int i = 0; i < length; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int minNumberInArray(int arr[100], int length) {
    int min = maxNumberInArray(arr,length);
    
    for (int i = 0; i < length; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100] = {}, length = 0;

    fillArray(arr, length);
    printArray(arr, length);

    cout << "\nMin Number is : " << minNumberInArray(arr, length) << endl;
}