#pragma once

#include <iostream>
#include "clsScreen.h"

class clsUpdateRate : protected clsScreen
{
private:
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
	static void ShowUpdateRateScreen()
	{
		_DrawScreenHeader("	  Update Currency Rate Screen");
		
		cout << "\nPlease enter Currency Code : ";
		string code = clsInputValidate::ReadString();

		if (!clsCurrency::IsCurrencyExist(code))
		{
			cout << "\nSorry No Currency found with the code [" << code << "]. :(" << endl;
			return;
		}

		clsCurrency Currency = clsCurrency::FindByCode(code);
		_PrintCurrencyCard(Currency);

		char confirm = 'n';
		cout << "\nAre you sure you want to update the currency rate (y/n) : ";
		cin >> confirm;

		if (tolower(confirm) == 'y')
		{
			cout << "\nUpdate Currency Rate :" << endl;
			cout << "Enter New Rate : ";
			
			float newRate = clsInputValidate::ReadFloatNumber();
			Currency.UpdateRate(newRate);

			cout << "\n\nCurrency Rate Updated Successfully." << endl;
			_PrintCurrencyCard(Currency);
		}
	}
};