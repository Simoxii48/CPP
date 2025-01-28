#include <iostream>
using namespace std;

void printHeader() {
    cout << "\t\t\tMultiplication Table from 1 to 10\n\n";
    for (int i = 1; i <= 10; i++) {
        cout << "\t" << i;
    }
    cout << endl << 
        "-----------------------------------------------------------------------------------\n";
}

void printTable() {
    printHeader();

    for (int i = 1; i <= 10; i++) {
        if (i >= 10)
            cout << i << "  |";
        else
            cout << i << "   |";
        for (int j = 1; j <= 10; j++) {
            cout <<"\t" << i * j ;
        }
        cout << endl;
    }
}

int main()
{
    printTable();
}