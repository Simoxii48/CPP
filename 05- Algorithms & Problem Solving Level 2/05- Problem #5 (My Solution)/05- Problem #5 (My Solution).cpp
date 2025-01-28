#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

string numberToString(int Number) {
    string arrOfNumbers = "";
    arrOfNumbers = to_string(Number);
    return arrOfNumbers;
}

void printNumberInReverse(int Number) {
    string ArrOfNumber = numberToString(Number);

    for (int i = ArrOfNumber.length() - 1; i >= 0; i--) {
        cout << ArrOfNumber[i] << endl;
    }
}

int main()
{
    printNumberInReverse(readPositiveNumber("Please enter positive number : "));
}