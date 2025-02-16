#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

void trimLeft(string& s) {
    string delim = " ";
    string word = "";
    short pos = 0;

    while ((pos = s.find(delim)) != string::npos)
    {
        word = s.substr(0, pos);
        if (pos)
        {
            break;
        }
        s.erase(0, pos + delim.length());
    }

}

int main()
{
    string s = "        Mohamed Abu-Hadhoud        ";

    cout << s << endl;

    trimLeft(s);
    cout << s << endl;

}