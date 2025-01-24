#include <iostream>
using namespace std;

int readNumber(int& number) {
    cout << "Please enter your number : ";
    cin >> number;
    return number;
}

int factorialOfN(int number) {
    int sum = 1;
    for (int i = number; i >= 1; i--) {
        sum *= i;
    }
    return sum;
}

void printFactorial(int sum) {
    cout << sum << endl;
}

int main()
{
    int number;

    printFactorial(factorialOfN(readNumber(number)));

    return 0;
}