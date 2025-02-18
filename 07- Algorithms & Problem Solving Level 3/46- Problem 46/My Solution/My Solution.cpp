#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient {
    string accountNumber = "";
    string pinCode = "";
    string fullName = "";
    string phone = "";
    float accountBalance = 0;
};

vector<string> splitString(string record, string delim = "#//#")
{
    vector<string> vRecord = {};
    string sepData = "";
    short pos = 0;

    while ((pos = record.find(delim)) != std::string::npos)
    {
        sepData = record.substr(0, pos);
        if (sepData != "")
        {
            vRecord.push_back(sepData);
        }
        record.erase(0, pos + delim.length());
    }

    if (record != "")
    {
        vRecord.push_back(record);
    }

    return vRecord;
}

stClient fillClientRecord(string record) {
    stClient client;
    vector<string> vRecord = splitString(record);

    client.accountNumber = vRecord[0];
    client.pinCode = vRecord[1];
    client.fullName = vRecord[2];
    client.phone = vRecord[3];
    client.accountBalance = stof(vRecord[4]);

    return client;
}

int main()
{
    string record = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079945632#//#5270.000000";
    stClient client = fillClientRecord(record);

    cout << "Line Record is :\n" << record << endl;

    cout << "\nThe following is the extracted client record :\n";
    cout << "\nAccount Number : " << client.accountNumber << endl;
    cout << "Pin Code : " << client.pinCode << endl;
    cout << "Full Name : " << client.fullName << endl;
    cout << "Phone : " << client.phone << endl;
    cout << "Account Balance : " << client.accountBalance << endl;
}