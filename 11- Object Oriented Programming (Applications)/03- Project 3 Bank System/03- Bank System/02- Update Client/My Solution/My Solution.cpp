#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"

using namespace std;

void ReadClientInfo(clsBankClient& Client)
{
    cout << "\nEnter FirstName : ";
    Client.FirstName = clsInputValidate::readString();

    cout << "\nEnter LastName : ";
    Client.LastName = clsInputValidate::readString();

    cout << "\nEnter Email : ";
    Client.Email = clsInputValidate::readString();

    cout << "\nEnter Phone : ";
    Client.Phone = clsInputValidate::readString();

    cout << "\nEnter PinCode : ";
    Client.PinCode = clsInputValidate::readString();

    cout << "\nEnter Account Balance : ";
    Client.AccountBalance = clsInputValidate::ReadFloatNumber();
}

void UpdateClient()
{
    string accountNumber = "";

    cout << "\nPlease enter client account number : ";
    accountNumber = clsInputValidate::readString();

    while (!clsBankClient::IsClientExist(accountNumber))
    {
        cout << "\nAccount Number is not found, Please enter a valid account number : ";
        accountNumber = clsInputValidate::readString();
    }

    clsBankClient Client1 = clsBankClient::Find(accountNumber);
    Client1.Print();

    cout << "\n\nUpdate Client Info : \n\n";
    cout << "----------------------------------\n";
    ReadClientInfo(Client1);

    clsBankClient::enSaveResults SaveResult;
    SaveResult = Client1.Save();

    switch (SaveResult)
    {
    case clsBankClient::svSuccessed:
    {
        cout << "\nAccount Updated Successfully :)\n";
        Client1.Print();
        break;
    }
    case clsBankClient::svFailedEmptyObj:
    {
        cout << "\nError Account was not saved because of empty inputs :(\n";
        break;
    }
    }
}

int main()
{
    UpdateClient();
}