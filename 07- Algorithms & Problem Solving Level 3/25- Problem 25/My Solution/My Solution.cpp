#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string readString() {
    string s1 = "";
    cout << "Please enter your string : ";
    getline(cin, s1);
    return s1;
}

void lowerCaseFirstLetterInWordInString(string& s1) {
    bool isFirstLetter = true;

    for (int i = 0; i < s1.length(); i++) {

        if (s1[i] != ' ' && isFirstLetter) {
            s1[i] = tolower(s1[i]);
        }

        isFirstLetter = (s1[i] == ' ' ? true : false);
    }
}

int main()
{
    string s1 = readString();

    cout << "\nString after conversion :\n";
    lowerCaseFirstLetterInWordInString(s1);

    cout << s1 << endl;
}