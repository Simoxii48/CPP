#pragma once

#include <fstream>
#include <string>
#include "clsBankClient.h"
#include "clsDate.h"
#include "Global.h"


class clsRegisterTransferLog
{private:
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

	static string _ConvertStructTransferDataToLine(stTranfserLogData TransferLog, string delim = "#//#")
	{
		string LogDataLine = "";
		
		LogDataLine += clsDate::GetSystemDateHour() + delim;
		LogDataLine += TransferLog.ClientSenderAccNumber + delim;
		LogDataLine += TransferLog.ClientRecieverAccNumber + delim;
		LogDataLine += to_string(TransferLog.AmountTransferred) + delim;
		LogDataLine += to_string(TransferLog.ClientSenderAfterTransfer) + delim;
		LogDataLine += to_string(TransferLog.ClientRecieverAfterTransfer) + delim;
		LogDataLine += TransferLog.UserMadeTheTransfer;

		return LogDataLine;
	}

	static stTranfserLogData _FillStructWithLogData(clsBankClient Sender, clsBankClient Reciever, float Amount)
	{
		stTranfserLogData stLog;

		stLog.ClientSenderAccNumber = Sender.AccountNumber();
		stLog.ClientRecieverAccNumber = Reciever.AccountNumber();
		stLog.AmountTransferred = Amount;
		stLog.ClientSenderAfterTransfer = Sender.AccountBalance;
		stLog.ClientRecieverAfterTransfer = Reciever.AccountBalance;
		stLog.UserMadeTheTransfer = CurrentUser.UserName;

		return stLog;
	}

public:
	static void RegisterTransferLog(clsBankClient ClientSender,clsBankClient ClientReciever,float Amount)
	{
		fstream myFile;
		myFile.open("TransferLog.txt", ios::out | ios::app);

		stTranfserLogData stLog = _FillStructWithLogData(ClientSender, ClientReciever, Amount);

		if (myFile.is_open())
		{
			string logLine = _ConvertStructTransferDataToLine(stLog);
			myFile << logLine << endl;

			myFile.close();
		}
	}
};