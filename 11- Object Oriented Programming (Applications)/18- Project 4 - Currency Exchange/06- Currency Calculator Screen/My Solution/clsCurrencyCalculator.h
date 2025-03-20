#pragma once

#include <iostream>
#include "clsCurrency.h"
#include "clsScreen.h"
#include "clsInputValidate.h"

class clsCurrencyCalculator : protected clsScreen
{
private:
	static clsCurrency _ReadCurrencyCode()
	{
		cout << "\nPlease enter Currency 1 Code : ";
		string currencyCode = clsInputValidate::ReadString();

		while (!clsCurrency::IsCurrencyExist(currencyCode))
		{
			cout << "\nWrong Currency Code Inserted Currency was not found, Try Another Code : ";
			currencyCode = clsInputValidate::ReadString();
		}

		return clsCurrency::FindByCode(currencyCode);
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
public:
	static void ShowCurrencyCalculatorScreen()
	{
		char calculateAgain = 'n';

		do {
			system("cls");

			_DrawScreenHeader("	Currency Calculator Screen");
			clsCurrency Currency1 = _ReadCurrencyCode();
			clsCurrency Currency2 = _ReadCurrencyCode();

			cout << "\nEnter Amount To Exchange : ";
			float Amount = clsInputValidate::ReadFloatNumber();

			if (Currency2.CurrencyCode() == "USD")
			{
				_PrintCurrencyCard(Currency1);
				cout << endl << Amount << " " << Currency1.CurrencyCode() << " = " << to_string(clsCurrency::ConversionCalculation(Currency1, Amount)) << " USD";
			}
			else
			{
				cout << "\nConvert From :\n";
				_PrintCurrencyCard(Currency1);
				cout << endl << Amount << " " << Currency1.CurrencyCode() << " = " << to_string(clsCurrency::ConversionCalculation(Currency1, Amount)) << " USD";
				cout << "\n\nConvert From USD To :\n";
				_PrintCurrencyCard(Currency2);
				cout << endl << Amount << " " << Currency1.CurrencyCode() << " = " << to_string(clsCurrency::ConversionCalculation(Currency1, Currency2, Amount)) << " " << Currency2.CurrencyCode();
			}

			cout << "\n\nDo you want to perform another calculation (y/n) : ";
			cin >> calculateAgain;
		} while (tolower(calculateAgain) == 'y');
	}
};