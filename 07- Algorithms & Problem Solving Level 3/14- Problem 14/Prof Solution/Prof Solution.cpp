#include <iostream>
using namespace std;

void printMatrix(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "		";
		}
		cout << endl;
	}
}

bool isScalarMatrix(int arr[3][3], short rows, short cols) {
	int firstDiagElement = arr[0][0];
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			
			// check diagonal equality
			if (i == j && arr[i][j] != firstDiagElement) {
				return false;
			}
			
			// check the rest elements
			else if (i != j && arr[i][j] != 0) {
				return false;
			}
		}
	}

	return true;
}

int main()
{
	int scalarMatrix[3][3] = {
		{10,0,0},
		{0,10,0},
		{0,0,10}
	};
	int notScalarMatrix[3][3] = {
		{2,0,2},
		{0,2,0},
		{2,0,2}
	};

	cout << "Matrix 1 :\n";
	printMatrix(scalarMatrix, 3, 3);

	if (isScalarMatrix(scalarMatrix, 3, 3))
		cout << "\nYes: Matrix is scalar.\n";
	else
		cout << "\nNo: Matrix is NOT scalar.\n";


	cout << "\nMatrix 2 :\n";
	printMatrix(notScalarMatrix, 3, 3);

	if (isScalarMatrix(notScalarMatrix, 3, 3))
		cout << "\nYes: Matrix is scalar.\n";
	else
		cout << "\nNo: Matrix is NOT scalar.\n";
}