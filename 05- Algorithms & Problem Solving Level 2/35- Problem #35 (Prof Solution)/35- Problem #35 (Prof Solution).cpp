#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& length) {
    cout << "Please enter how many elements to fill : ";
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

int readNumber() {
    int number = 0;
    cout << "Please enter the number you are looking for : ";
    cin >> number;
    return number;
}

int findNumberPositionInArray(int number, int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == number)
            return i;
    }
    return -1;
}

bool isNumberInArray(int number, int arr[100], int length) {
    return findNumberPositionInArray(number, arr, length) != -1;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, arrLength = 0;
    fillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 elements :\n";
    printArray(arr, arrLength);

    int number = readNumber();
    cout << "\nNumber you are looking for is : " << number << endl;

    if (!isNumberInArray(number, arr, arrLength))
        cout << "No, The number is not found :-(" << endl;
    else
        cout << "Yes it is found :-)" << endl;
}