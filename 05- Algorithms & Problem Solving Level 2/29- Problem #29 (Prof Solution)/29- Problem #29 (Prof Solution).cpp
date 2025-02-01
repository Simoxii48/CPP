#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimeNotPrime checkPrime(int number) {
    int M = round(number / 2);

    for (int i = 2; i <= M; i++) {
        if (number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void copyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength,int& arr2Length) {
    int counter = 0;
    for (int i = 0; i < arrLength; i++) {
        if (checkPrime(arrSource[i]) == enPrimeNotPrime::Prime) {
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }
    arr2Length = --counter;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100] = {}, arrLength = 0;

    fillArrayWithRandomNumbers(arr, arrLength);
    
    int arr2[100] = {}, arr2Length = 0;
    copyOnlyPrimeNumbers(arr,arr2, arrLength, arr2Length);

    
    cout << "\nArray 1 elements : \n";
    printArray(arr, arrLength);

    cout << "\nPrime Numbers in Array 2 :\n";
    printArray(arr2, arr2Length);
}