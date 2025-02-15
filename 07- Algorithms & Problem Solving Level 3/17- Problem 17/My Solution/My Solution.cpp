#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			arr[i][j] = randomNumber(0, 100);
		}
	}
}

void printMatrix(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			cout << arr[i][j] << "		";
		}
		cout << endl;
	}
}

short readNumber() {
	short number = 0;
	cout << "Please enter the number to look for in matrix : ";
	cin >> number;
	return number;
}

bool isNumberExistInMatrix(int arr[3][3], short number, short rows, short cols) {
	for (short i = 0; i < rows; i++) {
		for (short j = 0; j < cols; j++) {
			if (arr[i][j] == number)
				return true;
		}
	}
	return false;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] = {};

	fillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "Matrix 1 :\n";
	printMatrix(arr, 3, 3);

	int number = readNumber();

	if (isNumberExistInMatrix(arr, number, 3, 3))
		cout << "\nYes it is there.\n";
	else
		cout << "\nNo it is NOT there.\n";
}