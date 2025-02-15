#include <iostream>
using namespace std;

void printMatrix(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			cout << arr[i][j] << "		";
		}
		cout << endl;
	}
}

bool isNumberExistInMatrix(int matrix[3][3],int number, short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			if (matrix[i][j] == number)
				return true;
		}
	}
	return false;
}

void printResults(int matrix1[3][3],int matrix2[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			if (isNumberExistInMatrix(matrix2, matrix1[i][j], 3, 3))
				cout << matrix1[i][j] << "    ";
		}
	}
}

int main()
{
	int matrix1[3][3] = {
		{77,5,12},
		{22,20,1},
		{1,0,9}
	},
		matrix2[3][3] = {
		{5,80,90},
		{22,77,1},
		{10,8,33}
	};

	cout << "Matrix 1 :\n";
	printMatrix(matrix1, 3, 3);

	cout << "\nMatrix 2 :\n";
	printMatrix(matrix2, 3, 3);

	cout << "\n\nIntersected Numbers are :\n";
	printResults(matrix1, matrix2, 3, 3);
}