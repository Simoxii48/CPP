#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;
    cout << "Please enter a number : ";
    cin >> number;
    return number;
}

void addArrayElements(int number, int arr[100], int& length) {
    length++;
    arr[length - 1] = number;
}

void inpurUserNumbersInArray(int arr[100], int& length) {
    bool addMore = true;
    do {
        addArrayElements(readNumber(), arr, length);

        cout << "\nDo you want to add more numbers ([0]:No,[1]:Yes : )";
        cin >> addMore;
    } while (addMore);
}

void printArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100] = {}, length = 0;
    inpurUserNumbersInArray(arr, length);

    cout << "\nArray length : " << length << endl;
    cout << "Array elements : ";
    printArray(arr, length);
}