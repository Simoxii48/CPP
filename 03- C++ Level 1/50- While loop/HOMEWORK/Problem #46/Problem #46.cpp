#include <iostream>
using namespace std;

void printLettersFromAToZ() {
    int letter = 65;
    while (letter <= 90) {
        cout << char(letter) << endl;
        letter++;
    }
}

int main()
{
    printLettersFromAToZ();
}