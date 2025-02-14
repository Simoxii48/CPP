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

int rowSum(int arr[3][3], short rowNumber, short cols) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[rowNumber][j];
    }
    return sum;
}

void printEachRowSum(int arr[3][3], short rows, short cols) {
    cout << "\nThe following are the sum of each row in the matrix :\n";
    for (int i = 0; i < rows; i++) {
        cout << "Row " << i + 1 << " sum = " << rowSum(arr, i, cols) << endl;
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    fillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    printMatrix(arr, 3, 3);

    printEachRowSum(arr, 3, 3);
    system("pause>0");

    return 0;
}