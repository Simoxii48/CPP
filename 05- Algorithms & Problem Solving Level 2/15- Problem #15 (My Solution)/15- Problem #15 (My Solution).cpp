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
    for (int i = 65; i <= number - 1 + 65; i++) {
        for (int j = 65; j <= i; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    printLetterPattern(readPositiveNumber("Please enter a positive number : "));
}