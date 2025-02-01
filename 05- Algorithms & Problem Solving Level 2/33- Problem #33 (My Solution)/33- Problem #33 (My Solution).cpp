#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { CapitalLetter = 1, SmallLetter = 2, SpecialCharacter = 3, Digit = 4 };

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

char randomCharacter(enCharType charType) {
    switch (charType)
    {
    case CapitalLetter:
        return (char)randomNumber(65, 90);
    case SmallLetter:
        return (char)randomNumber(97, 122);
    case SpecialCharacter:
        return (char)randomNumber(33, 47);
    case Digit:
        return (char)randomNumber(48, 57);
    }
}

string partKey(enCharType charType, short length) {
    string part = "";
    for (int i = 0; i < length; i++) {
        part += randomCharacter(charType);
    }
    return part;
}

string generateKey() {
    string key = "";
    
    key += partKey(enCharType::CapitalLetter, 4) + "-";
    key += partKey(enCharType::CapitalLetter, 4) + "-";
    key += partKey(enCharType::CapitalLetter, 4) + "-";
    key += partKey(enCharType::CapitalLetter, 4);

    return key;
}

void fillArrayElements(string arr[100], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = generateKey();
    }
}

void printArray(string arr[100], int length) {
    cout << "\Array elements :\n\n";
    for(int i = 0; i < length; i++) {
        cout << "Array [" << i << "] : " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    string arr[100] = {};
    int length = readPositiveNumber("Please enter the number of keys to generate : ");

    fillArrayElements(arr, length);
    printArray(arr, length);
}