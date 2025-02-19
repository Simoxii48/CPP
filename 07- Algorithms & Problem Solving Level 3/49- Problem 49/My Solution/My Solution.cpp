#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

const string fileName = "MyRecords.txt";

struct stClient {
    string AccountNumber = "";
    string PinCode = "";
    string FullName = "";
    string Phone = "";
    float AccountBalance = 0;
};

string splitAccountNumber(string data, string delim = "#//#")
{
    string clientAccountNumber = "";
    short pos = data.find(delim);
    
    for (int i = 0; i < pos; i++)
    {
        clientAccountNumber = data.substr(0, pos);
        
        if (clientAccountNumber != "")
        {
            return clientAccountNumber;
        }
    }
    return "";
}

vector<string> getAccountsNumbers()
{
    fstream myFile;
    vector<string> accountsNumbers = {};
    
    myFile.open(fileName, ios::in);
    string line = "";

    if (myFile.is_open())
    {
        while (getline(myFile, line)) {
            accountsNumbers.push_back(splitAccountNumber(line));
        }

        myFile.close();
    }
    return accountsNumbers;
}

string readAccountNumberFromUser()
{
    string readAccount = "";
    cout << "Please enter Account Number : ";
    getline(cin, readAccount);
    return readAccount;
}

vector<string> splitAccountDetails(string account, string delim = "#//#")
{
    vector<string> accountDetails = {};
    string data = "";
    short pos = 0;

    while ((pos = account.find(delim)) != string::npos)
    {
        data = account.substr(0, pos);

        if (data != "")
        {
            accountDetails.push_back(data);
        }
        account.erase(0, pos + delim.length());
    }

    if (account != "")
    {
        accountDetails.push_back(account);
    }

    return accountDetails;
}

bool isAccountFound(string accountToCheck)
{
    vector<string> vAccounts = getAccountsNumbers();

    for (string& account : vAccounts)
    {
        if (accountToCheck == account) {
            return true;
        }
    }
    return false;
}

stClient stfillClientData(vector<string> accountDetails)
{
    stClient clientInfos;

    clientInfos.AccountNumber = accountDetails[0];
    clientInfos.PinCode = accountDetails[1];
    clientInfos.FullName = accountDetails[2];
    clientInfos.Phone = accountDetails[3];
    clientInfos.AccountBalance = stof(accountDetails[4]);

    return clientInfos;
}

void printClientInScreen(stClient clientDetails) {
    cout << "\n\nThe following are the client details :\n\n";
    
    cout << "Account Number : " << clientDetails.AccountNumber << endl;
    cout << "Pin Code       : " << clientDetails.PinCode << endl;
    cout << "Full Name      : " << clientDetails.FullName << endl;
    cout << "Phone Number   : " << clientDetails.Phone << endl;
    cout << "Account Balance: " << clientDetails.AccountBalance << endl;

    cout << endl;
}

void printNotFoundData(string accountToCheck)
{
    cout << "\n\n Client with account Number (" << accountToCheck << ") NOT Found !" << endl;
}

string getClientDetails(string account)
{
    fstream myFile;
    string line = "";
    vector<string> accountInRecords = getAccountsNumbers();
    short i = 0;

    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            if (account == accountInRecords[i])
                return line;
            i++;
        }
    }
    return "";
}

void printClientInfos(string accountToCheck)
{
    if (isAccountFound(accountToCheck))
    {
        string accountInfos = getClientDetails(accountToCheck);
        vector<string> accountDetails = splitAccountDetails(accountInfos);
        stClient clientDetails = stfillClientData(accountDetails);
        printClientInScreen(clientDetails);
    }
    else
        printNotFoundData(accountToCheck);
}

int main()
{
    string clientAccountNumber = readAccountNumberFromUser();
    
    printClientInfos(clientAccountNumber);
}