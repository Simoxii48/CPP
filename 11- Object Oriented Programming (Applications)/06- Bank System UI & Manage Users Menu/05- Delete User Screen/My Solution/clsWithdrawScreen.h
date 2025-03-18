#pragma once

#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsScreen.h"

using namespace std;

class clsWithdrawScreen : protected clsScreen
{
private:
    static void _Print(clsBankClient Client)
    {
        cout << "\nClient Card:";
        cout << "\n___________________";
        cout << "\nFirstName   : " << Client.FirstName;
        cout << "\nLastName    : " << Client.LastName;
        cout << "\nFull Name   : " << Client.FullName();
        cout << "\nEmail       : " << Client.Email;
        cout << "\nPhone       : " << Client.Phone;
        cout << "\nAcc. Number : " << Client.AccountNumber();
        cout << "\nPassword    : " << Client.PinCode;
        cout << "\nBalance     : " << Client.AccountBalance;
        cout << "\n___________________\n";
    }

    static string _ReadAccountNumber()
    {
        cout << "Please enter Your Account Number : ";
        return clsInputValidate::ReadString();
    }

public:
	static void ShowWithdrawScreen()
	{
        _DrawScreenHeader("\t   Withdraw Screen");

        string AccountNumber = _ReadAccountNumber();

        while (!clsBankClient::IsClientExist(AccountNumber))
        {
            cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
            AccountNumber = _ReadAccountNumber();
        }

        clsBankClient Client = clsBankClient::Find(AccountNumber);
        _Print(Client);

        double Amount = 0;
        cout << "\nPlease enter withdraw amount : ";
        Amount = clsInputValidate::ReadDblNumber();

        cout << "\nAre you sure you want to perform this transaction ? (y/n) : ";
        char answer = 'n';
        cin >> answer;

        if (tolower(answer) == 'y')
        {
            if (Client.Withdraw(Amount))
            {
                cout << "\nAmount withdrawed successfully.\n";
                cout << "New balance is : " << Client.AccountBalance << endl << endl;
            }
            else
            {
                cout << "\nSorry The amount exceeds the balance." << endl;
                cout << "Requested Amount To Withdraw : " << Amount << endl;
                cout << "Your Available Balance       : " << Client.AccountBalance << endl;
            }
        }
        else
        {
            cout << "\nOperation was cancelled.\n";
        }
	}
};