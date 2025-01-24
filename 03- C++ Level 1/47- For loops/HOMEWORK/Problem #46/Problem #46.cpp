#include <iostream>
using namespace std;


void printLettersFromAToZCapitals() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << endl;
    }
}


void printLettersFromAToZSmall() {
    for (int i = 97; i <= 122; i++) {
        cout << char(i) << endl;
    }
}

int main()
{
    // print letters capital
    printLettersFromAToZCapitals();
    cout << endl << "************************************\n" << endl;
    // print letters small
    printLettersFromAToZSmall();
}