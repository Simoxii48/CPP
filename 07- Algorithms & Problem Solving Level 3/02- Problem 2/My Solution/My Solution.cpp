#include <iostream>
#include <iomanip>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = randomNumber(1, 100);
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(1) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void sumRowsMatrix(int arr[3][3], short rows, short cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << sum << endl;
        sum = 0;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "The following is a 3x3 random matrix:\n";

    printMatrix(arr, 3, 3);

    cout << "\nThe following are the sum of each row in the matrix :\n";
    sumRowsMatrix(arr, 3, 3);
}