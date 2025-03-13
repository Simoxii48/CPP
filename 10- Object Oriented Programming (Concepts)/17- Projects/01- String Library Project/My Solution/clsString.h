#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
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
	static short CountSpecLetter(string S1, char Letter, bool MatchCase = true)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (MatchCase)
			{
				if (S1[i] == Letter)
					Counter++;
			}
			else
			{
				if (tolower(S1[i]) == tolower(Letter))
					Counter++;
			}
		}
		return Counter;
	}

	// instance method
	short CountSpecLetter(char Letter)
	{
		return CountSpecLetter(_Value, Letter);
	}

	// static func
	static short countSpecLetterNonCaseSensitive(string S, char Letter)
	{
		return CountSpecLetter(S, Letter, false);
	}

	// instance method to count case sensitive
	short countSpecLetterNonCaseSensitive(char Letter)
	{
		return CountSpecLetter(_Value, Letter, false);
	}

	// static func
	static bool IsVowel(char Ch1)
	{
		Ch1 = tolower(Ch1);
		return ((tolower(Ch1) == 'a') || (tolower(Ch1) == 'e') || (tolower(Ch1) == 'i') || (tolower(Ch1)
			== 'o') || (tolower(Ch1) == 'u'));
	}

	// static count vowels
	static short CountVowels(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
				Counter++;
		}
		return Counter;
	}

	// instance method
	short CountVowels()
	{
		return CountVowels(_Value);
	}

	// static print vowels
	static void PrintVowels(string S1)
	{
		cout << "\nVowels in string are: ";
		for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
				cout << S1[i] << " ";
		}
		cout << endl;
	}

	// instance method
	void PrintVowels()
	{
		PrintVowels(_Value);
	}

	// static print each word in string 
	static void PrintEachWordInString(string S1)
	{
		string delim = " "; // delimiter

		cout << "\nYour string words are: \n\n";

		short pos = 0;
		string sWord; // define a string variable

		// use find() function to get the position of the delimiters
		while ((pos = S1.find(delim)) != string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "")
			{
				cout << sWord << endl;
			}
			S1.erase(0, pos + delim.length()); /* erase() until
			positon and move to next word. */
		}

		if (S1 != "")
		{
			cout << S1 << endl; // it print last word of the string.
		}
	}

	// instance method
	void PrintEachWordInString()
	{
		PrintEachWordInString(_Value);
	}

	// static count words func
	static short CountWords(string S1)
	{
		string delim = " "; // delimiter
		short Counter = 0;
		short pos = 0;
		string sWord; // define a string variable
		// use find() function to get the position of the delimiters

		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "")
			{
				Counter++;
			}
			//erase() until positon and move to next word.
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
		{
			Counter++; // it counts the last word of the string.
		}
		return Counter;
	}

	// instance method
	short CountWords()
	{
		return CountWords(_Value);
	}

	// static split func
	static vector<string> SplitString(string S1, string Delim)
	{
		vector<string> vString;
		short pos = 0;
		string sWord; // define a string variable

		// use find() function to get the position of the delimiters
		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "")
			{
				vString.push_back(sWord);
			}
			S1.erase(0, pos + Delim.length()); /* erase() until
			positon and move to next word. */
		}

		if (S1 != "")
		{
			vString.push_back(S1); // it adds last word of the string.
		}

		return vString;
	}

	// instance method
	vector<string> SplitString(string delim = " ")
	{
		return SplitString(_Value, delim);
	}

	// static trim functions

	// static trim left
	static string TrimLeft(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}
		return "";
	}

	// instance trim left
	string TrimLeft()
	{
		return TrimLeft(_Value);
	}

	// static trim right
	static string TrimRight(string S1)
	{
		for (short i = S1.length() - 1; i >= 0; i--)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(0, i + 1);
			}
		}
		return "";
	}

	// instance trim right
	string TrimRight()
	{
		return TrimRight(_Value);
	}

	// static trim both sides
	static string Trim(string S1)
	{
		return (TrimLeft(TrimRight(S1)));
	}

	// instance trim both sides
	string Trim()
	{
		return (TrimLeft(TrimRight(_Value)));
	}

	// static join string
	static string JoinString(vector<string> vString, string Delim)
	{
		string S1 = "";
		for (string& s : vString)
		{
			S1 = S1 + s + Delim;
		}
		return S1.substr(0, S1.length() - Delim.length());
	}

	// instance method 
	string JoinString(vector<string> vString)
	{
		return JoinString(vString, " ");
	}

	// static join string []
	static string JoinString(string arrString[], short Length, string Delim)
	{
		string S1 = "";

		for (short i = 0; i < Length; i++)
		{
			S1 = S1 + arrString[i] + Delim;
		}
		
		return S1.substr(0, S1.length() - Delim.length());
	}

	// static reverse words in string
	static string ReverseWordsInString(string S1)
	{
		vector<string> vString;
		string S2 = "";
		vString = SplitString(S1, " ");

		// declare iterator
		vector<string>::iterator iter = vString.end();

		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}

		S2 = S2.substr(0, S2.length() - 1); //remove last space.

		return S2;
	}

	// instance method
	string ReverseWordsInString()
	{
		return ReverseWordsInString(_Value);
	}

	// static replace func
	static string ReplaceWordInStringUsingBuiltInFunction(string S1, 
		string StringToReplace, string sRepalceTo)
	{
		short pos = S1.find(StringToReplace);
		while (pos != std::string::npos)
		{
			S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
			pos = S1.find(StringToReplace);//find next
		}
		return S1;
	}

	// instance method
	string ReplaceWordInStringUsingBuiltInFunction(string StringToReplace, string sRepalceTo)
	{
		return ReplaceWordInStringUsingBuiltInFunction(_Value, StringToReplace, sRepalceTo);
	}

	// static replace func
	static string ReplaceWordInStringUsingSplit(string S1, string
		StringToReplace, string sRepalceTo, bool MatchCase = true)
	{
		vector<string> vString = SplitString(S1, " ");
		for (string& s : vString)
		{
			if (MatchCase)
			{
				if (s == StringToReplace)
				{
					s = sRepalceTo;
				}
			}
			else
			{
				if (LowerAllString(s) ==
					LowerAllString(StringToReplace))
				{
					s = sRepalceTo;
				}
			}
		}
		return JoinString(vString, " ");
	}

	// instance method
	string ReplaceWordInStringUsingSplit(string StringToReplace, string sRepalceTo, 
		bool MatchCase = true)
	{
		return ReplaceWordInStringUsingSplit(_Value, StringToReplace, sRepalceTo, MatchCase);
	}

	// static remove punct 
	static string RemovePunctuationsFromString(string S1)
	{
		string S2 = "";
		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				S2 += S1[i];
			}
		}
		return S2;
	}
	
	// instance method
	string RemovePunctuationsFromString()
	{
		return RemovePunctuationsFromString(_Value);
	}

	// static convert struct to string
	static struct sClient
	{
		string AccountNumber;
		string PinCode;
		string Name;
		string Phone;
		double AccountBalance;
	};

	// fill structure
	static sClient ReadNewClient()
	{
		sClient Client;

		cout << "Enter Account Number? ";
		getline(cin, Client.AccountNumber);

		cout << "Enter PinCode? ";
		getline(cin, Client.PinCode);

		cout << "Enter Name? ";
		getline(cin, Client.Name);

		cout << "Enter Phone? ";
		getline(cin, Client.Phone);

		cout << "Enter AccountBalance? ";
		cin >> Client.AccountBalance;

		return Client;
	}

	static string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
	{
		//sClient Client = ReadNewClient();
		string stClientRecord = "";

		stClientRecord += Client.AccountNumber + Seperator;
		stClientRecord += Client.PinCode + Seperator;
		stClientRecord += Client.Name + Seperator;
		stClientRecord += Client.Phone + Seperator;
		stClientRecord += to_string(Client.AccountBalance);

		return stClientRecord;
	}

	// instance method
	static sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
	{
		sClient Client;
		vector<string> vClientData;

		vClientData = SplitString(Line, Seperator);

		Client.AccountNumber = vClientData[0];
		Client.PinCode = vClientData[1];
		Client.Name = vClientData[2];
		Client.Phone = vClientData[3];
		Client.AccountBalance = stod(vClientData[4]);//cast string to double

		return Client;
	}

	static void PrintClientRecord(sClient Client)
	{
		cout << "\n\nThe following is the extracted client record:\n";
		cout << "\nAccout Number: " << Client.AccountNumber;
		cout << "\nPin Code : " << Client.PinCode;
		cout << "\nName : " << Client.Name;
		cout << "\nPhone : " << Client.Phone;
		cout << "\nAccount Balance: " << Client.AccountBalance;
		cout << endl;
	}

	// static add dataline to file
	static void AddDataLineToFile(string FileName, string stDataLine)
	{
		fstream MyFile;
		MyFile.open(FileName, ios::out | ios::app);
		if (MyFile.is_open())
		{
			MyFile << stDataLine << endl;
			MyFile.close();
		}
		cout << "\nFile updated" << endl;
	}

	// instance method
	void AddDataLineToFile(string FileName)
	{
		return AddDataLineToFile(FileName, _Value);
	}
};