#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, capitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

char getRandomCharacter(enCharType charType) {
    switch (charType)
    {
    case SmallLetter:
        return char(randomNumber(97, 122));
    case capitalLetter:
        return char(randomNumber(65, 90));
    case SpecialCharacter:
        return char(randomNumber(33, 47));
    case Digit:
        return char(randomNumber(48, 57));
    }
}

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

string generateWord(enCharType charType, short length) {
    string word = "";
    for (int i = 1; i <= length; i++) {
        word += getRandomCharacter(charType);
    }
    return word;
}

string generateKey() {
    string key = "";
    
    key = generateWord(enCharType::capitalLetter, 4) + "-";
    key += generateWord(enCharType::capitalLetter, 4) + "-";
    key += generateWord(enCharType::capitalLetter, 4) + "-";
    key += generateWord(enCharType::capitalLetter, 4);

    return key;
}

void generateKeys(short numberOfKeys) {
    for (int i = 1; i <= numberOfKeys; i++) {
        cout << "Key [" << i << "] : ";
        cout << generateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    generateKeys(readPositiveNumber("Please enter how many keys to generate : "));
}