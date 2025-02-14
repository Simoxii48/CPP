#include <iostream>
#include <iomanip>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = randomNumber(1, 100);
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

int sumCol(int arr[3][3], short rows, short colNumber) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][colNumber];
    }
    return sum;
}

void fillSumColInArray(int arr[3][3], int sumColArr[3], short rows, short cols) {
    for (int j = 0; j < cols; j++) {
        sumColArr[j] = sumCol(arr, rows, j);
    }
}

void printSumColArray(int arr[3], short cols) {
    cout << "\nThe following are the sum of each col in the matrix :\n";
    for (int i = 0; i < cols; i++) {
        cout << " Col " << i + 1 << " sum = " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    int sumColArr[3] = {};

    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "The following is a 3x3 random matrix :\n";
    printMatrix(arr, 3, 3);

    fillSumColInArray(arr, sumColArr, 3, 3);
    printSumColArray(sumColArr, 3);
}