#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"

using namespace std;

void DeleteClient()
{
    string AccountNumber = "";

    cout << "\nPlease enter the Account Number : ";
    AccountNumber = clsInputValidate::ReadString();

    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount Number is not found !, Please enter a valid Account Number : ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient ClientToDelete = clsBankClient::Find(AccountNumber);
    ClientToDelete.Print();

    cout << "\nAre you sure you want to delete this Client y/n : ";
    char Answer = 'n';
    cin >> Answer;

    if (tolower(Answer) == 'y')
    {
        if (ClientToDelete.Delete())
        {
            cout << "\nClient Deleted Successfully :)\n";
            ClientToDelete.Print();
        }
        else
        {
            cout << "\nError Client was not Deleted :(\n";
        }
    }
}

int main()
{
    DeleteClient();
}