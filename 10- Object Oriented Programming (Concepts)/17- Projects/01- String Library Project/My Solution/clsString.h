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
};

