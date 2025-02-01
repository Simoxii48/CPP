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

bool isIndexFound(int arr[100], int length, int index) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == index)
            return 1;
    }
    return 0;
}

int readNumber() {
    int number = 0;
    cout << "\nPlease enter a number to search for : ";
    cin >> number;
    return number;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0, index = 0;
    fillArrayWithRandomNumbers(arr, length);

    cout << "\nArray 1 elements :\n";
    printArray(arr, length);

    index = readNumber();

    cout << "\nNumber you are looking for is : " << index << endl;

    if (isIndexFound(arr, length, index))
        cout << "\nYes, The number is found :-)" << endl;
    else
        cout << "\nNo, The number is not found :-(" << endl;

}