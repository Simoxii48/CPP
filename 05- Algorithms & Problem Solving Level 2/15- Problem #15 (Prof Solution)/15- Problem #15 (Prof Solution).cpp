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

void printLetterPattern(int number) {
    for (int i = 65; i <= 65 + number - 1; i++) {
        for (int j = 1; j <= i - 65 + 1; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    printLetterPattern(readPositiveNumber("Please enter a positive number : "));
}