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

bool isMatricesTypical(int matrix1[3][3], int matrix2[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			if (matrix1[i][j] != matrix2[i][j])
				return 0;
		}
	}
	return 1;
}

int main() {
	srand((unsigned)time(NULL));

	int matrix1[3][3] = {}, matrix2[3][3] = {};

	fillMatrixWithRandomNumbers(matrix1, 3, 3);
	cout << "Matrix 1 :\n";
	printMatrix(matrix1, 3, 3);

	fillMatrixWithRandomNumbers(matrix2, 3, 3);
	cout << "\nMatrix 2 :\n";
	printMatrix(matrix2, 3, 3);

	if (isMatricesTypical(matrix1, matrix2, 3, 3))
		cout << "\nYes: matrices are typical.";
	else
		cout << "\nNo: matrices are NOT typical.";

}