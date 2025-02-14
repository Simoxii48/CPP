#include <iostream>
using namespace std;

void fillMatrixWithOrderedNumbers(int arr[3][3], short rows, short cols) {
    short counter = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            counter++;
            arr[i][j] = counter;
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << arr[i][j] << "        ";
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