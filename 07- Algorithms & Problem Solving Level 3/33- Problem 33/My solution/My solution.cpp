#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s = "";
    cout << "Please enter your string : ";
    getline(cin, s);
    return s;
}

bool checkIsVowel(char letter) {
    letter = tolower(letter);
    return ((letter == 'a') || (letter == 'e') || (letter == 'i') ||
        (letter == 'o') || (letter == 'u'));
}

short countVowelsInString(string s) {
    short counter = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (checkIsVowel(s[i]))
            counter++;
    }

    return counter;
}

int main()
{
    string s = readString();

    cout << "\nNumber of vowels is : " << countVowelsInString(s) << endl;
}