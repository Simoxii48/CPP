#include <iostream>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrixArr[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixArr[i][j] = randomNumber(1, 100);
        }
    }

    cout << "The following is a 3x3 random matrix :\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrixArr[i][j] << "\t";
        }
        cout << endl;
    }
}