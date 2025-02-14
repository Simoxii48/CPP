#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            arr[i][j] = randomNumber(1, 10);
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

int sumMatrixNumbers(int arr[3][3], short rows, short cols) {
    int sum = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};

    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 :\n";
    printMatrix(arr, 3, 3);

    cout << "\nSum of matrix 1 is : " << sumMatrixNumbers(arr, 3, 3) << endl;
}