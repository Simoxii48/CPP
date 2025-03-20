#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include "clsMainScreen.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "Global.h"
#include "clsDate.h"


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

		_WriteLoginsInLogFile();
		clsMainScreen::ShowMainMenue();
	}

	static void _WriteLoginsInLogFile(string delim = "#//#")
	{
		fstream myFile;
		myFile.open("LoginRegister.txt", ios::out | ios::app);

		time_t t = time(0);
		tm* now = localtime(&t);
			
		string line = clsDate::DateToString(clsDate()) + " - " + to_string(now->tm_hour) + ":" + to_string(now->tm_min) + ":" + to_string(now->tm_sec) + delim + CurrentUser.UserName + delim + CurrentUser.Password + delim + to_string(CurrentUser.Permissions);
		
		if (myFile.is_open())
		{
			myFile << line << endl;
			myFile.close();
		}
	}

public:
	static void ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("\t	Login Screen");
		_Login();
	}
};