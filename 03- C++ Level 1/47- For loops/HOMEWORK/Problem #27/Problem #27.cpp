#include <iostream>
using namespace std;

int readNumber(int& number) {
    cout << "Please enter your number : ";
    cin >> number;
    return number;
}

void printNumbersFromNTo1(int number) {
    for (int i = number; i >= 1; i--) {
        cout << i << endl;
    }
}

int main()
{
    int number;

    printNumbersFromNTo1(readNumber(number));

    return 0;
}