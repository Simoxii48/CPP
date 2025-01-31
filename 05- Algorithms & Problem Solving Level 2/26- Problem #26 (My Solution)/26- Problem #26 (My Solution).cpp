#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void readArrayelements(int arr[100], int& length) {
    cout << "Please enter the number of elements : ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

void printArrayElements(int arr[100], int length) {
    cout << "\nArray elements : ";

    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int sumArrayElements(int arr[100], int length) {
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    return sum;
}

void printSumElements(int sum) {
    cout << "Sum of all numbers is : " << sum << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0;
    readArrayelements(arr, length);
    printArrayElements(arr, length);

    printSumElements(sumArrayElements(arr, length));
}