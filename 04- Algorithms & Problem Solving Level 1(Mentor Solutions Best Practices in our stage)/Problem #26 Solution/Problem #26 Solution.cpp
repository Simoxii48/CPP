#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;

    cout << "Please enter a number : ";
    cin >> number;

    return number;
}

void printRangeFrom1ToN_UsingWhile(int n) {
    int counter = 0;

    cout << "Range printed using while statement : \n";
    while (counter < n) {
        counter++;
        cout << counter << endl;
    }
}

void printRangeFrom1ToN_UsingDoWhile(int n) {
    int counter = 0;

    cout << "Range printed using do while statement : \n";
    do {
        counter++;
        cout << counter << endl;
    } while (counter < n);
}

void printRangeFrom1ToN_UsingFor(int n) {
    cout << "Range printed using for statement : \n";

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

int main()
{
    int n = readNumber();

    printRangeFrom1ToN_UsingWhile(n);
    printRangeFrom1ToN_UsingDoWhile(n);
    printRangeFrom1ToN_UsingFor(n);
}