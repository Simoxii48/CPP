#include <iostream>
using namespace std;

int readNumberN(int& N) {
    cout << "Please enter N : ";
    cin >> N;
    return N;
}

int sumEvenNumbersFrom1ToN(int N) {
    int sum = 0, i = 1;
    while (i <= N) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    return sum;
}

void printEvenNumbersFrom1ToN(int sumEvens) {
    cout << sumEvens << endl;
}

int main()
{
    int N;

    printEvenNumbersFrom1ToN(sumEvenNumbersFrom1ToN(readNumberN(N)));
}