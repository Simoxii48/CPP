#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNmbers(int arr[3][3], short rows, short cols) {
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

int rowSum(int arr[3][3], short rowNumber, short cols) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[rowNumber][j];
    }
    return sum;
}

void sumMatrixRowsInArray(int arr[3][3], int arrSum[3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        arrSum[i] = rowSum(arr, i, cols);
    }
}

void printRowsSumArray(int arr[3], short rows) {
    cout << "\nThe following are the sum of each row in the matrix :\n";
    for (int i = 0; i < rows; i++) {
        cout << " Row " << i + 1 << " sum = " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    int arrSum[3] = {};

    cout << arr << endl;
    cout << arr + 1 << endl;

    fillMatrixWithRandomNmbers(arr, 3, 3);
    cout << "The following is a random 3x3 matrix :\n";
    printMatrix(arr, 3, 3);
    
    system("pause>0");

    sumMatrixRowsInArray(arr, arrSum, 3, 3);

    printRowsSumArray(arrSum, 3);
    system("pause>0");
}