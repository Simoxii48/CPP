#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;

    cout << "Please enter a number : ";
    cin >> number;

    return number;
}

void printRangeFromNto1_UsingWhile(int n) {
    int counter = n + 1;
    cout << "Range printed using while statement : \n";

    while (counter > 1) {
        counter--;
        cout << counter << endl;
    }
}

void printRangeFromNto1_UsingDoWhile(int n) {
    int counter = n + 1;
    cout << "Range printed using do while statement : \n";

    do {
        counter--;
        cout << counter << endl;
    } while (counter > 1);

}

void printRangeFromNto1_UsingFor(int n) {
    cout << "Range printed using for statement : \n";
    for (int i = n; i >= 1; i--) {
        cout << i << endl;
    }
}

int main()
{
    int n = readNumber();
    printRangeFromNto1_UsingWhile(n);
    printRangeFromNto1_UsingDoWhile(n);
    printRangeFromNto1_UsingFor(n);
}