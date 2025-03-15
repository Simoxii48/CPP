#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class clsUtil
{
public:
	static void Srand()
	{
		srand((unsigned)time(NULL));
	}

	static int randomNumber(int from, int to)
	{
		return rand() % (to - from + 1) + from;
	}

    enum enCharType { SmallLetter = 1, capitalLetter = 2, Digit = 3, MixChars = 4 };

    static char getRandomCharacter(enCharType charType) {
        switch (charType)
        {
        case SmallLetter:
            return char(randomNumber(97, 122));
        case capitalLetter:
            return char(randomNumber(65, 90));
            //case SpecialCharacter:
                //return char(randomNumber(33, 47));
        case Digit:
            return char(randomNumber(48, 57));
        case MixChars:
            return getRandomCharacter((enCharType)randomNumber(1, 3));
        }
    }

    static string generateWord(enCharType charType, short length) {
        string word = "";
        for (int i = 1; i <= length; i++) {
            word += getRandomCharacter(charType);
        }
        return word;
    }

    static string generateKey(enCharType charType) {
        string key = "";

        key = generateWord(charType, 4) + "-";
        key += generateWord(charType, 4) + "-";
        key += generateWord(charType, 4) + "-";
        key += generateWord(charType, 4);

        return key;
    }

    static void generateKeys(short numberOfKeys,enCharType charType) {
        for (int i = 1; i <= numberOfKeys; i++) {
            cout << "Key [" << i << "] : ";
            cout << generateKey(charType) << endl;
        }
    }

    static void Swap(int& a, int& b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
};