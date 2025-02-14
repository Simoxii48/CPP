#include <iostream>
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
            printf("%0*d    ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

void printMiddleRow(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        printf("%0*d    ", 2, arr[1][i]);
    }
}

void printMiddleCol(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        printf("%0*d    ", 2, arr[i][1]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};

    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 :\n";
    printMatrix(arr, 3, 3);

    cout << "\n\nMiddle row of matrix 1 is :\n";
    printMiddleRow(arr, 3, 3);

    cout << "\n\nMiddle row of matrix 1 is :\n";
    printMiddleCol(arr, 3, 3);
}