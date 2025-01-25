#include <iostream>
using namespace std;

void printLettersFromAAToZZ() {
    for (int i = 65; i <= 90; i++) {
        cout << "Letter : " << char(i) << endl;
        
        for (int j = 65; j <= 90; j++) {
            cout << char(i) << char(j) << endl;
        }
        
        cout << "---------------------" << endl;
    }
}

void printDescendingTriangle() {
    for (int i = 10; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << "\n";
    }
}

void printDescending1To10() {
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j <<" ";
        }
        cout <<endl;
    }
    cout << "\n";
}

void printAscending1To10() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void printAscendingLettersFromAToF() {
    for (int i = 65; i <= 70; i++) {
        for (int j = 65; j <= i; j++) {
            cout << char(j) << " ";
        }
        cout << "\n";
    }
}

void printLast1To10() {
    for (int i = 1; i <= 10; i++) {
        for (int j = i; j <= 10; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    printLettersFromAAToZZ();

    cout << "\n--------------------------\n";

    printDescendingTriangle();

    cout << "\n--------------------------\n";

    printDescending1To10();

    cout << "\n--------------------------\n";

    printAscending1To10();

    cout << "\n--------------------------\n";

    printAscendingLettersFromAToF();

    cout << "\n--------------------------\n";

    printLast1To10();
}