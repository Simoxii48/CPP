#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

int countWordsInString(string s) {
    string delim = " ", word = "";
    short pos = 0, counter = 0;

    while ((pos = s.find(delim)) != string::npos) 
    {
        word = s.substr(0, pos);
        if (word != "")
        {
            counter++;
        }
        s.erase(0, pos + delim.length());
    }
    if (s != "")
    {
        counter++;
    }

    return counter;
}

int main()
{
    string s = readString();

    cout << "\n The number of words in your string is : " <<
        countWordsInString(s) << endl;
}