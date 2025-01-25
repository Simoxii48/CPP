#include <iostream>
using namespace std;

int readNumberN(int& N) {
    cout << "Please enter N : ";
    cin >> N;
    return N;
}

int sumOddNumbersFrom1ToN(int N) {
    int sum = 0, i = 1;
    while (i <= N) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    return sum;
}

void printSumOddNumbersFrom1ToN(int sumOdds) {
    cout << sumOdds << endl;
}

int main()
{
    int N;

    printSumOddNumbersFrom1ToN(sumOddNumbersFrom1ToN(readNumberN(N)));
}