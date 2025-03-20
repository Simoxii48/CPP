#include <iostream>
#include <iomanip>
#include "clsBankClient.h"
#include "clsUtil.h"

void PrintClientRecordBalanceLine(clsBankClient Client)
{
	cout << "|" << setw(25) << left << Client.AccountNumber();
	cout << "|" << setw(50) << left << Client.FullName();
	cout << "|" << setw(15) << left << Client.AccountBalance;
}

void ShowTotalBalances()
{
	vector<clsBankClient> vClients = clsBankClient::GetClientsList();

    cout << "" << setw(45) << "Balances List (" << vClients.size() << ") Client(s)." << endl << endl;
    cout << "===================================================================================================" << endl << endl;
    cout << "|" << setw(25) << left << "Account Number";
    cout << "|" << setw(50) << left << "Client Name";
    cout << "|" << setw(15) << left << "Balance";
    cout << "\n\n===================================================================================================" << endl;
    
    if (vClients.size() > 0)
    {
        for (clsBankClient& C : vClients)
        {
            PrintClientRecordBalanceLine(C);
            cout << endl;
        }
    }
    else
    {
        cout << "" << setw(45) << left << "No Clients Available In The System!";
    }
    
    cout << "\n\n===================================================================================================" << endl << endl;
    double totalBalances = clsBankClient::GetTotalBalances();

    cout << "" << setw(50) << right << "Total Balances =";
    cout << "" << setw(10) << right << totalBalances << endl;

    cout << "" << setw(35) << right << "(" << clsUtil::NumberToText(totalBalances) << ")";

    cout << endl << endl;
}

int main()
{
	ShowTotalBalances();
}