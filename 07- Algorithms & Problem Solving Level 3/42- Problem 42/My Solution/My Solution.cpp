#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> splitString(string s, string delim)
{
    vector<string> vWords = {};
    string word = "";
    short pos = 0;

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

string replaceWordInString(string s, string replacement, string toBeReplaced)
{
    vector<string> vWords = splitString(s, " ");
    string replacedString = "";

    for (string& word : vWords)
    {
        
        if (word == replacement)
        {
            replacedString += toBeReplaced + " ";
        }
        else {
            replacedString += word + " ";
        }
    }
    replacedString.erase(replacedString.length() - 1, replacedString.length());

    return replacedString;
}

int main()
{
    string s1 = "Welcome to Jordan , Jordan is a nice country";
    string s2 = replaceWordInString(s1, "Jordan", "USA");

    cout << "Original String :\n";
    cout << s1 << endl;

    cout << "\nString After Replace :\n";
    cout << s2 << endl;
}