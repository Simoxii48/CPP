#include <iostream>
#include <string>
#include <vector>
using namespace std;

string join(vector<string>& vWords, string delim) {
    string fullString = "";

    for (string& word : vWords) {
        if (word != vWords.back())
            fullString += word + delim;
        else
            fullString += word;
    }
    return fullString;
}

int main()
{
    vector<string> vWords = { "Mohammed","Fadi","Ali","Maher" };
    string fullWord = join(vWords, ",");

    cout << "Vector after join :\n";
    cout << fullWord << endl;
}