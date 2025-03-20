#pragma once

#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsListUsersScreen.h"

using namespace std;

class clsManageUsersScreen : protected clsScreen
{
private:
	enum enManageUsersOption
	{
		eListUsers = 1, eAddNewUser = 2, eDeleteUser = 3,
		eUpdateUser = 4, eFindUser = 5, eMainMenu = 6
	};

	static short _ReadManageUsersMenuOption()
	{
		cout << setw(37) << left << "" << "Choose what do you want to do from 1 to 6 : ";
		short choice = clsInputValidate::ReadShortNumberBetween(1, 6);
		return choice;
	}

	static void _ReturnToManageUsersScreen()
	{
		cout << "\nPress any key to return to manage users screen ...";
		system("pause>0");

		ShowManageUsersScreen();
	}

	static void _ShowListUsersScreen()
	{
		clsListUsersScreen::ShowListUsersScreen();
	}

	static void _ShowAddNewUserScreen()
	{
		cout << "\Add New User Screen will be here ..." << endl;
	}

	static void _ShowDeleteUserScreen()
	{
		cout << "\Delete User Screen will be here ..." << endl;
	}

	static void _ShowUpdateUserScreen()
	{
		cout << "\nUpdate User Screen will be here ..." << endl;
	}

	static void _ShowFindUserScreen()
	{
		cout << "\nFind User Screen will be here ..." << endl;
	}

	static void _PerfromMainMenueOption(enManageUsersOption enManageUsersOption)
	{
		switch (enManageUsersOption)
		{
		case clsManageUsersScreen::eListUsers:
			system("cls");
			_ShowListUsersScreen();
			_ReturnToManageUsersScreen();
			break;
		case clsManageUsersScreen::eAddNewUser:
			system("cls");
			_ShowAddNewUserScreen();
			_ReturnToManageUsersScreen();
			break;
		case clsManageUsersScreen::eDeleteUser:
			system("cls");
			_ShowDeleteUserScreen();
			_ReturnToManageUsersScreen();
			break;
		case clsManageUsersScreen::eUpdateUser:
			system("cls");
			_ShowUpdateUserScreen();
			_ReturnToManageUsersScreen();
			break;
		case clsManageUsersScreen::eFindUser:
			system("cls");
			_ShowFindUserScreen();
			_ReturnToManageUsersScreen();
			break;
		case clsManageUsersScreen::eMainMenu:
			break;
		}
	}

public:
	static void ShowManageUsersScreen()
	{
		system("cls");
		_DrawScreenHeader("\t\  Manage Users Screen");

		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t\t\ Manage Users Menu\n";
		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t[1] List Users.\n";
		cout << setw(37) << left << "" << "\t[2] Add New User.\n";
		cout << setw(37) << left << "" << "\t[3] Delete User.\n";
		cout << setw(37) << left << "" << "\t[4] Update User.\n";
		cout << setw(37) << left << "" << "\t[5] Find User.\n";
		cout << setw(37) << left << "" << "\t[6] Main Menu.\n";
		cout << setw(37) << left << "" << "===========================================\n";

		_PerfromMainMenueOption((enManageUsersOption)_ReadManageUsersMenuOption());
	}
};