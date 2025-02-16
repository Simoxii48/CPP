#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

char readCharToSearch() {
    char c = ' ';
    cout << "Please enter a character : ";
    cin >> c;
    return c;
}

int countCharacterInString(string s, char c) {
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c)
            count++;
    }

    return count;
}

int main()
{
    string s = readString();
    char c = readCharToSearch();

    int charCount = countCharacterInString(s, c);

    cout << "\nLetter '" << c << "' Count = " << charCount << endl;
}