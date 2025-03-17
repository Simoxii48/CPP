#pragma once

#include <iostream>
#include <iomanip>
#include "clsScreen.h"
#include "clsBankClient.h"

using namespace std;

class clsClientListScreen : protected clsScreen
{
private:
	static void _PrintClientRecordLine(clsBankClient Client)
	{
        cout << setw(8) << left << "" << "|" << setw(15) << left << Client.AccountNumber();
        cout << "|" << setw(30) << left << Client.FullName();
        cout << "|" << setw(12) << left << Client.Phone;
        cout << "|" << setw(20) << left << Client.Email;
        cout << "|" << setw(10) << left << Client.PinCode;
        cout << "|" << setw(12) << left << Client.AccountBalance;
	}

public:
	static void ShowClientsList()
	{
		vector<clsBankClient> vClients = clsBankClient::GetClientsList();
		string Title = "\t  Client List Screen";
		string SubTitle = "\t     (" + to_string(vClients.size()) + ") Clients.";

		_DrawScreenHeader(Title, SubTitle);

        cout << setw(8) << left << "" << "===================================================================================================" << endl << endl;
        cout << setw(8) << left << "" << "|" << setw(15) << left << "Account Number";
        cout << "|" << setw(30) << left << "Client Name";
        cout << "|" << setw(12) << left << "Phone";
        cout << "|" << setw(20) << left << "Email";
        cout << "|" << setw(10) << left << "PinCode";
        cout << "|" << setw(12) << left << "Balance";
        cout << endl << endl;
        cout << setw(8) << left << "" << "===================================================================================================" << endl;

        if (vClients.empty())
        {
            cout << "" << setw(45) << left << "No Clients Available In The System!";
        }
        else
        {
            for (clsBankClient& C : vClients)
            {
                _PrintClientRecordLine(C);
                cout << endl;
            }
        }
        cout << "\n\n";
        cout << setw(8) << left << "" << "===================================================================================================" << endl;
	}
};

