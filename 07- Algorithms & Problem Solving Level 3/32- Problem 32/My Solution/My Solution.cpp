#include <iostream>
using namespace std;

char readChar() {
    char letter = ' ';
    cout << "Please enter a character : ";
    cin >> letter;
    return letter;
}

bool checkIsVowelLetter(char letter) {
    string vowels = "aeiou";
    
    for (int i = 0; i < vowels.length(); i++) {
        if (tolower(letter) == vowels[i])
            return true;
    }
    return false;
}

int main()
{
    char letter = readChar();

    if (checkIsVowelLetter(letter))
        cout << "\nYes letter '" << letter << "' is a vowel.\n";
    else
        cout << "\nNo letter '" << letter << "' is NOT a vowel.\n";

}