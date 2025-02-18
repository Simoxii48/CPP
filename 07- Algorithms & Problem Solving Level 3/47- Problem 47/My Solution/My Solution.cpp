#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct stClient {
    string AccountNumber = "";
    string PinCode = "";
    string FullName = "";
    string Phone = "";
    float AccountBalance = 0;
};

stClient readClient() {
    stClient client;

    cout << "Enter Account Number : ";
    getline(cin, client.AccountNumber);

    cout << "Enter Pin Code : ";
    getline(cin, client.PinCode);

    cout << "Enter Full Name : ";
    getline(cin, client.FullName);

    cout << "Enter Phone : ";
    getline(cin, client.Phone);

    cout << "Enter Account Balance : ";
    cin >> client.AccountBalance;

    return client;
}

string convertRecordToStringLine(stClient client, string delim = "#//#")
{
    string record = "";

    record += client.AccountNumber + delim;
    record += client.PinCode + delim;
    record += client.FullName + delim;
    record += client.Phone + delim;
    record += to_string(client.AccountBalance);

    return record;
}

void saveRecordToFile(string record)
{
    fstream myFile;
    
    myFile.open("MyRecords.txt", ios::out | ios::app);

    if (myFile.is_open())
    {
        myFile << record << endl;

        myFile.close();
    }
}

void clearConsole()
{
    system("cls");
    system("color 0F");
}

void fillClientInSystem() {
    char readMore = 'y';
    
    while (readMore == 'y' || readMore == 'Y')
    {
        clearConsole();

        cout << "Adding New Client :\n\n";
        stClient client = readClient();
        string record = convertRecordToStringLine(client);
        saveRecordToFile(record);

        cout << "\nClient Added Successfully, Do you want to add more clients (y/n) : ";
        cin >> readMore;
        cin.ignore(1, '\n');
    }
}

int main()
{
    fillClientInSystem();
}