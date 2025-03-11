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
};