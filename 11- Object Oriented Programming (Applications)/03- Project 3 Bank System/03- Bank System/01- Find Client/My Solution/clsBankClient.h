#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "clsString.h"
#include "clsPerson.h"

using namespace std;

class clsBankClient : public clsPerson
{
private:
	enum enMode { EmptyMode = 0, UpdateMode = 1 };
	enMode _Mode;

	string _AccountNumber;
	string _PinCode;
	float _AccountBalance;

	static clsBankClient _ConvertLineToClientObject(string line, string seperator = "#//#")
	{
		vector<string> vClientData = clsString::Split(line, seperator);
		return clsBankClient(enMode::UpdateMode, vClientData[0], vClientData[1], vClientData[2], vClientData[3], vClientData[4], vClientData[5], stof(vClientData[6]));
	}

	static clsBankClient _GetEmptyClientObject()
	{
		return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0);
	}


public:
	clsBankClient(enMode Mode,string FirstName, string LastName, string Email, string Phone, string AccNumber, string PinCode, float AccBalance) : clsPerson(FirstName, LastName, Email, Phone)
	{
		_Mode = Mode;
		_AccountNumber = AccNumber;
		_PinCode = PinCode;
		_AccountBalance = AccBalance;
	}

	bool IsEmpty()
	{
		return (_Mode == enMode::EmptyMode);
	}

	void Print()
	{
		cout << "\n\tClient Card : " << endl << endl;
		cout << "----------------------------------" << endl;
		cout << " FirstName	: " << FirstName << endl;
		cout << " LastName	: " << LastName << endl;
		cout << " Email		: " << Email << endl;
		cout << " Phone		: " << Phone << endl;
		cout << " Account Number	: " << getAccNumber() << endl;
		cout << " PinCode	: " << PinCode << endl;
		cout << " Account Balance: " << AccountBalance << endl;
		cout << "----------------------------------" << endl;
	}

	string getAccNumber()
	{
		return _AccountNumber;
	}

	string getPinCode()
	{
		return _PinCode;
	}

	void setPinCode(string newPinCode)
	{
		_PinCode = newPinCode;
	}

	__declspec(property(get = getPinCode, put = setPinCode)) string PinCode;

	float getAccBalance()
	{
		return _AccountBalance;
	}

	void setAccBalance(float newBalance)
	{
		_AccountBalance = newBalance;
	}

	__declspec(property(get = getAccBalance, put = setAccBalance)) float AccountBalance;

	static clsBankClient Find(string accountNumber)
	{
		vector<clsBankClient> vClients;

		fstream myFile;
		myFile.open("Clients.txt", ios::in);

		if (myFile.is_open())
		{
			string line;
			while (getline(myFile, line))
			{
				clsBankClient client = _ConvertLineToClientObject(line);
				if (client.getAccNumber() == accountNumber)
				{
					myFile.close();
					return client;
				}
				vClients.push_back(client);
			}
			myFile.close();
		}

		return _GetEmptyClientObject();
	}

	static clsBankClient Find(string accountNumber, string pinCode)
	{
		vector<clsBankClient> vClients;

		fstream myFile;
		myFile.open("Clients.txt", ios::in);

		if (myFile.is_open())
		{
			string line;
			while (getline(myFile, line))
			{
				clsBankClient client = _ConvertLineToClientObject(line);
				if (client.getAccNumber() == accountNumber && client.PinCode == pinCode)
				{
					myFile.close();
					return client;
				}
				vClients.push_back(client);
			}
			myFile.close();
		}

		return _GetEmptyClientObject();
	}

	static bool IsClientExist(string AccountNumber)
	{
		clsBankClient client = Find(AccountNumber);
		return (!client.IsEmpty());
	}
};