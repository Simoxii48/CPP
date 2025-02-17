#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

void reverseString(string s) {
    string word = "";
    string delim = " ";
    
    for (int i = s.length() - 1; i >= 0; i--) 
    {
        if (s.find(delim) != string::npos) 
        {
            if (s[i] != ' ') {
                word = s.substr(i, s.length());
            }
            else {
                cout << word << delim;
                s.erase(i, s.length());
            }
        }
        else
            break;
    }
    
    if (s != "") 
    {
        cout << s;
    }
}

int main()
{
    string s = readString();

    cout << "\nString after reversing words :\n";
    reverseString(s);
}