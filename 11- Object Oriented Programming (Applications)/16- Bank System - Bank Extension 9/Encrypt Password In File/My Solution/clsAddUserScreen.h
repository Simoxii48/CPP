#pragma once

#include <iostream>
#include <fstream>
#include "clsInputValidate.h"
#include "clsScreen.h"
#include "clsUser.h"
#include "clsString.h"

using namespace std;

class clsAddUserScreen : protected clsScreen
{
private:
    static void _ReadClientInfo(clsUser& User)
    {
        cout << "\nEnter FirstName: ";
        User.FirstName = clsInputValidate::ReadString();

        cout << "\nEnter LastName: ";
        User.LastName = clsInputValidate::ReadString();

        cout << "\nEnter Email: ";
        User.Email = clsInputValidate::ReadString();

        cout << "\nEnter Phone: ";
        User.Phone = clsInputValidate::ReadString();

        cout << "\nEnter Password: ";
        User.Password = clsInputValidate::ReadString();

        cout << "\nEnter Permissions: ";
        User.Permissions =_ReadPermissions();
    }

    static int _ReadPermissions()
    {
        int Permissions = 0;
        char answer = 'n';

        cout << "\nDo you want to give full access (y/n) : ";
        cin >> answer;

        if (tolower(answer) == 'y')
            return -1;

        cout << "\nDo you want to give access to : \n";
        cout << "Show Clients List (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pListClients;

        cout << "Add New Client (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pAddNewClient;

        cout << "Delete Client (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pDeleteClient;

        cout << "Update Client (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pUpdateClient;

        cout << "Find Client (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pFindClient;

        cout << "Transactions (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pTransactions;

        cout << "Manage Users (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pManageUsers;

        cout << "Show Logs Register Screen (y/n) : ";
        cin >> answer;
        if (tolower(answer) == 'y')
            Permissions += clsUser::enPermissions::pShowLogsScreen;

        return Permissions;
    }

    static void _PrintClient(clsUser User)
    {
        cout << "\nUser Card:";
        cout << "\n___________________";
        cout << "\nFirstName   : " << User.FirstName;
        cout << "\nLastName    : " << User.LastName;
        cout << "\nFull Name   : " << User.FullName();
        cout << "\nEmail       : " << User.Email;
        cout << "\nPhone       : " << User.Phone;
        cout << "\nUserName    : " << User.UserName;
        cout << "\nPassword    : " << User.Password;
        cout << "\nPermissions  : " << User.Permissions;
        cout << "\n___________________\n";

    }

public:
	static void ShowAddNewUser()
	{
        _DrawScreenHeader("\t  Add New User Screen");

        string UserName = "";

        cout << "\nPlease Enter UserName : ";
        
        UserName = clsInputValidate::ReadString();
        while (clsUser::IsUserExist(UserName))
        {
            cout << "\nAccount Number Is Already Used, Choose another one: ";
            UserName = clsInputValidate::ReadString();
        }

        clsUser newUser = clsUser::GetAddNewUserObject(UserName);


        _ReadClientInfo(newUser);

        clsUser::enSaveResults SaveResult;

        SaveResult = newUser.Save();

        switch (SaveResult)
        {
        case  clsBankClient::enSaveResults::svSucceeded:
        {
            cout << "\nUser Addeded Successfully :-)\n";
            _PrintClient(newUser);
            break;
        }
        case clsBankClient::enSaveResults::svFaildEmptyObject:
        {
            cout << "\nError User was not saved because it's Empty";
            break;

        }
        case clsBankClient::enSaveResults::svFaildAccountNumberExists:
        {
            cout << "\nError User was not saved because UserName is used!\n";
            break;

        }
        }
	}
};