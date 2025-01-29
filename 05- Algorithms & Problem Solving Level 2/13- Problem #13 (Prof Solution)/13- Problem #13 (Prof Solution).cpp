#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

void printNumberPattern(int number) {
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    printNumberPattern(readPositiveNumber("Please enter a positive number : "));
}