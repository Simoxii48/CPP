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

bool checkIsEqual(int sum1, int sum2) {
    return (sum1 == sum2);
}

void printResult(bool result) {
    result ? printf("\nYes: matrices are equal.\n") : printf("\nNo: matrices are NOT equal.\n");
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {}, arr2[3][3] = {};

    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 :\n";
    printMatrix(arr, 3, 3);

    fillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix 2 :\n";
    printMatrix(arr2, 3, 3);

    int
        sumMatrix1 = sumMatrixNumbers(arr, 3, 3),
        sumMatrix2 = sumMatrixNumbers(arr2, 3, 3);

    printResult(checkIsEqual(sumMatrix1, sumMatrix2));
}