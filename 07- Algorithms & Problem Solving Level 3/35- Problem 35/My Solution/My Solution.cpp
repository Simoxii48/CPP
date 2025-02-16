#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

void printEachWordInString(string s) {
    cout << endl;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ')
            cout << s[i];
        
        if (s[i] == ' ')
            cout << endl;
    }
}

int main()
{
    string s = readString();

    printEachWordInString(s);
}