#pragma once

#include <iostream>
#include <iomanip>
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
				cout << "\nInvalid UserName/Password!\n";

			cout << "\nEnter your UserName : ";
			UserName = clsInputValidate::ReadString();

			cout << "\nEnter your Password : ";
			Password = clsInputValidate::ReadString();

			CurrentUser = clsUser::Find(UserName, Password);

			isLoginFailed = CurrentUser.IsEmpty();
		} while (isLoginFailed);

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