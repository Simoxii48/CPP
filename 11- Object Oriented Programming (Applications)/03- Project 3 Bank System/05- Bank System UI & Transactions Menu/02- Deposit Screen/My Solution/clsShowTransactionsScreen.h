#pragma once

#include <iostream>
#include <iomanip>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsDepositScreen.h"

using namespace std;

class clsShowTransactionsScreen : protected clsScreen
{
private:
	enum enTransactionsMenuOptions
	{
		eDeposit = 1, eWithdraw = 2,
		eShowTotalBalance = 3, eShowMainMenu = 4
	};

	static short _ReadTransactionsMenuOption()
	{
		cout << setw(37) << left << "" << "Choose what do you want to do from 1 to 4 : ";
		short choice = clsInputValidate::ReadShortNumberBetween(1, 4);
		return choice;
	}

	static void _ShowDepositScreen()
	{
		clsDepositScreen::ShowDepositScreen();
	}

	static void _ShowWithdrawScreen()
	{
		cout << "withdraw screen will be here" << endl;
	}

	static void _ShowTotalBalancesScreen()
	{
		cout << "total balances screen will be here" << endl;
	}

	static void _ShowTransactionMenuScreen()
	{
		cout << "\nPlease press any key to return to transaction menu screen ...";
		system("pause>0");

		ShowTransactionsMenu();
	}

	static void _PerfromMainMenueOption(enTransactionsMenuOptions TransactionMenuOption)
	{
		switch (TransactionMenuOption)
		{
		case clsShowTransactionsScreen::eDeposit:
			system("cls");
			_ShowDepositScreen();
			_ShowTransactionMenuScreen();
			break;
		case clsShowTransactionsScreen::eWithdraw:
			system("cls");
			_ShowWithdrawScreen();
			_ShowTransactionMenuScreen();
			break;
		case clsShowTransactionsScreen::eShowTotalBalance:
			system("cls");
			_ShowTotalBalancesScreen();
			_ShowTransactionMenuScreen();
			break;
		case clsShowTransactionsScreen::eShowMainMenu:
			system("cls");
			break;
		}
	}

public:
	static void ShowTransactionsMenu()
	{
		system("cls");
		_DrawScreenHeader("\t\  Transaction Menu Screen");

		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t\t\ Transaction Menu\n";
		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t[1] Deposit.\n";
		cout << setw(37) << left << "" << "\t[2] Withdraw.\n";
		cout << setw(37) << left << "" << "\t[3] Total Balancest.\n";
		cout << setw(37) << left << "" << "\t[4] Main Menu.\n";
		cout << setw(37) << left << "" << "===========================================\n";

		_PerfromMainMenueOption((enTransactionsMenuOptions)_ReadTransactionsMenuOption());
	}
};