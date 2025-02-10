#include <iostream>
using namespace std;

// My Solution

void printFromM_DownToN(int N, int M) {
    
    if (M >= N) {
        cout << M << endl;
        printFromM_DownToN(N, M - 1);
    }
}

void powerN_P(int N, int P) {
    int power = 1;
    if (P == 0) {
        cout << N;
    }

    if (N <= P) {
        powerN_P(N + 1, P);
        power = N * N;
    }
    cout << power << endl;
}

// Prof Solution

void printNumbersFromMToN(int M, int N) {
    if (M >= N) {
        cout << M << endl;
        printNumbersFromMToN(M - 1, N);
    }
}

int myPower(int base, int power) {
    if (power == 0)
        return 1;
    else
        return (base * myPower(base, power - 1));
}

int main()
{
    printFromM_DownToN(1, 10);
    cout << endl;
    powerN_P(2, 4);

    cout << endl << endl;

    printNumbersFromMToN(10, 1);
    cout << endl;
    cout << myPower(2, 4);

}