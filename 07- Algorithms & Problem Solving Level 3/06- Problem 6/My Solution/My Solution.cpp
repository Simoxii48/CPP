#include <iostream>
#include <iomanip>
using namespace std;

void fillMatrixWithOrderedNumbers(int arr[3][3], short rows, short cols) {
    int counter = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = counter;
            counter++;
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(1) << arr[i][j] << "       ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {};

    fillMatrixWithOrderedNumbers(arr, 3, 3);
    cout << "The following is a 3x3 ordered matrix :\n";
    printMatrix(arr, 3, 3);
}