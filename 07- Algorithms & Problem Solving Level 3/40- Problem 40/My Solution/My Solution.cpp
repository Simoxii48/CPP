#include <iostream>
#include <string>
#include <vector>
using namespace std;

string joinString(vector<string> vWords, string delim) {
    string s = "";
    
    for (string& word : vWords) 
    {
        if (word != vWords.back())
            s += word + delim;
        else
            s += word;
    }
    return s;
}

string joinString(string word[], int length, string delim) {
    string s = "";

    for (int i = 0; i < length; i++) 
    {
        s += word[i] + delim;
    }
    return s.substr(0, s.length() - delim.length());
}

int main()
{
    vector<string> vWords = { "Mohammed","Fadi","Ali","Maher" };
    string arrWords[4] = { "Mohammed","Fadi","Ali","Maher" };

    cout << "\nVector after join : \n";
    cout << joinString(vWords, " ") << endl;

    cout << "\nArray after join :\n";
    cout << joinString(arrWords, 4, " ") << endl;
}