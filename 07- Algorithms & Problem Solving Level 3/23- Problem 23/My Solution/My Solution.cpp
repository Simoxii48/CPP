#include <iostream>
#include <string>
using namespace std;

string readString() {
    string phrase = "";
    cout << "Please enter your string : ";
    getline(cin, phrase);
    return phrase;
}

void printFirstLetterWordInString(string phrase) {
    cout << phrase[0] << endl;

    for (int i = 0; i < phrase.length(); i++) {
        if (phrase[i] == char(32))
            cout << phrase[i + 1] << endl;
    }
}

int main()
{
    printFirstLetterWordInString(readString());
}