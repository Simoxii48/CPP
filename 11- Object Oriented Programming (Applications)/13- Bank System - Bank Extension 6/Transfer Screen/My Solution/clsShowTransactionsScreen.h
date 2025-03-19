#pragma once

#include <iostream>
#include <iomanip>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsDepositScreen.h"
#include "clsWithdrawScreen.h"
#include "clsTotalBalancesScreen.h"
#include "clsTransferScreen.h"

using namespace std;

class clsShowTransactionsScreen : protected clsScreen
{
private:
	enum enTransactionsMenuOptions
	{
		eDeposit = 1, eWithdraw = 2,
		eShowTotalBalance = 3, eTransfer = 4, eShowMainMenu = 5
	};
	
	static short _ReadTransactionsMenuOption()
	{
		cout << setw(37) << left << "" << "Choose what do you want to do from 1 to 5 : ";
		short choice = clsInputValidate::ReadShortNumberBetween(1, 5);
		return choice;
	}

	static void _ShowDepositScreen()
	{
		clsDepositScreen::ShowDepositScreen();
	}

	static void _ShowWithdrawScreen()
	{
		clsWithdrawScreen::ShowWithdrawScreen();
	}

	static void _ShowTotalBalancesScreen()
	{
		clsTotalBalancesScreen::ShowTotalBalances();
	}

	static void _ShowTransferScreen()
	{
		clsTransferScreen::_ShowTransferScreen();
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
		case clsShowTransactionsScreen::eTransfer:
			system("cls");
			_ShowTransferScreen();
			_ShowTransactionMenuScreen();
			break;
		case clsShowTransactionsScreen::eShowMainMenu:
			break;
		}
	}

public:
	static void ShowTransactionsMenu()
	{
		if (!CheckAccessRights(clsUser::enPermissions::pTransactions))
			return;

		system("cls");
		_DrawScreenHeader("\t\  Transaction Menu Screen");

		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t\t\ Transaction Menu\n";
		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t[1] Deposit.\n";
		cout << setw(37) << left << "" << "\t[2] Withdraw.\n";
		cout << setw(37) << left << "" << "\t[3] Total Balancest.\n";
		cout << setw(37) << left << "" << "\t[4] Transfer.\n";
		cout << setw(37) << left << "" << "\t[5] Main Menu.\n";
		cout << setw(37) << left << "" << "===========================================\n";

		_PerfromMainMenueOption((enTransactionsMenuOptions)_ReadTransactionsMenuOption());
	}
};