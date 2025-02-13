#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    char x;
    char y;

    x = toupper('a'); // toUpperCase
    y = tolower('A'); // toLowerCase

    cout << "converting a to A :" << x << endl;
    cout << "converting A to a :" << y << endl;

    // digits (A to Z)
    // returns zero if not, and non zero if yes
    cout << "IsUpper('A') " << isupper('A') << endl;

    // lowercase (a to z)
    // returns zero if not, and non zero if yes
    cout << "IsLower('A') " << islower('a') << endl;

    // digits (0 to 9)
    // returns zero if not, and non zero if yes
    cout << "IsDigit('9') " << isdigit('9') << endl;

    // ponctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    // returns zero if not, and non zero if yes
    cout << "IsPunct(';') " << ispunct(';') << endl;
}