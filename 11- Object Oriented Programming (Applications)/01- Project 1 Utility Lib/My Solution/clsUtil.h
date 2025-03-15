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

};

