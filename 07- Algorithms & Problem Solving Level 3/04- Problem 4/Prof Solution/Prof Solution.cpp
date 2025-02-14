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
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }
}

int colSum(int arr[3][3], short rows, short colNumber) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][colNumber];
    }
    return sum;
}

void printEachColSum(int arr[3][3], short rows, short cols) {
    cout << "\nThe following are the sum of each col in the matrix :\n";
    
    for (int j = 0; j < cols; j++) {
        cout << " Col " << j + 1 << " sum = " << colSum(arr, rows, j) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    
    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "The following is a random 3x3 matrix :\n";
    printMatrix(arr, 3, 3);

    printEachColSum(arr, 3, 3);
    system("pause>0");
}