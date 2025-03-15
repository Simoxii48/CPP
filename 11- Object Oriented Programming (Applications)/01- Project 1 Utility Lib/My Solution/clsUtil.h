#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include "clsDate.h"
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

    static char getRandomCharacter(enCharType charType) 
    {
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

    static string generateWord(enCharType charType, short length) 
    {
        string word = "";
        for (int i = 1; i <= length; i++) 
        {
            word += getRandomCharacter(charType);
        }
        return word;
    }

    static string generateKey(enCharType charType) 
    {
        string key = "";

        key = generateWord(charType, 4) + "-";
        key += generateWord(charType, 4) + "-";
        key += generateWord(charType, 4) + "-";
        key += generateWord(charType, 4);

        return key;
    }

    static void generateKeys(short numberOfKeys,enCharType charType) 
    {
        for (int i = 1; i <= numberOfKeys; i++) 
        {
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

    static void Swap(double& a, double& b)
    {
        double temp;
        temp = a;
        a = b;
        b = temp;
    }

    static void Swap(string& s1, string& s2)
    {
        string temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
    }

    static void Swap(clsDate& Date1, clsDate& Date2)
    {
        clsDate TempDate;
        TempDate = Date1;
        Date1 = Date2;
        Date2 = TempDate;
    }

    static void shuffleArray(int arr[100], int length) 
    {
        for (int i = 0; i < length; i++) {
            swap(arr[randomNumber(1, length) - 1], arr[randomNumber(1, length) - 1]);
        }
    }

    static void shuffleArray(string arr[100], int length)
    {
        for (int i = 0; i < length; i++) {
            swap(arr[randomNumber(1, length) - 1], arr[randomNumber(1, length) - 1]);
        }
    }

    static void fillArrayWithRandomNumbers(int arr[100], int arrLength, int from, int to) 
    {
        for (int i = 0; i < arrLength; i++) {
            arr[i] = randomNumber(from, to);
        }
    }

    static void fillArrayWithRandomWords(string arr[100], int arrLength, enCharType charType,int wordLength)
    {
        for (int i = 0; i < arrLength; i++) 
        {
            arr[i] = generateWord(charType,wordLength);
        }
    }

    static void fillArrayWithRandomKeys(string arr[100], int arrLength, enCharType charType)
    {
        for (int i = 0; i < arrLength; i++)
        {
            arr[i] = generateKey(charType);
        }
    }

    static string Tabs(short numberOfTabs) {
        string t = "";

        for (int i = 1; i < numberOfTabs; i++) {
            t = t + "\t";
            cout << t;
        }
        return t;
    }

    static string encryptText(string text, short encryptionKey) {

        for (int i = 0; i <= text.length(); i++) {
            text[i] = char((int)text[i] + encryptionKey);
        }

        return text;
    }

    static string decryptText(string text, short encryptionKey) {

        for (int i = 0; i <= text.length(); i++) {
            text[i] = char((int)text[i] - encryptionKey);
        }

        return text;
    }
};