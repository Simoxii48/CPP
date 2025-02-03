#include <iostream>
using namespace std;

enum enPositiveOrNegative { Positive = 1, Negative = 2 };

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

int readNumber() {
    int number = 0;
    cout << "Please enter how many elements to fill : ";
    cin >> number;
    return number;
}

void fillArrayWithRandomNumbers(int arr[100], int& length) {
    length = readNumber();

    for (int i = 0; i < length; i++) {
        arr[i] = randomNumber(-100, 100);
    }
}

void printArray(int arr[100], int length) {
    cout << "\nArray elements : ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

enPositiveOrNegative isPositiveOrNegative(int number) {
    if (number >= 0)
        return enPositiveOrNegative::Positive;
    else
        return enPositiveOrNegative::Negative;
}

int countNegativeNumbersInArray(int arr[100], int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (isPositiveOrNegative(arr[i]) == enPositiveOrNegative::Negative)
            counter++;
    }
    return counter;
}

void printResult(int num) {
    cout << "\Negative numbers count is : " << num << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0;
    fillArrayWithRandomNumbers(arr, length);
    printArray(arr, length);

    printResult(countNegativeNumbersInArray(arr, length));
}