#pragma once

#include <iostream>
#include <iomanip>
#include "clsInputValidate.h"
#include "clsScreen.h"

using namespace std;

class clsMainScreen : protected clsScreen
{
private:
	enum enMainMenuOptions {
		eListClients = 1, eAddNewClient = 2, eDeleteClient = 3,
		eUpdateClient = 4, eFindClient = 5, eTransactions = 6,
		eManageUsers = 7, eLogout = 8
	};

	static void _ShowAllClientsScreen()
	{
		cout << "\nAll client screen will be here .";
	}

	static void _ShowAddNewClientScreen()
	{
		cout << "\nAdd New client screen will be here .";
	}

	static void _ShowDeleteClientScreen()
	{
		cout << "\nDelete client screen will be here .";
	}

	static void _ShowUpdateClientScreen()
	{
		cout << "\nUpdate client screen will be here .";
	}

	static void _ShowFindClientScreen()
	{
		cout << "\nFind client screen will be here .";
	}

	static void _ShowTransactionsScreen()
	{
		cout << "\Transactions screen will be here .";
	}

	static void _ShowManageUsersScreen()
	{
		cout << "\nManage Users screen will be here .";
	}

	static void _GoBackToMainMenu()
	{
		cout << "\n\tPress any key to comback to main menu ...";
		system("pause>0");
		ShowMainMenu();
	}

	static void _PerformMainMenuOption(enMainMenuOptions MainMenuOption)
	{
		switch (MainMenuOption)
		{
		case clsMainScreen::eListClients:
			system("cls");
			_ShowAllClientsScreen();
			_GoBackToMainMenu();
			break;
		case clsMainScreen::eAddNewClient:
			system("cls");
			_ShowAddNewClientScreen();
			_GoBackToMainMenu();
			break;
		case clsMainScreen::eDeleteClient:
			system("cls");
			_ShowDeleteClientScreen();
			_GoBackToMainMenu();
			break;
		case clsMainScreen::eUpdateClient:
			system("cls");
			_ShowUpdateClientScreen();
			_GoBackToMainMenu();
			break;
		case clsMainScreen::eFindClient:
			system("cls");
			_ShowFindClientScreen();
			_GoBackToMainMenu();
			break;
		case clsMainScreen::eTransactions:
			system("cls");
			_ShowTransactionsScreen();
			_GoBackToMainMenu();
			break;
		case clsMainScreen::eManageUsers:
			system("cls");
			_ShowManageUsersScreen();
			_GoBackToMainMenu();
			break;
		case clsMainScreen::eLogout:
			system("cls");


			break;
		}
	}

	static short _ReadMainMenuOption()
	{
		cout << setw(40) << left << "" << "Choose what do you want to perform from 1 to 8 : ";
		short choice = clsInputValidate::ReadShortNumberBetween(1, 8);
		return choice;
	}

public:
	static void ShowMainMenu() 
	{
		system("cls");
		_DrawScreenHeader("\t\tMain Screen");

		cout << setw(40) << left << "" << "======================================\n";
		cout << setw(40) << left << "" << "\t\tMain Menu\n";
		cout << setw(40) << left << "" << "======================================\n";
		cout << setw(40) << left << "" << "\t[1] Show Clients List.\n";
		cout << setw(40) << left << "" << "\t[2] Add New Client.\n";
		cout << setw(40) << left << "" << "\t[3] Delete Client.\n";
		cout << setw(40) << left << "" << "\t[4] Update Client.\n";
		cout << setw(40) << left << "" << "\t[5] Find Client.\n";
		cout << setw(40) << left << "" << "\t[6] Transactions.\n";
		cout << setw(40) << left << "" << "\t[7] Manage Users.\n";
		cout << setw(40) << left << "" << "\t[8] Logout.\n";
		cout << setw(40) << left << "" << "======================================\n\n";

		_PerformMainMenuOption((enMainMenuOptions)_ReadMainMenuOption());
	}
};

