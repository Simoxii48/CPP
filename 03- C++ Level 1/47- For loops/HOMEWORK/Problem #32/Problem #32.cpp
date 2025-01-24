#include <iostream>
using namespace std;

void readNumberAndPower(int& number, int& M) {
    cout << "Please enter your number : ";
    cin >> number;

    cout << "Please enter your power M : ";
    cin >> M;
}

int calculateNumberPowerM(int number, int M) {
    int sum = 1;
    for (int i = 1; i <= M; i++) {
        sum *= number;
    }
    return sum;
}

void printNumberPowerM(int sum) {
    cout << sum << endl;
}

int main()
{
    int number, M;
    readNumberAndPower(number, M);

    printNumberPowerM(calculateNumberPowerM(number, M));

    return 0;
}