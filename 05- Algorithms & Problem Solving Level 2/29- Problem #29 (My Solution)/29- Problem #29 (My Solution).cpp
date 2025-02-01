#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& length) {
    cout << "Please enter the array number of elements to fill : ";
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

bool isPrimeNumber(int number) {
    int M = round(number / 2);
    for (int i = 2; i <= M; i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

void copyPrimeNumbers(int arrSource[100], int arrDestination[100], int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (isPrimeNumber(arrSource[i])) {
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arrSource[100] = {}, arrDestination[100] = {}, length = 0;
    
    fillArrayWithRandomNumbers(arrSource, length);

    cout << "\nArray 1 elements : \n";
    printArray(arrSource, length);

    cout << "\nPrime Numbers in Array 2 :\n";
    copyPrimeNumbers(arrSource, arrDestination, length);
    printArray(arrDestination, length);
}