#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include "clsScreen.h"
#include "clsRegisterTransferLog.h"
#include "clsString.h"


using namespace std;

class clsTransferLogScreen : protected clsScreen
{
private:
	struct stTranfserLogData
	{
		string TransferDateHour;
		string ClientSenderAccNumber;
		string ClientRecieverAccNumber;
		float AmountTransferred;
		float ClientSenderAfterTransfer;
		float ClientRecieverAfterTransfer;
		string UserMadeTheTransfer;
	};

	static vector<stTranfserLogData> getAllLogs()
	{
		vector<stTranfserLogData> vAllLogs;

		fstream myFile;
		myFile.open("TransferLog.txt", ios::in);
		
		string lineLog = "";
		if (myFile.is_open())
		{
			while (getline(myFile, lineLog))
			{
				stTranfserLogData sLog = _ConvertLineToStruct(lineLog);
				vAllLogs.push_back(sLog);
			}

			myFile.close();
		}

		return vAllLogs;
	}

	static stTranfserLogData _ConvertLineToStruct(string line, string delim = "#//#")
	{
		stTranfserLogData sLog;
		vector<string> vLog = clsString::Split(line,delim);

		sLog.TransferDateHour = vLog[0];
		sLog.ClientSenderAccNumber = vLog[1];
		sLog.ClientRecieverAccNumber = vLog[2];
		sLog.AmountTransferred = stof(vLog[3]);
		sLog.ClientSenderAfterTransfer = stof(vLog[4]);
		sLog.ClientRecieverAfterTransfer = stof(vLog[5]);
		sLog.UserMadeTheTransfer = vLog[6];

		return sLog;
	}

	static void _PrintHeader()
	{
		cout << setw(8) << left << "" << "===========================================================================================\n";
		cout << setw(8) << left << "" << "|" << setw(25) << left << "Date/Time";
		cout << "|" << setw(10) << "S.Acc";
		cout << "|" << setw(10) << "R.Acc";
		cout << "|" << setw(9) << "Amount";
		cout << "|" << setw(11) << "S.Balance";
		cout << "|" << setw(11) << "R.Balance";
		cout << "|" << setw(8) << "User";
		cout << endl;
		cout << setw(8) << left << "" << "===========================================================================================\n";
	}

	static void _PrintLog(stTranfserLogData Log)
	{
		cout << setw(8) << left << "" << "|" << setw(25) << Log.TransferDateHour;
		cout << "|" << setw(10) << left << Log.ClientSenderAccNumber;
		cout << "|" << setw(10) << left << Log.ClientRecieverAccNumber;
		cout << "|" << setw(9) << left << Log.AmountTransferred;
		cout << "|" << setw(11) << left << Log.ClientSenderAfterTransfer;
		cout << "|" << setw(11) << left << Log.ClientRecieverAfterTransfer;
		cout << "|" << setw(8) << left << Log.UserMadeTheTransfer;
	}

	static void _PrintLogsTable()
	{
		vector<stTranfserLogData> vAllLogs = getAllLogs();
		
		string title = "	Transfer Log List Screen";
		string subTitle = "\t  (" + to_string(vAllLogs.size()) + ") Record(s).";

		_DrawScreenHeader(title, subTitle);
		_PrintHeader();

		if (vAllLogs.empty())
		{
			cout << setw(15) << left << "" << "Sorry, No available transfer logs to display." << endl;
		}

		for (stTranfserLogData& Log : vAllLogs)
		{
			_PrintLog(Log);
			cout << endl;
		}

		cout << setw(8) << left << "" << "===========================================================================================\n";
	}

public:
	static void ShowTransferLogScreen()
	{
		_PrintLogsTable();
	}
};