#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = randomNumber(0, 1);
        }
    }
}

void printMatrix(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "      ";
        }
        cout << endl;
    }
}

// i&j = 0 / i&j  = 1 / i&j = 2 the rest iterations must be 0
bool isMatrixIdentity(int arr[3][3], short rows, short cols) {
    int matrixIdentityExemple[3][3] = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != matrixIdentityExemple[i][j])
                return 0;
        }
    }
    return 1;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};

    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 :\n";
    printMatrix(arr, 3, 3);

    if (isMatrixIdentity(arr, 3, 3))
        cout << "\nYes: Matrix is identity.\n";
    else
        cout << "\nNo: Matrix is NOT identity.\n";

}