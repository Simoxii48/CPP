#pragma once
#include <iostream>
using namespace std;

// string class declaration
class clsString
{
private: // private members
	string _Value;

public: // public members

	// default constructor
	clsString()
	{
		_Value = "";
	}

	// parametirazed constructor
	clsString(string Value)
	{
		_Value = Value;
	}

	// Get function
	string getValue()
	{
		return _Value;
	}

	// Set function
	void setValue(string newValue)
	{
		_Value = newValue;
	}

	// syntax for using the declaration specification to use get & set accordingly
	__declspec(property(get = getValue, put = setValue)) string Value;

	// static function to use even from outside the class without the instance
	static void PrintFirstLetterOfEachWord(string S1)
	{
		bool isFirstLetter = true;

		cout << "\nFirst letters of this string: " << S1 << "\n";
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				cout << S1[i] << endl;
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
	}

	// inclass function to be called for the instance object
	void PrintFirstLetterOfEachWord()
	{
		PrintFirstLetterOfEachWord(_Value);
	}

	// static function to use from the class
	static string UpperFirstLetterOfEachWord(string& S1)
	{
		bool isFirstLetter = true;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = toupper(S1[i]);
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}

	// inClass function to be used for the instance
	string UpperFirstLetterOfEachWord()
	{
		return UpperFirstLetterOfEachWord(_Value);
	}

	// static function to use from the class
	static string LowerFirstLetterOfEachWord(string& S1)
	{
		bool isFirstLetter = true;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = tolower(S1[i]);
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}

	// inClass function to be used only with the instance
	string LowerFirstLetterOfEachWord()
	{
		return LowerFirstLetterOfEachWord(_Value);
	}

	// static function for outside use
	static string UpperAllString(string& S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = toupper(S1[i]);
		}
		return S1;
	}

	// inClass function 
	string UpperAllString()
	{
		return UpperAllString(_Value);
	}

	// static function for outside use
	static string LowerAllString(string& S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}
		return S1;
	}

	// inClass function 
	string LowerAllString()
	{
		return LowerAllString(_Value);
	}

	// static func to invert a char
	static char InvertLetterCase(char char1)
	{
		return isupper(char1) ? tolower(char1) : toupper(char1);
	}

	// static func to invert all string
	static string InvertAllStringLettersCase(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertLetterCase(S1[i]);
		}
		return S1;
	}

	// inClass func
	string InvertAllStringLettersCase()
	{
		return InvertAllStringLettersCase(_Value);
	}

	// enum for what to count
	enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

	// count spec case
	static short CountLetters(string S1, enWhatToCount
		WhatToCount = enWhatToCount::All)
	{
		if (WhatToCount == enWhatToCount::All)
		{
			return S1.length();
		}
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
				Counter++;
			if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
				Counter++;
		}
		return Counter;
	}

	// instance method
	short CountLetters()
	{
		return CountLetters(_Value, enWhatToCount::All);
	}

	// count capital case
	/*
	short CountCapitalLetters(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
				Counter++;
		}
		return Counter;
	}
	*/

	// My extra count capital func
	static short CountCapitalLetters(string S1)
	{
		return CountLetters(S1, enWhatToCount::CapitalLetters);
	}

	// instance method
	short CountCapitalLetters()
	{
		return CountCapitalLetters(_Value);
	}

	// count small case
	/*
	short CountSmallLetters(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
				Counter++;
		}
		return Counter;
	}
	*/

	// My Extra count small func
	static short CountSmallLetters(string S1)
	{
		return CountLetters(S1, enWhatToCount::SmallLetters);
	}

	// instance method
	short CountSmallLetters()
	{
		return CountSmallLetters(_Value);
	}

	// static count spec letter
	static short CountSpecLetter(string S1, char Letter)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		return Counter;
	}

	// instance method
	short CountSpecLetter(char Letter)
	{
		return CountSpecLetter(_Value, Letter);
	}
};