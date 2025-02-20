#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

// file data directory
const string fileName = "MyRecords.txt";

// Client Infos
struct stClient {
    string AccountNumber = "";
    string PinCode = "";
    string FullName = "";
    string Phone = "";
    float AccountBalance = 0;
};

// util func to split a string
vector<string> splitString(string s, string delim)
{
    vector<string> vWordsInString = {};
    string word = "";
    short pos = 0;

    while ((pos = s.find(delim)) != string::npos)
    {
        word = s.substr(0, pos);
        if (word != "")
        {
            vWordsInString.push_back(word);
        }
        s.erase(0, pos + delim.length());
    }
    if (s != "")
    {
        vWordsInString.push_back(s);
    }

    return vWordsInString;
}

// util func to convert string to struct
stClient convertLineToClientRecord(string line, string delim="#//#")
{
    stClient client;
    vector<string> vclientData;

    vclientData = splitString(line, delim);

    client.AccountNumber = vclientData[0];
    client.PinCode = vclientData[1];
    client.FullName = vclientData[2];
    client.Phone = vclientData[3];
    client.AccountBalance = stof(vclientData[4]);

    return client;
}

// util func to convert struct to string
string convertRecordToLine(stClient client,string delim="#//#")
{
    string record = "";

    record += client.AccountNumber + delim;
    record += client.PinCode + delim;
    record += client.FullName + delim;
    record += client.Phone + delim;
    record += to_string(client.AccountBalance);

    return record;
}

// load all existing clients from the file
vector<stClient> loadAllClients()
{
    vector<stClient> vAllClients = {};
    fstream myFile;
    
    myFile.open(fileName, ios::in);
    
    if (myFile.is_open())
    {
        string line = "";
        stClient client;

        while (getline(myFile, line))
        {
            client = convertLineToClientRecord(line);
            vAllClients.push_back(client);
        }
        myFile.close();
    }

    return vAllClients;
}

// procedure to print client data on screen
void printClientCard(stClient client)
{
    cout << "\nThe following are the client details :\n";
    cout << "\nAccount Number : " << client.AccountNumber;
    cout << "\nPin Code : " << client.PinCode;
    cout << "\nFull Name : " << client.FullName;
    cout << "\nPhone : " << client.Phone;
    cout << "\nAccount Balance : " << client.AccountBalance;
}

// find any client by acc number
bool findClientByAccountNumber(string accountNumber, vector<stClient> vAllClients, stClient& client)
{
    for (stClient& C : vAllClients)
    {
        if (C.AccountNumber == accountNumber)
        {
            client = C;
            return true;
        }
    }
    return false;
}

// update client data
void update(stClient& client)
{
    cout << "\nEnter your new PinCode : ";
    cin >> client.PinCode;

    cout << "Enter your new Name : ";
    cin.ignore(1, '\n');
    getline(cin, client.FullName);

    cout << "Enter your new Phone : ";
    cin.ignore(1, '\n');
    cin >> client.Phone;

    cout << "Enter your new Account Balance : ";
    cin >> client.AccountBalance;

}

// save new edits in the vector
vector<stClient> saveClientDataToFile(vector<stClient> vAllClients,stClient client)
{
    fstream myFile;
    myFile.open(fileName, ios::out);

    if (myFile.is_open())
    {
        
        for (stClient& C : vAllClients)
        {
            if (C.AccountNumber == client.AccountNumber) {
                C = client;
            }
            string line = convertRecordToLine(C);
            myFile << line << endl;
        }
        myFile.close();
    }
    return vAllClients;
}

// update client by account number
bool updateClientByAccountNumber(string accountNumber, vector<stClient>& vAllClients)
{
    char confirmeEdits = 'n';
    stClient client;

    if (findClientByAccountNumber(accountNumber, vAllClients, client))
    {
        printClientCard(client);
        cout << "\n\nAre you sure you want to Update this client (y/n) : ";
        cin >> confirmeEdits;

        if (tolower(confirmeEdits) == 'y')
        {
            update(client);
            saveClientDataToFile(vAllClients,client);

            // refresh
            vAllClients = loadAllClients();
            cout << "\n Client Updated Successfully.\n";
            return true;
        }
    }
    else
    {
        cout << "\n The Account Number (" << accountNumber << ") is Not found !" << endl;
        return false;
    }
}

// read account number from the user
string readAccountNumber()
{
    string acc = "";
    cout << "Please enter your Account Number : ";
    cin >> acc;
    return acc;
}

int main()
{
    string accountNum = readAccountNumber();
    vector<stClient> vAllClients = loadAllClients();

    updateClientByAccountNumber(accountNum, vAllClients);
}