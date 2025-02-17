#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> splitWords(string s, string delim)
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

string replaceWithMatchCase(string s, string replace, string toReplaceTo)
{
    vector<string> vWords = splitWords(s, " ");
    string matchCase = "";

    for (string& word : vWords)
    {
        if (word != replace)
        {
            matchCase += word + " ";
        }
        else
        {
            matchCase += toReplaceTo + " ";
        }
    }
    matchCase.erase(matchCase.length() - 1, matchCase.length());

    return matchCase;
}

string toLowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    return s;
}

string toUpperCase(string s)
{
    s[0] = toupper(s[0]);
    return s;
}

string replaceWithoutMatchCase(string s, string replace, string toReplaceTo)
{
    vector<string> vWord = splitWords(s, " ");
    string withoutMatchCase = "";
    
    string replaceToLower = toLowerCase(replace);
    string replaceToUpper = toUpperCase(replace);

    for (string& word : vWord)
    {
        if(word == replaceToLower || word == replaceToUpper)
        {
            withoutMatchCase += toReplaceTo + " ";
        }
        
        else if (word != replace)
        {
            withoutMatchCase += word + " ";
        }
    }
    withoutMatchCase.erase(withoutMatchCase.length() - 1, withoutMatchCase.length());

    return withoutMatchCase;
}

int main()
{
    string s = "Welcome Jordan , Jordan is a nice country also jordan lowercase :)";

    cout << "Original String :\n";
    cout << s << endl;

    cout << "\nReplace with match case :\n";
    cout << replaceWithMatchCase(s, "Jordan", "USA") << endl;

    cout << "\nReplace without match case :\n";
    cout << replaceWithoutMatchCase(s, "jordan", "USA") << endl;

}