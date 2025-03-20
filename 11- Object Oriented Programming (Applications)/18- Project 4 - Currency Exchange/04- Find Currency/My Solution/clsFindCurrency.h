#pragma once

#include <iostream>
#include <string>
#include "clsInputValidate.h"
#include "clsCurrency.h"
#include "clsScreen.h"

using namespace std;

class clsFindCurrency : protected clsScreen
{
private:
	enum enSearchOptions { eCurrencyCode = 1, eCurrencyCountry = 2 };

	static short _ReadCurrencySearchOption()
	{
		cout << "\nFind by : [1] Currency Code Or [2] Currency Country : ";
		short choice = clsInputValidate::ReadShortNumberBetween(1, 2);
		return choice;
	}

	static void _PrintCurrencyCard(clsCurrency C)
	{
		cout << "\nCurrency Card :\n\n";
		cout << "-----------------------------" << endl;
		cout << "Country    : " << C.Country() << endl;
		cout << "Code       : " << C.CurrencyCode() << endl;
		cout << "Name       : " << C.CurrencyName() << endl;
		cout << "Rate/(1$)  : " << C.Rate() << endl;
		cout << "-----------------------------" << endl;
	}

	static string _ReadString(string Message)
	{
		string line;
		cout << Message;
		getline(cin >> ws, line);
		return line;
	}

	static void _PerformSearchBasedOnOption(enSearchOptions SearchOption)
	{
		switch (SearchOption)
		{
		case clsFindCurrency::eCurrencyCode:
		{
			string currencyCode = _ReadString("Please enter Currency Code : ");
			if (!clsCurrency::IsCurrencyExist(currencyCode))
			{
				cout << "\nCurrency Does not exist in our base :(\n";
				break;
			}
			cout << "\nCurrency Found :)\n";
			clsCurrency C = clsCurrency::FindByCode(currencyCode);
			_PrintCurrencyCard(C);
			break;
		}
		case clsFindCurrency::eCurrencyCountry:
		{
			string currencyCountry = _ReadString("Please enter Country Name : ");
			if (!clsCurrency::IsCurrencyExistByCountry(currencyCountry))
			{
				cout << "\nCurrency Does not exist in our base :(\n";
				break;
			}
			cout << "\nCurrency Found :)\n";
			clsCurrency C = clsCurrency::FindByCountry(currencyCountry);
			_PrintCurrencyCard(C);
			break;
		}
		}
	}
public:
	static void ShowFindCurrencyScreen()
	{
		_DrawScreenHeader("	  Find Currency Screen");
		_PerformSearchBasedOnOption((enSearchOptions)_ReadCurrencySearchOption());
	}
};