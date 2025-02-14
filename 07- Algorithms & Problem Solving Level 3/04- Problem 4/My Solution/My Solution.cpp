#include <iostream>
#include <iomanip>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = randomNumber(1, 100);
        }
    }
}

void printMatrix(int matrix[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(3) << matrix[i][j] << "    ";
        }
        cout << endl;
    }
}

int sumCols(int matrix[3][3], short rows, short colNumber) {
    int sum = 0;
    
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][colNumber];
    }
    return sum;
}

void printSumCols(int matrix[3][3], short rows, short cols) {
    for (int j = 0; j < cols; j++) {
        cout << " Col " << j + 1 << " sum = " << sumCols(matrix, rows, j) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int matrix[3][3] = {};
    fillMatrixWithRandomNumbers(matrix, 3, 3);
    cout << "The following is a 3x3 random matrix :\n";
    printMatrix(matrix, 3, 3);

    cout << "\nThe following are the sum of each col in the matrix :\n";
    printSumCols(matrix, 3, 3);
}