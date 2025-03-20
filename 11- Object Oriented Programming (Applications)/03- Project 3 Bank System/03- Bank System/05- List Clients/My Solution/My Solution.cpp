#include <iostream>
#include <iomanip>
#include "clsBankClient.h"

using namespace std;

void PrintClientRecordLine(clsBankClient Client)
{
    cout << "|" << setw(15) << left << Client.AccountNumber();
    cout << "|" << setw(30) << left << Client.FullName();
    cout << "|" << setw(12) << left << Client.Phone;
    cout << "|" << setw(20) << left << Client.Email;
    cout << "|" << setw(10) << left << Client.PinCode;
    cout << "|" << setw(12) << left << Client.AccountBalance;
}

void ShowClientsList()
{
    vector<clsBankClient> vClients  = clsBankClient::GetClientsList();
    
    cout << "" << setw(45) << "Client List (" << vClients.size() << ") Client(s)." << endl << endl;
    cout << "===================================================================================================" << endl << endl;
    cout << "|" << setw(15) << left << "Account Number";
    cout << "|" << setw(20) << left << "Client Name";
    cout << "|" << setw(12) << left << "Phone";
    cout << "|" << setw(20) << left << "Email";
    cout << "|" << setw(10) << left << "PinCode";
    cout << "|" << setw(12) << left << "Balance";
    cout << "\n\n===================================================================================================" << endl;

    if (vClients.empty())
    {
        cout << "" << setw(45) << left << "No Clients Available In The System!";
    }
    else
    {
        for (clsBankClient& C : vClients)
        {
            PrintClientRecordLine(C);
            cout << endl;
        }
    }
    cout << "\n\n===================================================================================================" << endl;

}

int main()
{
    ShowClientsList();
}