#include <iostream>
#include <cstdlib>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& length) {
    length = readPositiveNumber("Please enter the number of elements : ");

    for (int i = 0; i < length; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[100], int length) {
    cout << "\nArray 1 elements :\n";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

short searchForIndex(int arr[100], int length, short indexToSearch) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == indexToSearch)
            return i;    
    }
    return -1;
}

void printResult(short indexToSearch, short indexIfFound) {

    if (indexIfFound != -1) {
        cout << "\nNumber you are looking for is : " << indexToSearch;
        cout << "\nThe number found at position : " << indexIfFound;
        cout << "\nThe number found its order : " << indexIfFound + 1 << endl;
    }
    else {
        cout << "\nNumber you are looking for is : " << indexToSearch;
        cout << "\nThe number is not found :-(" << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0;
    fillArrayWithRandomNumbers(arr, length);
    printArray(arr, length);
    
    short indexToSearch = readPositiveNumber("\nPlease enter a number to search for :");

    printResult(indexToSearch, searchForIndex(arr, length, indexToSearch));
}