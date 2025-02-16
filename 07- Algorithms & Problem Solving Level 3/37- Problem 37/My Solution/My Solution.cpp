#include <iostream>
#include <string>
#include <vector>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

vector<string> splitStringWords(string s) {
    vector<string> vWordsInString = {};
    string delim = " ", tokken = "";
    short pos = 0;

    while ((pos = s.find(delim)) != string::npos)
    {
        tokken = s.substr(0, pos);
        if (tokken != "")
        {
            vWordsInString.push_back(tokken);
        }
        s.erase(0, pos + delim.length());
    }

    if (s != "")
    {
        vWordsInString.push_back(s);
    }

    return vWordsInString;
}

void printVectorWords(vector<string>& words) {
    cout << "\Tokkens = " << words.size() << endl;
    
    for (string& word : words) {
        cout << word << endl;
    }
}

int main()
{
    string s = readString();

    vector<string> vWordsInString = splitStringWords(s);

    printVectorWords(vWordsInString);
}