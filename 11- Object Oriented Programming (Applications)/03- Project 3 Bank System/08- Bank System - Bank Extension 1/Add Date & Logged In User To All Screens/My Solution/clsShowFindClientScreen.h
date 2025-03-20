#pragma once

#include <iostream>
#include "clsBankClient.h"
#include "clsScreen.h"

using namespace std;

class clsShowFindClientScreen : protected clsScreen
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

public:
	static void ShowFindClientScreen()
	{
        if (!CheckAccessRights(clsUser::enPermissions::pFindClient))
            return;

        _DrawScreenHeader("\t    Find Client Screen");
        string AccountNumber = "";

        cout << "\nPlease Enter client Account Number: ";
        AccountNumber = clsInputValidate::ReadString();

        while (!clsBankClient::IsClientExist(AccountNumber))
        {
            cout << "\nAccount Number is not found! Please enter a valid Account number : ";
            AccountNumber = clsInputValidate::ReadString();
        }
        
        clsBankClient Client = clsBankClient::Find(AccountNumber);

        cout << "\nClient Found :-)\n";
        _Print(Client);
	}

};