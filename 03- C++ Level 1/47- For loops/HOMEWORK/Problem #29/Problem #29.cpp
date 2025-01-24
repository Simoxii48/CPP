#include <iostream>
using namespace std;

int readNumber(int& number) {
    cout << "Please enter your number : ";
    cin >> number;
    return number;
}

int sumEvenNumbersFrom1ToN(int number) {
    int sum = 0;
    for (int i = 0; i <= number; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

void printSumEvenNumbers(int sum) {
    cout << sum << endl;
}

int main()
{
    int number;

    printSumEvenNumbers(sumEvenNumbersFrom1ToN(readNumber(number)));

    return 0;
}