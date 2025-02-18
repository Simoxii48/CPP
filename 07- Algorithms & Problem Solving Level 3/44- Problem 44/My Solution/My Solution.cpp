#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> splitString(string s, string delim)
{
    vector<string> vWords = {};
    short pos = 0;
    string word = "";

    while ((pos = s.find(delim)) != string::npos)
    {
        word = s.substr(0, pos);
        if (word != "")
        {
            vWords.push_back(word);
        }
        s.erase(0, pos + delim.length());
    }
    
    if (s != "")
    {
        vWords.push_back(s);
    }

    return vWords;
}

bool isPunctuationMark(char isPMark)
{
    return (isPMark > 32 && isPMark < 63);
}

string joinString(vector<string> vWords, string delim)
{
    string fullString = "";

    for (string& s : vWords) {
        fullString += s + delim;
    }
    fullString.substr(0, fullString.length() - delim.length());

    return fullString;
}

string removePunctuationMarksFromString(string s)
{
    vector<string> vWords = splitString(s, " ");
    
    for (string& s : vWords)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isPunctuationMark(s[i]))
                s[i] = NULL;
        }
    }
    return joinString(vWords, " ");
}

int main()
{
    string s = "Welcome to Jordan, Jordan is a nice country; it's amazing.";

    cout << "Original String :\n" << s << endl;

    cout << "\nPuntuations Removed :\n" <<
        removePunctuationMarksFromString(s) << endl;
}