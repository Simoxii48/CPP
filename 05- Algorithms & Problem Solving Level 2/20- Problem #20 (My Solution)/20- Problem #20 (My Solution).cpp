#include <iostream>
using namespace std;

enum enNumberType { SmallLeter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4, Others = 5 };

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

enNumberType numberType(int number) {
    if (number <= 97 || number >= 122)
        return enNumberType::SmallLeter;
    else if (number <= 65 || number >= 90)
        return enNumberType::CapitalLetter;
    else if (number <= 32 || number >= 47)
        return enNumberType::SpecialCharacter;
    else if (number <= 48 || number >= 57)
        return enNumberType::Digit;
    else
        return enNumberType::Others;
}

char charNumberType(int number) {
    enNumberType numberToCheck = numberType(number);

    switch (numberToCheck) {
    case enNumberType::SmallLeter:
        return char(number);
    case enNumberType::CapitalLetter:
        return char(number);
    case enNumberType::SpecialCharacter:
        return char(number);
    case enNumberType::Digit:
        return char(number);
    default:
        return enNumberType::Others;
    }
}

void printNumberType(char numberType) {
    cout << numberType << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    // print Small Letter
    printNumberType(charNumberType(randomNumber(97, 122)));

    // print Capital Letter
    printNumberType(charNumberType(randomNumber(65, 90)));

    // print Special Character
    printNumberType(charNumberType(randomNumber(32, 47)));

    // print Digit
    printNumberType(charNumberType(randomNumber(48, 57)));
}