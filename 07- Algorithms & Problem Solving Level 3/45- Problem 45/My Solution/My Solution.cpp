#include <iostream>
#include <string>
#include <string>
using namespace std;

struct stClientBank {
    string accountNumber = "";
    short pinCode = 0;
    string fullName = "";
    string phone = "";
    float accountBalance = 0;
};

stClientBank readClientBank() {
    stClientBank client1;
    
    cout << "Please enter client data :\n\n";

    cout << "Enter account number : ";
    cin >> client1.accountNumber;

    cout << "Enter pincode : ";
    cin >> client1.pinCode;

    cout << "Enter fullName : ";
    cin.ignore(1, '\n');
    getline(cin, client1.fullName);

    cout << "Enter phone : ";
    cin >> client1.phone;

    cout << "Enter account balance : ";
    cin >> client1.accountBalance;

    return client1;
}

string joinString(stClientBank client1, string delim)
{
    string clientInfos = "";

    clientInfos += client1.accountNumber + delim;
    clientInfos += to_string(client1.pinCode) + delim;
    clientInfos += client1.fullName + delim;
    clientInfos += client1.phone + delim;
    clientInfos += to_string(client1.accountBalance);

    return clientInfos;
}

int main()
{
    stClientBank client1 = readClientBank();

    cout << "\nClient Record for saving is :\n" <<
        joinString(client1, "#//#") << endl;

}