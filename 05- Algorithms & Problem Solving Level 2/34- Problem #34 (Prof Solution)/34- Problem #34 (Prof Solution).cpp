#include <iostream>
#include <cstdlib>
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
    cout << "Please enter a number to search for : ";
    cin >> number;
    return number;
}

short findNumberPositionInArray(int number, int arr[100], int arrLength) {
    
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == number)
            return i;
    }

    return -1;
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

    short numberPosition = findNumberPositionInArray(number, arr, arrLength);

    if (numberPosition == -1)
        cout << "The number is not found :-(\n";
    else {
        cout << "The number found at position : " << numberPosition << endl;
        cout << "The number found its order : " << numberPosition + 1 << endl;
    }
}