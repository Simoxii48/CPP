#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumber(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            arr[i][j] = randomNumber(0, 1);
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << arr[i][j] << "      ";
        }
        cout << endl;
    }
}

int sumMatrixNumber(int arr[3][3],short numberToSearch, short rows, short cols) {
    int zeroCount = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (arr[i][j] == numberToSearch)
                zeroCount++;
        }
    }
    return zeroCount;
}

bool isSparceMatrix(int zeroCount) {
    int halfMatrixNumbers = (3 * 3) / 2;
    return zeroCount > halfMatrixNumbers;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    int number = 0;

    fillMatrixWithRandomNumber(arr, 3, 3);
    cout << "Matrix 1 :\n";
    printMatrix(arr, 3, 3);

    if (isSparceMatrix(sumMatrixNumber(arr, number, 3, 3)))
        cout << "\nYes: It is Sparse.\n";
    else
        cout << "\nNo: It's NOT Sparse.\n";
}