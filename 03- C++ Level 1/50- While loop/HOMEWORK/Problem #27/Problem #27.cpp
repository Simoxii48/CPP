#include <iostream>
using namespace std;

int readNumberN(int& N) {
    cout << "Please enter your number N : ";
    cin >> N;
    return N;
}

void printNumbersFromNTo1(int N) {

    while (N >= 1) {
        cout << N << endl;
        N--;
    }
}

int main()
{
    int N;

    printNumbersFromNTo1(readNumberN(N));
}