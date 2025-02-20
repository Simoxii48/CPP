#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// file name directory variable
const string fileName = "MyRecords.txt";

// client data
struct stClientCard 
{
    string AccountNumber = "";
    string PinCode = "";
    string FullName = "";
    string PhoneNumber = "";
    float AccountBalance = 0;
};

// read the acc number from the user
string readAccountNumber()
{
    string accNum = "";
    cout << "Please enter The Account Number : ";
    cin >> accNum;
    return accNum;
}

// convert a line of string to struct
stClientCard ConvertLineToSt(vector<string> lineClient)
{
    stClientCard client;

    client.AccountNumber = lineClient[0];
    client.PinCode = lineClient[1];
    client.FullName = lineClient[2];
    client.PhoneNumber = lineClient[3];
    client.AccountBalance = stof(lineClient[4]);

    return client;
}

// util function to split a given string to vector of strings
vector<string> splitString(string line, string delim = "#//#")
{
    vector<string> record = {};
    string data = "";
    short pos = 0;

    while ((pos = line.find(delim)) != string::npos)
    {
        data = line.substr(0, pos);
        if (data != "")
        {
            record.push_back(data);
        }
        line.erase(0, pos + delim.length());
    }

    if (line != "")
    {
        record.push_back(line);
    }

    return record;
}

// get all existing clients and save them in a vector of str
vector<stClientCard> getAllAccounts()
{
    vector<stClientCard> vAllClients = {};
    string client = "";

    fstream myFile;
    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        while (getline(myFile, client))
        {
            vector<string> record = splitString(client);
            stClientCard stClient = ConvertLineToSt(record);
            vAllClients.push_back(stClient);
        }

        myFile.close();
    }

    return vAllClients;
}

// call the allAccounts here 
vector<stClientCard> vAllClients = getAllAccounts();

bool isAccountFound(string accountNumber, stClientCard& client)
{
    vector<stClientCard> allClients = vAllClients;
    
    for (stClientCard& C : allClients)
    {
        if (C.AccountNumber == accountNumber)
        {
            client = C;
            return true;
        }
    }
    return false;
}

void printClientData(stClientCard client)
{
    cout << "\n\nThe following are the client details :\n";
    cout << "Account Number : " << client.AccountNumber << endl;
    cout << "Pin Code       : " << client.PinCode << endl;
    cout << "Full Name      : " << client.FullName << endl;
    cout << "Phone Number   : " << client.PhoneNumber << endl;
    cout << "Account Balance: " << client.AccountBalance << endl;
}

bool checkUserChoice(char choice)
{
    return toupper(choice) == 'Y';
}

void printNotFountUser(string accountNumber) {
    cout << "\nClient with Account Number (" << accountNumber << ") Not Found !" << endl;
}

vector<stClientCard> deleteClientfromVector(string accountNumber)
{
    stClientCard client;
    char confirmeDeletion = 'n';    
    
    if (isAccountFound(accountNumber, client))
    {
        printClientData(client);
        cout << "\nAre you sure you want to delete this client (y/n) : ";
        cin >> confirmeDeletion;

        if (checkUserChoice(confirmeDeletion))
        {
            vector<stClientCard>::iterator iter = vAllClients.begin();
            short i = 0;

            while (iter != vAllClients.end())
            {
                if (iter[0].AccountNumber == client.AccountNumber)
                {
                    vAllClients.erase(vAllClients.begin() + i);
                    cout << "\nClient Deleted Successfully.\n";
                    return vAllClients;
                }
                iter++;
                i++;
            }
        }
    }
    else
    {
        printNotFountUser(accountNumber);
    }

    return vAllClients;
}

// convert a struct to string line
string ConvertStToString(stClientCard client, string delim="#//#")
{
    string lineClient;

    lineClient += client.AccountNumber + delim;
    lineClient += client.PinCode + delim;
    lineClient += client.FullName + delim;
    lineClient += client.PhoneNumber + delim;
    lineClient += to_string(client.AccountBalance);

    return lineClient;
}

void deleteClient(string accountNumber)
{
    fstream myFile;
    vector<stClientCard> newClientList = deleteClientfromVector(accountNumber);
    string line = "";

    myFile.open(fileName, ios::out);
        
    if (myFile.is_open()) 
    {
        for (stClientCard& client : newClientList)
        {
            line = ConvertStToString(client);
            myFile << line << endl;
        }
    }
        
    myFile.close();
}

int main()
{
    string accountNumber = readAccountNumber();
    
    deleteClient(accountNumber);

}