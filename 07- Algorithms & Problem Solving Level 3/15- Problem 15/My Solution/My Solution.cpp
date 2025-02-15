#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumber(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = randomNumber(1, 20);
		}
	}
}

void printMatrix(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "	";
		}
		cout << endl;
	}
}

short readNumber() {
	short number = 0;
	
	cout << "\nEnter the number to count in matrix : ";
	cin >> number;
	
	return number;
}

int countNumberInMatrix(int arr[3][3], short numberToSearch, short rows, short cols) {
	int counter = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] == numberToSearch)
				counter++;
		}
	}
	return counter;
}

void printResult(int arr[3][3], short rows, short cols) {
	int numberToSearch = readNumber();
	cout << "\nNumber " << numberToSearch << " count in matrix is " << 
		countNumberInMatrix(arr, numberToSearch, rows, cols) << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] = {};
	
	fillMatrixWithRandomNumber(arr, 3, 3);
	cout << "Matrix 1 :\n";
	printMatrix(arr, 3, 3);

	printResult(arr, 3, 3);
}