#include <iostream>
using namespace std;

// Mentor Solution

enum enNumberType { Odd = 1, Even = 2 };

int readNumber() {
    int number = 0;
    cout << "Please enter your number : ";
    cin >> number;
    return number;
}

enNumberType checkNumberType(int num) {
    if (num % 2 == 0) {
        return enNumberType::Even;
    }
    else {
        return enNumberType::Odd;
    }
}

void printNumberType(enNumberType numberType) {
    if (numberType == enNumberType::Even) {
        cout << "Number is Even" << endl;
    }
    else {
        cout << "Number is Odd" << endl;
    }
}

int main()
{
    printNumberType(checkNumberType(readNumber()));
}