#include <iostream>
#include <string>
using namespace std;

char readChar() {
    char c = ' ';
    cout << "Please enter a Character : ";
    cin >> c;
    return c;
}

void invertCharacter(char& c) {
    if (islower(c))
        c = toupper(c);
    else
        c = tolower(c);
}

int main()
{
    char c = readChar();

    invertCharacter(c);
    cout << "\nChar after inverting case : " << c;
}