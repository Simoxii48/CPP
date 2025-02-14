#include <iostream>
#include <string>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = randomNumber(1, 10);
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%0*d        ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

void multiply2D_Arrays(int arr1[3][3], int arr2[3][3],int arrRes[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arrRes[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3] = {}, arr2[3][3] = {}, arrRes[3][3] = {};

    fillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "Matrix 1:\n";
    printMatrix(arr1, 3, 3);

    fillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix 2:\n";
    printMatrix(arr2, 3, 3);

    multiply2D_Arrays(arr1, arr2, arrRes, 3, 3);

    cout << "\nResults:\n";
    printMatrix(arrRes, 3, 3);
}