#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

bool isVowel(char letter) {
    letter = tolower(letter);
    return ((letter == 'a') || (letter == 'e') || (letter == 'i') ||
        (letter == 'o') || (letter == 'u'));
}

void printVowelsInString(string s) {
    cout << "Vowels in string are : ";

    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i]))
            cout << s[i] << "   ";
    }
}

int main()
{
    string s = readString();

    printVowelsInString(s);
}