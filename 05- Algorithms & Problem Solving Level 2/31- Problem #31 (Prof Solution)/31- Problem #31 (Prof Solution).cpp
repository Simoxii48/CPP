#include <iostream>
#include <cstdlib>
using namespace std;

int randomumber(int from, int to) {
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

void fillArrayWith1ToN(int arr[100], int& length) {

    for (int i = 0; i < length; i++) {
        arr[i] = i + 1;
    }
}

void printArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int& a, int& b) {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

void shuffleArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        swap(arr[randomumber(1, length) - 1], arr[randomumber(1, length) - 1]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {},
        length = readPositiveNumber("Enter number of elements : ");

    fillArrayWith1ToN(arr, length);

    cout << "\nArray elements before shuffle : \n";
    printArray(arr, length);

    shuffleArray(arr, length);

    cout << "\nArray elements after shuffle : \n";
    printArray(arr, length);
}