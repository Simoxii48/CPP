#include <iostream>
using namespace std;



int main()
{
    int arrTable[10][10] = {0,0};

    // acceding the 2 dimensions and assigning the value of (i+1) * (j+1)
    
    // My Solution

    // filling the 2D array
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arrTable[i][j] = (i + 1) * (j + 1);
        }
    }

    // printing the 2D array
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%0*d ", 2, arrTable[i][j]);
        }
        cout << endl;
    }

    cout << "\n\n------------------------------\n\n";

    // Prof Solution
    int x[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            x[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%0*d ", 2, x[i][j]);
        }
        cout << endl;
    }

    return 0;
}