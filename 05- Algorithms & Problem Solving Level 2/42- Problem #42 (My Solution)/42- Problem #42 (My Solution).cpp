#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

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
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[100], int length) {
    cout << "\nArray elements : ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

enOddOrEven isOddOrEven(int number) {
    if (number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int countOddNumbersInArray(int arr[100], int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (isOddOrEven(arr[i]) == enOddOrEven::Odd)
            counter++;
    }
    return counter;
}

void printResult(int num) {
    cout << "\nOdd numbers count is : " << num << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0;
    fillArrayWithRandomNumbers(arr, length);
    printArray(arr, length);

    printResult(countOddNumbersInArray(arr, length));
}