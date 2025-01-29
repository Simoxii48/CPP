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

void printInvertedLetterPattern(int number) {
    for (int i = number + 64; i >= 65; i--) {
        for (int j = i; j >= 65; j--) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    printInvertedLetterPattern(readPositiveNumber("Please enter a positive number : "));
}