#pragma once

#include <iostream>
#include <iomanip>
#include "clsScreen.h"
#include "clsBankClient.h"
#include "clsUtil.h"

using namespace std;

class clsTotalBalancesScreen : protected clsScreen
{
private:
	static void _PrintClientRecordBalanceLine(clsBankClient Client)
	{

		cout << setw(25) << left << "" << "| " << setw(15) << left << Client.AccountNumber();
		cout << "| " << setw(40) << left << Client.FullName();
		cout << "| " << setw(12) << left << Client.AccountBalance;

	}


public:
	static void ShowTotalBalances()
	{
        vector <clsBankClient> vClients = clsBankClient::GetClientsList();

        string title = "\t   Balances List Screen";
        string subTitle = "\t   (" + to_string(vClients.size()) + ") Client(s).";

        cout << setw(25) << left << "" << "\n_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(25) << left << "" << "| " << left << setw(15) << "Accout Number";
        cout << "| " << left << setw(40) << "Client Name";
        cout << "| " << left << setw(12) << "Balance";
        cout << setw(25) << left << "" << "\n_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        double TotalBalances = clsBankClient::GetTotalBalances();

        if (vClients.size() == 0)
            cout << "\t\t\t\tNo Clients Available In the System!";
        else

            for (clsBankClient& Client : vClients)
            {
                _PrintClientRecordBalanceLine(Client);
                cout << endl;
            }

        cout << setw(25) << left << "" << "\n_______________________________________________________";
        cout << "_________________________________________\n" << endl;
        cout << "\t\t\t\t\t   Total Balances = " << TotalBalances << endl;
        cout << "\t\t\t\t\t   ( " << clsUtil::NumberToText(TotalBalances) << ")";
	}
};