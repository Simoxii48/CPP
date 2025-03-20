#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include "clsScreen.h"
#include "clsCurrency.h"

class clsShowListCurrencies : protected clsScreen
{
private:
	static void _PrintHeader()
	{
		cout << setw(8) << left << "" << "=======================================================================================================\n";
		cout << setw(8) << left << "" << "|" << setw(40) << left << "Country";
		cout << "|" << setw(10) << left << "Code";
		cout << "|" << setw(40) << left << "Name";
		cout << "|" << setw(15) << left << "Rate/(1$)";
		cout << endl << setw(8) << left << "" << "=======================================================================================================\n";
	}
	
	static void _PrintCurrency(clsCurrency Currency)
	{
		cout << setw(8) << left << "" << "|" << setw(40) << left << Currency.Country();
		cout << "|" << setw(10) << left << Currency.CurrencyCode();
		cout << "|" << setw(40) << left << Currency.CurrencyName();
		cout << "|" << setw(15) << left << Currency.Rate();
	}

public:
	static void ShowListCurrencies()
	{
		vector<clsCurrency> vAllCurrencies = clsCurrency::GetCurrenciesList();
		string title = "	Currencies List Screen";
		string subTitle = "	(" + to_string(vAllCurrencies.size()) + ") Currency.";

		_DrawScreenHeader(title, subTitle);
		_PrintHeader();

		for (clsCurrency& C : vAllCurrencies)
		{
			_PrintCurrency(C);
			cout << endl;
		}

		cout << endl << setw(8) << left << "" << "=======================================================================================================\n";
	}

};