#pragma once

#include <iostream>
#include <iomanip>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsShowListCurrencies.h"
#include "clsFindCurrency.h"
#include "clsUpdateRate.h"
#include "clsCurrencyCalculator.h"

using namespace std;

class clsCurrencyExchangeMenu : protected clsScreen
{
	enum enCurrencyExchangeOptions
	{
		eListCurrencies = 1, eFindCurrency = 2,
		eUpdateRate = 3, eCurrencyCalculator = 4,
		eMainMenu = 5
	};

	static short _ReadCurrencyExchangeOption()
	{
		cout << endl << setw(30) << left << "" << "Choose What do you want to do [1 To 5 ] : ";
		short choice = clsInputValidate::ReadShortNumberBetween(1, 5);
		return choice;
	}

	static void _GoBackToCurrencyExchangeMenu()
	{
		cout << "\n\nPress any key to return to Currency Exchange Menu ...";
		system("pause>0");
		ShowCurrencyExchangeMenu();
	}

	static void _ShowListCurrencies()
	{
		clsShowListCurrencies::ShowListCurrencies();
	}

	static void _ShowFindCurrency()
	{
		clsFindCurrency::ShowFindCurrencyScreen();
	}

	static void _ShowUpdateRate()
	{
		clsUpdateRate::ShowUpdateRateScreen();

	}

	static void _ShowCurrenciesCalculator()
	{
		clsCurrencyCalculator::ShowCurrencyCalculatorScreen();
	}

	static void _PerformCurrencyExchangeOption(enCurrencyExchangeOptions OptionChoosed)
	{
		switch (OptionChoosed)
		{
		case clsCurrencyExchangeMenu::eListCurrencies:
			system("cls");
			_ShowListCurrencies();
			_GoBackToCurrencyExchangeMenu();
			break;
		case clsCurrencyExchangeMenu::eFindCurrency:
			system("cls");
			_ShowFindCurrency();
			_GoBackToCurrencyExchangeMenu();
			break;
		case clsCurrencyExchangeMenu::eUpdateRate:
			system("cls");
			_ShowUpdateRate();
			_GoBackToCurrencyExchangeMenu();
			break;
		case clsCurrencyExchangeMenu::eCurrencyCalculator:
			system("cls");
			_ShowCurrenciesCalculator();
			_GoBackToCurrencyExchangeMenu();
			break;
		case clsCurrencyExchangeMenu::eMainMenu:
			break;
		}
	}

public:
	static void ShowCurrencyExchangeMenu()
	{
		if (!CheckAccessRights(clsUser::enPermissions::pCurrencyExchangeMenu))
			return;

		system("cls");
		_DrawScreenHeader("	Currency Exchange Menu");

		cout << setw(30) << left << "" << "================================================\n";
		cout << setw(50) << left << "" << "Currency Exchange Menu\n";
		cout << setw(30) << left << "" << "================================================\n";
		cout << setw(35) << left << "" << "[1] List Currencies.\n";
		cout << setw(35) << left << "" << "[2] Find Currency.\n";
		cout << setw(35) << left << "" << "[3] Update Rate.\n";
		cout << setw(35) << left << "" << "[4] Currency Calculator.\n";
		cout << setw(35) << left << "" << "[5] Main Menu.\n";
		cout << setw(30) << left << "" << "================================================\n";

		_PerformCurrencyExchangeOption((enCurrencyExchangeOptions)_ReadCurrencyExchangeOption());
	}
};