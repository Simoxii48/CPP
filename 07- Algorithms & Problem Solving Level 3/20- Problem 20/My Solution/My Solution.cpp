#include <iostream>
using namespace std;

void printMatrix(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "      ";
        }
        cout << endl;
    }
}

bool isPalindromeMatrix(int arr[3][3], short rows, short cols) {
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[j][i] != arr[j][2])
                return false;
        }
        return true;
    }
}

int main()
{
    int matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} },
        matrix2[3][3] = { {1,2,1},{5,5,5},{7,3,8} };

    cout << "Matrix 1 :\n";
    printMatrix(matrix1, 3, 3);

    cout << "\nMatrix 2 :\n";
    printMatrix(matrix2, 3, 3);

    if (isPalindromeMatrix(matrix1, 3, 3))
        cout << "\nYes: Matrix is Palindrome.\n";
    else
        cout << "\nNo: Matrix is NOT Palindrome.\n";

    if (isPalindromeMatrix(matrix2, 3, 3))
        cout << "\nYes: Matrix is Palindrome.\n";
    else
        cout << "\nNo: Matrix is NOT Palindrome.\n";
}