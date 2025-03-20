#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include "clsMainScreen.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "Global.h"

class clsLoginScreen : protected clsScreen
{
private:
	static void _Login()
	{
		bool isLoginFailed = false;

		string UserName, Password;

		do
		{
			if (isLoginFailed)
			{
				cout << "\nInvalid UserName/Password!\n";
				--trials;
				cout << "You have " << trials << " Trial(s) To log in.\n";
			}

			if (trials == 0)
			{
				cout << "\nYou are locked after 3 failed trials.\n";
				return;
			}

			cout << "\nEnter your UserName : ";
			UserName = clsInputValidate::ReadString();

			cout << "Enter your Password : ";
			Password = clsInputValidate::ReadString();

			CurrentUser = clsUser::Find(UserName, Password);

			isLoginFailed = CurrentUser.IsEmpty();

		} while (isLoginFailed);

		CurrentUser.RegisterLogin();
		clsMainScreen::ShowMainMenue();
	}

public:
	static void ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("\t	Login Screen");
		_Login();
	}
};