#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char getRandomCharacter(enCharType charType) {
    switch (charType)
    {
    case SmallLetter:
        return (char)randomNumber(97, 122);
    case CapitalLetter:
        return (char)randomNumber(65, 90);
    case SpecialCharacter:
        return (char)randomNumber(33, 47);
    case Digit:
        return (char)randomNumber(48, 57);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << getRandomCharacter(enCharType::SmallLetter) << endl;
    cout << getRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << getRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << getRandomCharacter(enCharType::Digit) << endl;
}