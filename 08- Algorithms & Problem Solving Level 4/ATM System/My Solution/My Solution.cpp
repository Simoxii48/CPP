#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// filename variable
const string fileName = "MyRecords.txt";

void showATMMainMenuScreen();
void loginScreen();

struct stClient {
    string AccountNumber = "";
    string PinCode = "";
    string FullName = "";
    string Phone = "";
    float AccountBalance = 0;
};

// global stClient
stClient currentUser;

vector<string> splitString(string w, string delim = "#//#")
{
    vector<string> vClient;
    string part = "";
    size_t pos = 0;

    while ((pos = w.find(delim)) != string::npos)
    {
        part = w.substr(0, pos);
        if (part != "")
        {
            vClient.push_back(part);
        }
        w.erase(0, pos + delim.length());
    }
    if (w != "")
    {
        vClient.push_back(w);
    }
    return vClient;
}

stClient convertClientLineToRecord(vector<string> client)
{
    stClient sClient;

    sClient.AccountNumber = client[0];
    sClient.PinCode = client[1];
    sClient.FullName = client[2];
    sClient.Phone = client[3];
    sClient.AccountBalance = stof(client[4]);

    return sClient;
}

string convertClientRecordToLine(stClient client, string delim = "#//#")
{
    string line = "";

    line = client.AccountNumber + delim;
    line += client.PinCode + delim;
    line += client.FullName + delim;
    line += client.Phone + delim;
    line += to_string(client.AccountBalance);

    return line;
}

vector<stClient> getAllClients()
{
    vector<stClient> vAllClients;
    stClient sClient;
    
    fstream myFile;
    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string line = "";
        while (getline(myFile, line))
        {
            vector<string> vClientDetails = splitString(line);
            sClient = convertClientLineToRecord(vClientDetails);
            vAllClients.push_back(sClient);
        }
    }
    myFile.close();

    return vAllClients;
}

bool loadUserInfo(string accNum, string pinCode)
{
    vector<stClient> vAllclients = getAllClients();

    for (stClient& Client : vAllclients)
    {
        if (Client.AccountNumber == accNum && Client.PinCode == pinCode)
        {
            currentUser = Client;
            return true;
        }
    }
    return false;
}

enum enATMMainMenuScreenChoice {
    enQuickWithdraw = 1,
    enNormalWithdraw = 2,
    enDeposit = 3,
    enCheckBalance = 4,
    enLogout = 5,
};

short atmMainMenuChoice()
{
    short choice = 0;
    do
    {
        cout << "Choose what do you want to do ? [1 to 5] : ";
        cin >> choice;
    } while (choice < 1 || choice>5);
    
    return choice;
}

void returnToATMMenuScreen()
{
    cout << "\nPress any key to return to ATM main menu screen ...";
    system("pause>0");
    system("cls");
    showATMMainMenuScreen();
}

enum enQuickWithdrawChoice {
    en20 = 1,
    en50 = 2,
    en100 = 3,
    en200 = 4,
    en400 = 5,
    en600 = 6,
    en800 = 7,
    en1000 = 8,
    enExit = 9,
};

short readQuickWithdrawAmount()
{
    short choice = 0;
    do
    {
        cout << "Choose what to withdraw from [1] to [9] : ";
        cin >> choice;
    } while (choice < 1 || choice>9);
    return choice;
}

bool confirmeTransaction()
{
    char confirme = 'n';
    cout << "\nAre you sure you want to perform this transaction y/n : ";
    cin >> confirme;

    return (tolower(confirme) == 'y');
}

bool isBalanceExceedsAmount(int amount)
{
    if (currentUser.AccountBalance < amount)
    {
        cout << "\nSorry The amount Exceeds the balance !\n";
        return true;
    }
    else
    {
        if (confirmeTransaction())
        {
            currentUser.AccountBalance -= amount;
            cout << "\nDone Successfully. new balance is : " << currentUser.AccountBalance << endl;
            return false;
        }
    }
}

void updateStClientBalance()
{
    fstream myFile;
    vector<stClient> vAllClients = getAllClients();
    
    myFile.open(fileName, ios::out);

    if (myFile.is_open())
    {
        string recordToLine = convertClientRecordToLine(currentUser);
        
        for (stClient& C : vAllClients)
        {
            if (C.AccountNumber == currentUser.AccountNumber)
            {
                myFile << recordToLine << endl;
            }
            else
            {
                myFile << convertClientRecordToLine(C) << endl;
            }
        }
    }
    myFile.close();
}

void performeQuickWithdraw(enQuickWithdrawChoice choice)
{
    switch (choice)
    {
    case en20:
        if (!isBalanceExceedsAmount(20))
            updateStClientBalance();
        break;
    case en50:
        if (!isBalanceExceedsAmount(50))
            updateStClientBalance();
        break;
    case en100:
        if (!isBalanceExceedsAmount(100))
            updateStClientBalance();
        break;
    case en200:
        if (!isBalanceExceedsAmount(200))
            updateStClientBalance();
        break;
    case en400:
        if (!isBalanceExceedsAmount(400))
            updateStClientBalance();
        break;
    case en600:
        if (!isBalanceExceedsAmount(600))
            updateStClientBalance();
        break;
    case en800:
        if (!isBalanceExceedsAmount(800))
            updateStClientBalance();
        break;
    case en1000:
        if (!isBalanceExceedsAmount(1000))
            updateStClientBalance();
        break;
    case enExit:
        returnToATMMenuScreen();
        break;
    }
}

void showQuickWithdrawScreen()
{
    system("cls");
    cout << "=====================================================" << endl;
    cout << setw(10) << "" << "Quick Withdraw Menu Screen" << endl;
    cout << "=====================================================" << endl;

    cout << setw(10) << "" << "[1] 20" << setw(16) << "" << "[2] 50" << endl;
    cout << setw(10) << "" << "[3] 100" << setw(15) << "" << "[4] 200" << endl;
    cout << setw(10) << "" << "[5] 400" << setw(15) << "" << "[6] 600" << endl;
    cout << setw(10) << "" << "[7] 800" << setw(15) << "" << "[8] 1000" << endl;
    cout << setw(10) << "" << "[9] Exit" << endl;
    cout << "=====================================================" << endl;

    cout << "Your Balance is " << currentUser.AccountBalance << endl;
    performeQuickWithdraw((enQuickWithdrawChoice)readQuickWithdrawAmount());

    returnToATMMenuScreen();
}

int readNormalWithdrawAmount()
{
    int amount = 0;
    
    do {
        cout << "\nEnter an amount multiple of 5's : ";
        cin >> amount;
    } while (amount % 5 != 0);
    
    return amount;
}

void showNormalWithdrawScreen()
{
    system("cls");
    cout << "=====================================================" << endl;
    cout << setw(10) << "" << "Normal Withdraw Menu Screen" << endl;
    cout << "=====================================================" << endl;

    if (!isBalanceExceedsAmount(readNormalWithdrawAmount()))
    {
        updateStClientBalance();
    }

    returnToATMMenuScreen();
}

float readDepositAmount()
{
    float amount = 0;
    do {
        cout << "\nEnter a positive Deposit Amount : ";
        cin >> amount;
    } while (amount <= 0);

    return amount;
}

void showDepositScreen()
{
    system("cls");
    cout << "=====================================================" << endl;
    cout << setw(15) << "" << "Deposit Menu Screen" << endl;
    cout << "=====================================================" << endl;
    
    float amount = readDepositAmount();
    
    if (confirmeTransaction())
    {
        currentUser.AccountBalance += amount;
        cout << "\nDone Successfully. New balance is : " << currentUser.AccountBalance << endl;
        updateStClientBalance();
    }

    returnToATMMenuScreen();
}

void showCheckBalanceScreen()
{
    system("cls");
    cout << "=====================================================" << endl;
    cout << setw(10) << "" << "Check Balance Menu Screen" << endl;
    cout << "=====================================================" << endl;

    printf("\n Your Balance is %.2f\n\n", currentUser.AccountBalance);

    returnToATMMenuScreen();
}

void switchATMMainMenuScreen(enATMMainMenuScreenChoice choice)
{
    switch (choice)
    {
    case enQuickWithdraw:
        showQuickWithdrawScreen();
        break;
    case enNormalWithdraw:
        showNormalWithdrawScreen();
        break;
    case enDeposit:
        showDepositScreen();
        break;
    case enCheckBalance:
        showCheckBalanceScreen();
        break;
    case enLogout:
        loginScreen();
        break;
    }
}

void showATMMainMenuScreen()
{
    system("cls");
    cout << "=====================================================" << endl;
    cout << setw(15) << "" << "ATM Main Menu Screen" << endl;
    cout << "=====================================================" << endl;

    cout << setw(6) << left << "[1] Quick Withdraw." << endl;
    cout << setw(6) << left << "[2] Normal Withdraw." << endl;
    cout << setw(6) << left << "[3] Deposit." << endl;
    cout << setw(6) << left << "[4] Check Balance." << endl;
    cout << setw(6) << left << "[5] Logout." << endl;
    cout << "=====================================================" << endl;

    switchATMMainMenuScreen((enATMMainMenuScreenChoice)atmMainMenuChoice());
}

void loginScreen()
{
    string Accountnumber, PinCode;
    bool loginFailed = false;

    do
    {
        system("cls");
        cout << "=====================================================" << endl;
        cout << setw(20) << "" << "Login Screen" << endl;
        cout << "=====================================================" << endl;
        
        if (loginFailed)
        {
            cout << "Invalid AccountNumber / Pincode !" << endl;
        }

        cout << "Enter Account Number : ";
        getline(cin >> ws, Accountnumber);

        cout << "Enter PinCode : ";
        getline(cin, PinCode);

        loginFailed = !loadUserInfo(Accountnumber, PinCode);
    } while (loginFailed);
    
    showATMMainMenuScreen();
}

int main()
{
    loginScreen();
}