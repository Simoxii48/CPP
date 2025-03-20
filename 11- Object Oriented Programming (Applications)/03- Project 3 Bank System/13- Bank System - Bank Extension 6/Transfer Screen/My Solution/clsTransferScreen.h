#pragma once

#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include "clsInputValidate.h"

using namespace std;

class clsTransferScreen : protected clsScreen
{
private:
	static void _PrintClient(clsBankClient Client)
	{
		cout << "\n\nClient Card :\n\n";
		cout << "===============================" << endl;
		cout << "\nFull Name : " << Client.FullName();
		cout << "\nAcc. Num  : " << Client.AccountNumber();
		cout << "\nBalance   : " << Client.AccountBalance;
		cout << "\n\n===============================" << endl;
	}

public :
	static void _ShowTransferScreen()
	{
		_DrawScreenHeader("\t	Transfer Screen");
		
		cout << "\nPlease enter Acc. Number To Transfer From : ";
		string senderAccountNumber = clsInputValidate::ReadString();

		while (!clsBankClient::IsClientExist(senderAccountNumber))
		{
			cout << "\nSorry There is No Client With Account Number [" << senderAccountNumber << "], Enter A valid Acc. Number : ";
			senderAccountNumber = clsInputValidate::ReadString();
		}

		clsBankClient ClientSender = clsBankClient::Find(senderAccountNumber);
		_PrintClient(ClientSender);

		cout << "\nPlease enter Acc. Number To Transfer To : ";
		string recieverAccountNumber = clsInputValidate::ReadString();

		while (!clsBankClient::IsClientExist(recieverAccountNumber))
		{
			cout << "\nSorry There is No Client With Account Number [" << recieverAccountNumber << "], Enter A valid Acc. Number : ";
			recieverAccountNumber = clsInputValidate::ReadString();
		}

		clsBankClient ClientReciever = clsBankClient::Find(recieverAccountNumber);
		_PrintClient(ClientReciever);

		cout << "\nEnter Transfer Amount : ";
		float TransferAmount = clsInputValidate::ReadFloatNumber();
		
		while (ClientSender.checkBalance(TransferAmount))
		{
			cout << "\nSorry, The Amount Requested Exceeds The Availbale Balance, Enter Less Amount : ";
			TransferAmount = clsInputValidate::ReadFloatNumber();
		}

		char confirm = 'n';
		cout << "\nAre you sure you want to confirm this transaction (y/n) : ";
		cin >> confirm;

		if (tolower(confirm) == 'y')
		{
			ClientSender.Transfer(ClientReciever, TransferAmount);
			ClientReciever.Save();
			cout << "\nTransfer Done Successfully.";
		}
		_PrintClient(ClientSender);
		_PrintClient(ClientReciever);
	}
};