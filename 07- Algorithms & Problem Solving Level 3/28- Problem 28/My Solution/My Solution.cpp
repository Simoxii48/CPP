#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

char invertCharCase(char c) {
    return isupper(c) ? tolower(c) : toupper(c);
}

void invertStringCases(string& s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = invertCharCase(s[i]);
    }
}

int main()
{
    string s = readString();
    
    cout << "\nString after inverting all letters case :\n";
    invertStringCases(s);

    cout << s << endl;
}