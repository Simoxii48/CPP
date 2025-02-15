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

void swapNumbers(int& num1, int& num2) {
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int minNumberInMatrix(int arr[3][3], short rows, short cols) {
	int num = arr[0][0];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] < num)
				swapNumbers(num, arr[i][j]);
		}
	}
	return num;
}

int maxNumberInMatrix(int arr[3][3], short rows, short cols) {
	int num = arr[0][0];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] > num)
				swapNumbers(num, arr[i][j]);
		}
	}
	return num;
}

int main()
{
	int arr[3][3] = { {77,50,12},{22,20,10},{14,3,90} };

	cout << "Matrix 1 :\n";
	printMatrix(arr, 3, 3);

	cout << "\nMinimum Number is : " << minNumberInMatrix(arr, 3, 3) << endl;

	cout << "\Maximum Number is : " << maxNumberInMatrix(arr, 3, 3) << endl;
}