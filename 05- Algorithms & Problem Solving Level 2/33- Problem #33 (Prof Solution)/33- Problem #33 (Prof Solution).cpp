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

char getRandomCharacter(enCharType charType) {
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

string generatePartKey(enCharType charChoosed, int length) {
	string partKey = "";
	for (int i = 0; i < length; i++) {
		partKey += getRandomCharacter(charChoosed);
	}
	return partKey;
}

string generateKey() {
	string key = "";
	
	key += generatePartKey(enCharType::CapitalLetter, 4) + "-";
	key += generatePartKey(enCharType::CapitalLetter, 4) + "-";
	key += generatePartKey(enCharType::CapitalLetter, 4) + "-";
	key += generatePartKey(enCharType::CapitalLetter, 4);

	return key;
}

void fillArrayWithKeys(string arr[100], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = generateKey();
	}
}

void printArray(string arr[100], int length) {
	cout << "\nArray elements :\n\n";
	
	for (int i = 0; i < length; i++) {
		cout << "Array [" << i + 1 << "] : " << arr[i] << endl;
	}
}

int main()
{
    srand((unsigned)time(NULL));

	string arr[100] = {};
	int length = readPositiveNumber("How many keys do you want to generate : ");

	fillArrayWithKeys(arr, length);

	printArray(arr, length);
}