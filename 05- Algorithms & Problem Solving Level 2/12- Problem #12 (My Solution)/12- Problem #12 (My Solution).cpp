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

void printInvertedPattern(int number) {
    for (int i = number; i >= 0;i--) {
        for (int j = number; j >= 0; j--) {
            if (i > j)
                cout << i;
        }
        cout << endl;
    }
}

int main()
{
    printInvertedPattern(readPositiveNumber("Please enter a positive number : "));
}