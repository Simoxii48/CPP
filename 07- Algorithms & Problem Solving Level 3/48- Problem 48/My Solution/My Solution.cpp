#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

const string fileName = "MyRecords.txt";

// Client structure
struct stClient
{
    string AccountNumber = "";
    string PinCode = "";
    string FullName = "";
    string Phone = "";
    float AccountBalance = 0;
};

// save the clients data from the file to one vector
vector<string> readClientsFromFileToVector(string fileName)
{
    fstream myFile;
    myFile.open(fileName, ios::in);
    string line = "";

    vector<string> lines = {};
    
        if (myFile.is_open())
    {
            while (getline(myFile, line))
            {
                lines.push_back(line);
            }

        myFile.close();
    }

    return lines;
}

// split each word in a given string vector
vector<string> splitString(string Record, string delim = "#//#")
{
    vector<string> vRecord = {};
    string data = "";
    short pos = 0;

    while ((pos = Record.find(delim)) != string::npos)
    {
        data = Record.substr(0, pos);
        if (data != "")
        {
            vRecord.push_back(data);
        }
        Record.erase(0, pos + delim.length());
    }
    if (Record != "")
    {
        vRecord.push_back(Record);
    }

    return vRecord;
}

// vector with x indexes with each user seperate
vector<string> saveClientsToStrings()
{
    vector<string> vClients = readClientsFromFileToVector(fileName);
    vector<string> vClientsRecords = {};
    
    for (string& client : vClients) {
        vClientsRecords.push_back(client);
    }
 
    return vClientsRecords;
}

// save each user in a struct
vector<stClient> fillClient()
{
    stClient oneClientData;
    vector<string> Records = saveClientsToStrings();
    vector<stClient> Client = {};

    for (string& clientData : Records)
    {
        vector<string> clientDetails = splitString(clientData);

        oneClientData.AccountNumber = clientDetails[0];
        oneClientData.PinCode = clientDetails[1];
        oneClientData.FullName = clientDetails[2];
        oneClientData.Phone = clientDetails[3];
        oneClientData.AccountBalance = stof(clientDetails[4]);

        Client.push_back(oneClientData);
    }

    return Client;
}

void printHeader()
{
    // Setw() Manipulator revision

    cout << "------------------------------------------------------------------------------------" << endl ;
    cout << "|" << setw(1) << "" << setw(14) << "Account Number" << setw(1) << "";
    cout << "|" << setw(1) << "" << setw(8) << "Pin Code" << setw(1) << "";
    cout << "|" << setw(1) << "" << setw(11) << "Client Name" << setw(17) << "";
    cout << "|" << setw(1) << "" << setw(5) << "Phone" << setw(7) << "";
    cout << "|" << setw(1) << "" << setw(7) << "Balance" << setw(2) << "" << "|" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
}

void printClientsListNumber(vector<stClient> clientNumbers)
{
    cout << setw(40) << "Client List (" << clientNumbers.size() << ") Client(s)." << setw(40) << endl;
}

void printClientData()
{
    vector<stClient> vClients = fillClient();

    printClientsListNumber(vClients);
    printHeader();

    for (stClient& client : vClients)
    {
        cout << "|" << setw(1) << "" << client.AccountNumber << setw(10) << "";
        cout << "|" << setw(1) << "" << client.PinCode << setw(5) << "";
        cout << "|" << setw(1) << "" << client.FullName << setw(28 - client.FullName.length()) << "";
        cout << "|" << setw(1) << "" << client.Phone << setw(12- client.Phone.length()) << "";
        cout << "|" << setw(1) << "" << client.AccountBalance << setw(17 - to_string(client.AccountBalance).length()) << "|" << endl;
    }
}

int main()
{
    printClientData();
}