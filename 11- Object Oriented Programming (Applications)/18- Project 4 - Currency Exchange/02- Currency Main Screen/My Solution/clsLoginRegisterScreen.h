#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "clsScreen.h"
#include "clsString.h"


using namespace std;

class clsLoginRegisterScreen : protected clsScreen
{
private:
	struct stUserLogs
	{
		string DateTime;
		string UserName;
		string Password;
		short Permissions;
	};

	static stUserLogs _ConvertLineToStructLog(string line, string delim = "#//#")
	{
		stUserLogs userLog;
		vector<string> vLog = clsString::Split(line, delim);

		userLog.DateTime = vLog[0];
		userLog.UserName = vLog[1];
		userLog.Password = clsString::decryptText(vLog[2], 4);
		userLog.Permissions = stoi(vLog[3]);

		return userLog;
	}

	static vector<stUserLogs> _GetAllLogs()
	{
		fstream myFile;
		
		vector<stUserLogs> vAllLogs;
		myFile.open("LoginRegister.txt", ios::in);

		if (myFile.is_open())
		{
			string line = "";
			while (getline(myFile, line))
			{
				stUserLogs userLog = _ConvertLineToStructLog(line);
				vAllLogs.push_back(userLog);
			}

			myFile.close();
		}

		return vAllLogs;
	}

	static void _PrintLog(stUserLogs log)
	{
		cout << setw(8) << left <<  "" << "|" << setw(40) << left << log.DateTime;
		cout << "|" << setw(23) << left << log.UserName;
		cout << "|" << setw(15) << left << log.Password;
		cout << "|" << setw(22) << left << log.Permissions;
	}

	static void _PrintLogsTable(vector<stUserLogs> vLogs)
	{
		cout << setw(8) << left << "" << "=============================================================================================\n";
		cout << setw(8) << left << "" << "|" << setw(40) << left << "Date/Time";
		cout << "|" << setw(23) << left << "UserName";
		cout << "|" << setw(15) << left << "Password";
		cout << "|" << setw(22) << left << "Permissions";
		cout << endl << setw(8) << left << "" << "=============================================================================================\n";

		if (vLogs.size() < 0)
			cout << "\t		No logs available to show." << endl;

		for (stUserLogs& Log : vLogs)
		{
			_PrintLog(Log);
			cout << endl;
		}

		cout << endl << setw(8) << left << "" << "=============================================================================================\n";
	}
public:
	static void showLoginRegisterScreen()
	{
		if (!CheckAccessRights(clsUser::enPermissions::pShowLogsScreen))
			return;

		vector<stUserLogs> vAllLogs = _GetAllLogs();

		string title = "\tLogin Register List Screen";
		string subTitle = "	  (" + to_string(vAllLogs.size()) + ") Record(s).";

		_DrawScreenHeader(title,subTitle);
		_PrintLogsTable(vAllLogs);
	}

};