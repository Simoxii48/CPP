#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// main folder directory
const string fileName = "MyRecords.txt";
const string userFileName = "Users.txt";

// user struct
struct stUser {
    string userName = "";
    string passWord = "";
    short permissions = 0;
    bool isMarkedForDeletion = false;
};

// global user variable
stUser user;

// procedure definition
void returnToMainMenu();
void showTransactionsMenu();
void showManageUsersScreen();
void showLoginScreen();
void loginScreen();
void showAccessDeniedLog();

// struct client data
struct stClient {
    string AccountNumber = "";
    string PinCode = "";
    string FullName = "";
    string Phone = "";
    float AccountBalance = 0;
    bool IsMarkedForDelete = false;
};

// enums for the user choice
enum enUserChoice {
    ClientList = 1,
    AddNewClient = 2,
    DeleteClient = 3,
    UpdateClient = 4,
    FindClient = 5,
    Transactions = 6,
    ManageUsers = 7,
    LogOut = 8
};

//enum for transaction menu
enum enTransactionMenu {
    Deposit = 1,
    Withdraw = 2,
    TotalBalances = 3,
    MainMenu = 4
};

// convert line string to record struct
stClient convertLineToRecord(vector<string> records, string delim = "#//#")
{
    stClient client;

    client.AccountNumber = records[0];
    client.PinCode = records[1];
    client.FullName = records[2];
    client.Phone = records[3];
    client.AccountBalance = stof(records[4]);

    return client;
}

// split given string
vector<string> splitString(string s, string delim = "#//#")
{
    vector<string> splittedClientData = {};
    string pieceOfData = "";
    size_t pos = 0;

    while ((pos = s.find(delim)) != string::npos)
    {
        pieceOfData = s.substr(0, pos);
        if (pieceOfData != "")
        {
            splittedClientData.push_back(pieceOfData);
        }
        s.erase(0, pos + delim.length());
    }

    if (s != "")
    {
        splittedClientData.push_back(s);
    }

    return splittedClientData;
}

// get all clients in file to vector
vector<stClient> getAllClientsInFile()
{
    vector<stClient> vAllClients;

    fstream myFile;
    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string line = "";
        stClient client;

        while (getline(myFile, line))
        {
            vector<string> record = splitString(line);
            client = convertLineToRecord(record);
            vAllClients.push_back(client);
        }
        myFile.close();
    }

    return vAllClients;
}

// is the account found by account number
bool isAccountFoundByAccountNumber(string accountNumber, vector<stClient> stClients, stClient& client)
{
    for (stClient& C : stClients)
    {
        if (C.AccountNumber == accountNumber)
        {
            client = C;
            return true;
        }
    }
    return false;
}

// starting from adding a new client
stClient readNewClientFromScreen(vector<stClient> vAllClients)
{
    stClient client;

    cout << "\nAdding New Client :" << endl;

    cout << "\nEnter Account Number : ";
    cin >> client.AccountNumber;

    if (isAccountFoundByAccountNumber(client.AccountNumber, vAllClients, client))
    {
        do {
            cout << "\nClient with [" << client.AccountNumber << "] already exist, Enter another Account Number : ";
            cin >> client.AccountNumber;
        } while (isAccountFoundByAccountNumber(client.AccountNumber, vAllClients, client));
    }

    cout << "Enter your PinCode : ";
    cin >> client.PinCode;

    cout << "Enter your Full Name : ";
    getline(cin >> ws, client.FullName);

    cout << "Enter your Phone Number : ";
    cin >> client.Phone;

    cout << "Enter your Account Balance : ";
    cin >> client.AccountBalance;

    return client;
}

// convert struct record to line
string convertRecordToLine(stClient client, string delim = "#//#")
{
    string clientInLineString = "";

    clientInLineString += client.AccountNumber + delim;
    clientInLineString += client.PinCode + delim;
    clientInLineString += client.FullName + delim;
    clientInLineString += client.Phone + delim;
    clientInLineString += to_string(client.AccountBalance);

    return clientInLineString;
}

// insert Record to file base
void insertRecordToFile(stClient& client)
{
    fstream myFile;
    myFile.open(fileName, ios::out | ios::app);

    if (myFile.is_open())
    {
        string line = convertRecordToLine(client);
        myFile << line << endl;
    }
    myFile.close();
}

// enum func to return user choice
enUserChoice readUserChoice()
{
    short choice = 0;
    do {
        cout << "Choose what do you want to do [1 to 8] : ";
        cin >> choice;
    } while (choice < 1 || choice>8);

    return (enUserChoice)choice;
}

void showMainMenu()
{
    system("cls");
    cout << "======================================================" << endl;
    cout << setw(19) << "" << "Main Menu Screen" << endl;
    cout << "======================================================" << endl;

    cout << setw(5) << "" << "[1] Show Client List." << endl;
    cout << setw(5) << "" << "[2] Add New Client." << endl;
    cout << setw(5) << "" << "[3] Delete Client." << endl;
    cout << setw(5) << "" << "[4] Update Client Infos." << endl;
    cout << setw(5) << "" << "[5] Find Client." << endl;
    cout << setw(5) << "" << "[6] Transactions." << endl;
    cout << setw(5) << "" << "[7] Manage Users." << endl;
    cout << setw(5) << "" << "[8] Logout." << endl;
    cout << "======================================================" << endl;
}

void printClientData(stClient client)
{
    cout << "| " << setw(20) << left << client.AccountNumber;
    cout << "| " << setw(10) << left << client.PinCode;
    cout << "| " << setw(50) << left << client.FullName;
    cout << "| " << setw(13) << left << client.Phone;
    cout << "| " << setw(13) << left << client.AccountBalance << endl;
}

void showClientListScreen()
{
    vector<stClient> vAllClients = getAllClientsInFile();

    cout << setw(41) << "" << "Client List (" << vAllClients.size() << ") Client(s)." << endl;
    cout << "==============================================================================================================" << endl;
    cout << "| " << setw(20) << left << "Account Number";
    cout << "| " << setw(10) << left << "Pin Code";
    cout << "| " << setw(50) << left << "Client Name";
    cout << "| " << setw(13) << left << "Phone";
    cout << "| " << setw(13) << left << "Balance" << endl;
    cout << "==============================================================================================================" << endl << endl;

    if (vAllClients.size() <= 0)
    {
        cout << setw(41) << "" << "No Client Found For the Moment.\n\n";
    }
    else
    {
        for (stClient& C : vAllClients)
        {
            printClientData(C);
        }
    }

    cout << "\n\n==============================================================================================================" << endl << endl;

    returnToMainMenu();
}

void ShowAddNewClientScreen()
{
    cout << "============================================================" << endl;
    cout << setw(19) << "" << "Add New Clients Screen" << endl;
    cout << "============================================================" << endl;

    // local struct for adding purpose
    stClient client;
    char insertMoreClients = 'n';
    vector<stClient> vAllClients;


    do {
        vAllClients = getAllClientsInFile();
        client = readNewClientFromScreen(vAllClients);
        insertRecordToFile(client);

        cout << "\nClient Added Successfully, Do you want to add more clients (y/n) : ";
        cin >> insertMoreClients;
    } while (tolower(insertMoreClients) == 'y');

    returnToMainMenu();
}

string readAccountNumber()
{
    string accNum = "";
    cout << "Please enter Account Number : ";
    cin >> accNum;
    return accNum;
}

bool markClientForDeleteByAccNum(string accNum, vector<stClient>& vAllClients)
{
    for (stClient& C : vAllClients)
    {
        if (C.AccountNumber == accNum)
        {
            C.IsMarkedForDelete = true;
            return true;
        }
    }
    return false;
}

void removeMarkedDeletedClients(vector<stClient> vAllClients)
{
    fstream myFile;
    myFile.open(fileName, ios::out);

    if (myFile.is_open())
    {
        for (stClient& C : vAllClients)
        {
            if (!C.IsMarkedForDelete) {
                string newRecords = convertRecordToLine(C);
                myFile << newRecords << endl;
            }
        }
    }
    myFile.close();
}

void printClientDetail(stClient client)
{
    cout << "\nThe following are the client details :\n\n";
    cout << "---------------------------------------------\n";
    cout << "Account Number : " << client.AccountNumber << endl;
    cout << "Pin Code       : " << client.PinCode << endl;
    cout << "Full Name      : " << client.FullName << endl;
    cout << "Phone Number   : " << client.Phone << endl;
    cout << "Account Balance: " << client.AccountBalance << endl;
    cout << "---------------------------------------------\n";
}

void printNotFoundClient(string accNum)
{
    cout << "Client with Account Number (" << accNum << ") is Not Found !" << endl;
}

void previewClientIfFound(string accountNumber, vector<stClient> vAllClients)
{
    stClient clientToSearch;
    if (isAccountFoundByAccountNumber(accountNumber, vAllClients, clientToSearch))
        printClientDetail(clientToSearch);
    else
        printNotFoundClient(accountNumber);
}

bool confirmeDeletion(string accountNumber, stClient client, vector<stClient> vAllClient)
{
    char confirmeDeletion = 'n';
    previewClientIfFound(accountNumber, vAllClient);

    cout << "\n\n Are you sure you want to delete this client (y/n) : ";
    cin >> confirmeDeletion;

    return (tolower(confirmeDeletion) == 'y');
}

vector<stClient> loadAllClientsFromFile()
{
    fstream myFile;
    myFile.open(fileName, ios::in);
    vector<stClient> vAllClients;

    if (myFile.is_open())
    {
        string line = "";
        while (getline(myFile, line))
        {
            vector<string> splittedData = splitString(line);
            stClient client = convertLineToRecord(splittedData);
            vAllClients.push_back(client);
        }
        myFile.close();
    }
    return vAllClients;
}

vector<stClient> deleteClientRecord(string accNum, vector<stClient>& vAllClients, stClient& client)
{

    if (isAccountFoundByAccountNumber(accNum, vAllClients, client))
    {
        for (stClient& C : vAllClients) {
            if (C.AccountNumber == client.AccountNumber)
            {
                markClientForDeleteByAccNum(accNum, vAllClients);
                if (confirmeDeletion(accNum, client, vAllClients))
                {
                    removeMarkedDeletedClients(vAllClients);
                    cout << "Client Deleted Successfully." << endl;

                    // refresh data
                    vAllClients = loadAllClientsFromFile();
                }
            }
        }
    }
    else
    {
        cout << "Client with Account Number (" << accNum << ") Not found !" << endl;
    }
    return vAllClients;
}

void showDeleteClientScreen()
{
    cout << "============================================================" << endl;
    cout << setw(19) << "" << "Delete Client Screen" << endl;
    cout << "============================================================" << endl;

    vector<stClient> vAllClients = getAllClientsInFile();
    string accountNumber = readAccountNumber();
    stClient clientToDelete;

    deleteClientRecord(accountNumber, vAllClients, clientToDelete);

    returnToMainMenu();
}

bool readConfirmeUpdate()
{
    char confirmeUpdate = 'n';
    cout << "Are you sure you want to update this Client (y/n) : ";
    cin >> confirmeUpdate;
    return (tolower(confirmeUpdate) == 'y');
}

void readUpdatedInfos(string accNuum, stClient& client) {
    client.AccountNumber = accNuum;

    cout << "Enter your new PinCode : ";
    cin >> client.PinCode;

    cout << "Enter your new FullName : ";
    getline(cin >> ws, client.FullName);

    cout << "Enter your new Phone : ";
    cin >> client.Phone;

    cout << "Enter your new Account Balance : ";
    cin >> client.AccountBalance;
}

void insertUpdatedInfos(vector<stClient> vAllClients)
{
    fstream myFile;
    myFile.open(fileName, ios::out);

    if (myFile.is_open())
    {
        for (stClient& client : vAllClients)
        {
            string recordToLine = convertRecordToLine(client);
            myFile << recordToLine << endl;
        }
    }
    myFile.close();
}

bool confirmeUpdateClient(string accNum, vector<stClient>& vAllClients, stClient client)
{
    for (stClient& C : vAllClients)
    {
        if (C.AccountNumber == client.AccountNumber)
        {
            if (readConfirmeUpdate())
            {
                readUpdatedInfos(accNum, client);
                C = client;

                cout << "Client Updated Successfully." << endl;
                insertUpdatedInfos(vAllClients);
                return true;
            }
        }
    }
    return false;
}

vector<stClient> updateClientRecord(string accNum, vector<stClient> vAllClients, stClient& client)
{
    if (isAccountFoundByAccountNumber(accNum, vAllClients, client))
    {
        previewClientIfFound(accNum, vAllClients);
        confirmeUpdateClient(accNum, vAllClients, client);
    }
    else
    {
        cout << "Client with Account Number (" << accNum << ") Not found !" << endl;
    }
    return vAllClients;
}

void showUpdateClientScreen()
{
    cout << "============================================================" << endl;
    cout << setw(19) << "" << "Update Client Screen" << endl;
    cout << "============================================================" << endl;

    vector<stClient> vAllClients = getAllClientsInFile();
    string accountNumber = readAccountNumber();
    stClient clientToUpdate;
    updateClientRecord(accountNumber, vAllClients, clientToUpdate);

    returnToMainMenu();
}

void showFindClientScreen()
{
    cout << "============================================================" << endl;
    cout << setw(19) << "" << "Find Client Screen" << endl;
    cout << "============================================================" << endl;

    string accNum = readAccountNumber();
    vector<stClient> vAllClients = getAllClientsInFile();

    previewClientIfFound(accNum, vAllClients);

    returnToMainMenu();
}

void showProgramEndsScreen() {
    cout << "============================================================" << endl;
    cout << setw(19) << "" << "Program Ends :-)" << endl;
    cout << "============================================================" << endl;

    cout << "\nPress any key to exit the Program...";
    system("pause>0");

}

void returnToMainMenuScreen()
{
    cout << "\nPress any key to exit the Program...";
    system("pause>0");
    system("cls");

    showTransactionsMenu();
}

float amountToDeposit()
{
    float amount = 0;

    cout << "\nPlease enter deposit amount : ";
    cin >> amount;

    return amount;
}

bool confirmeTransaction()
{
    char confirmeDeposit = 'y';

    cout << "\nAre you sure you want to perform this transaction (y/n) : ";
    cin >> confirmeDeposit;

    return (tolower(confirmeDeposit) == 'y');
}

float deposit(string& accNum, vector<stClient>& vAllClients)
{
    stClient client;
    if (isAccountFoundByAccountNumber(accNum, vAllClients, client))
    {
        printClientDetail(client);

        float amountDeposited = amountToDeposit();

        if (confirmeTransaction())
        {
            for (stClient& C : vAllClients)
            {
                if (C.AccountNumber == client.AccountNumber)
                {
                    C.AccountBalance += amountDeposited;
                    cout << "\nYour Transaction was Successfully Performed" << endl;
                    cout << "\nYour New Balance is " << C.AccountBalance << endl;

                    insertUpdatedInfos(vAllClients);
                    return C.AccountBalance;
                }
            }
        }
    }
    else
    {
        do {
            cout << "Client with [" << accNum << "] does not exist.\n";
            cout << "\nPlease enter Account Number : ";
            cin >> accNum;
        } while (!isAccountFoundByAccountNumber(accNum, vAllClients, client));

        deposit(accNum, vAllClients);
    }
}

void showDepositScreen()
{
    cout << "============================================================" << endl;
    cout << setw(19) << "" << "Deposit Screen" << endl;
    cout << "============================================================" << endl;

    vector<stClient> vAllclients = getAllClientsInFile();
    string accNum = readAccountNumber();
    deposit(accNum, vAllclients);

    returnToMainMenuScreen();
}

float amountToWithdraw()
{
    float amount = 0;

    cout << "\nPlease enter amount to withdraw : ";
    cin >> amount;

    return amount;
}

float withdraw(string& accNum, vector<stClient>& vAllClients)
{
    stClient client;
    if (isAccountFoundByAccountNumber(accNum, vAllClients, client))
    {
        printClientDetail(client);

        float amountWithdrawn = amountToWithdraw();

        while (amountWithdrawn > client.AccountBalance)
        {
            cout << "\nAmount Exceeds the balance, you can withdraw up to : " << client.AccountBalance << endl;
            cout << "\nPlease enter another amount : ";

            cin >> amountWithdrawn;
        }

        if (confirmeTransaction())
        {
            for (stClient& C : vAllClients)
            {
                if (C.AccountNumber == client.AccountNumber)
                {
                    C.AccountBalance -= amountWithdrawn;
                    cout << "\nYour Transaction was Successfully Performed" << endl;
                    cout << "\nYour New Balance is " << C.AccountBalance << endl;

                    insertUpdatedInfos(vAllClients);
                    return C.AccountBalance;
                }
            }
        }
    }
    else
    {
        do {
            cout << "Client with [" << accNum << "] does not exist.\n";
            cout << "\nPlease enter Account Number : ";

            cin >> accNum;
        } while (!isAccountFoundByAccountNumber(accNum, vAllClients, client));

        withdraw(accNum, vAllClients);
    }
}

void ShowWithdrawScreen()
{
    cout << "============================================================" << endl;
    cout << setw(19) << "" << "Withdraw Screen" << endl;
    cout << "============================================================" << endl;

    vector<stClient> vAllclients = getAllClientsInFile();
    string accNum = readAccountNumber();
    withdraw(accNum, vAllclients);

    returnToMainMenuScreen();
}

void printClientDataInTotalBalancesScreen(stClient client)
{
    cout << "| " << setw(20) << left << client.AccountNumber;
    cout << "| " << setw(50) << left << client.FullName;
    cout << "| " << setw(13) << left << client.AccountBalance << endl;
}

void totalBalancesScreen()
{
    vector<stClient> vAllClients = getAllClientsInFile();
    float totalBalances = 0;

    cout << setw(41) << "" << "Client List (" << vAllClients.size() << ") Client(s)." << endl;
    cout << "==============================================================================================================" << endl;
    cout << "| " << setw(20) << left << "Account Number";
    cout << "| " << setw(50) << left << "Client Name";
    cout << "| " << setw(13) << left << "Balance" << endl;
    cout << "==============================================================================================================" << endl << endl;

    if (vAllClients.size() <= 0)
    {
        cout << setw(41) << "" << "No Client Found For the Moment.\n\n";
    }
    else
    {
        for (stClient& C : vAllClients)
        {
            printClientDataInTotalBalancesScreen(C);
            totalBalances += C.AccountBalance;
        }
    }

    cout << "\n\n==============================================================================================================" << endl << endl;
    cout << setw(41) << "" << "Total Balances = " << totalBalances << endl;
}

void showTotalBalancesScreen()
{
    totalBalancesScreen();

    returnToMainMenuScreen();
}

void switchScreenToSelectedOne(enUserChoice userChoice,stUser user)
{
    switch (userChoice)
    {
    case ClientList:
        system("cls");
        if (user.permissions & 1 || user.permissions == -1)
            showClientListScreen();
        else
            showAccessDeniedLog();
        break;
    case AddNewClient:
        system("cls");
        if (user.permissions & 2 || user.permissions == -1)
            ShowAddNewClientScreen();
        else
            showAccessDeniedLog();
        break;
    case DeleteClient:
        system("cls");
        if (user.permissions & 4 || user.permissions == -1)
            showDeleteClientScreen();
        else
            showAccessDeniedLog();
        break;
    case UpdateClient:
        system("cls");
        if (user.permissions & 8 || user.permissions == -1)
            showUpdateClientScreen();
        else
            showAccessDeniedLog();
        break;
    case FindClient:
        system("cls");
        if (user.permissions & 16 || user.permissions == -1)
            showFindClientScreen();
        else
            showAccessDeniedLog();
        break;
    case Transactions:
        system("cls");
        if (user.permissions & 32 || user.permissions == -1)
            showTransactionsMenu();
        else
            showAccessDeniedLog();
        break;
    case ManageUsers:
        system("cls");
        if (user.permissions & 64 || user.permissions == -1)
            showManageUsersScreen();
        else
            showAccessDeniedLog();
        break;
    case LogOut:
        system("cls");
        loginScreen();
    }
}

void switchTransactionMenu(enTransactionMenu userChoice)
{
    switch (userChoice)
    {
    case Deposit:
        system("cls");
        showDepositScreen();
        break;
    case Withdraw:
        system("cls");
        ShowWithdrawScreen();
        break;
    case TotalBalances:
        system("cls");
        showTotalBalancesScreen();
        break;
    case MainMenu:
        system("cls");
        showMainMenu();

        enUserChoice userChoice = readUserChoice();
        switchScreenToSelectedOne(userChoice,user);
        break;
    }
}

enTransactionMenu readTransactionMenuChoice()
{
    short choice = 0;
    do {
        cout << "Choose what do you want to do [1 to 4] : ";
        cin >> choice;
    } while (choice < 1 || choice>4);

    return (enTransactionMenu)choice;
}

void showTransactionsMenu()
{
    cout << "============================================================" << endl;
    cout << setw(12) << "" << "Transactions Menu Screen" << endl;
    cout << "============================================================" << endl;

    cout << setw(5) << "" << "[1] Deposit." << endl;
    cout << setw(5) << "" << "[2] Withdraw." << endl;
    cout << setw(5) << "" << "[3] Total Balances." << endl;
    cout << setw(5) << "" << "[4] Main Menu." << endl;
    cout << "============================================================" << endl;

    enTransactionMenu userChoice = readTransactionMenuChoice();
    switchTransactionMenu(userChoice);
}

void returnToMainMenu()
{
    cout << "\n\nClick any key to return to the Main Menu...";
    system("pause>0");
    system("cls");
    showMainMenu();

    enUserChoice userChoice = readUserChoice();
    switchScreenToSelectedOne(userChoice,user);
}

stUser readUser()
{
    stUser user;

    cout << "Enter Username : ";
    getline(cin >> ws, user.userName);

    cout << "Enter Password : ";
    getline(cin, user.passWord);

    return user;
}

stUser convertUserToStRecord(vector<string> userCredential)
{
    stUser user;

    user.userName = userCredential[0];
    user.passWord = userCredential[1];
    user.permissions = stoi(userCredential[2]);

    return user;
}

vector<stUser> getAllUsers()
{
    vector<stUser> users;
    vector<string> userCredentials;

    fstream myFile;
    myFile.open(userFileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        stUser user;

        while (getline(myFile, line))
        {
            userCredentials = splitString(line);
            user = convertUserToStRecord(userCredentials);
            users.push_back(user);
        }

        myFile.close();
    }
    return users;
}

bool login(stUser& U)
{
    vector<stUser> users = getAllUsers();
    stUser userToLogin = readUser();

    for (stUser& user : users)
    {
        if (user.userName == userToLogin.userName && user.passWord == userToLogin.passWord)
        {
            U = user;
            return true;
        }
    }
    return false;
}

void checkIfLoggedIn()
{
    while (!login(user))
    {
        system("cls");
        showLoginScreen();
        cout << "Invalid Username / Password !\n";
    };

    showMainMenu();

    enUserChoice userChoice = readUserChoice();

    switchScreenToSelectedOne(userChoice,user);
}

void loginScreen()
{
    showLoginScreen();
    checkIfLoggedIn();
}

void showLoginScreen()
{
    cout << "============================================================" << endl;
    cout << setw(24) << "" << "Login Screen" << endl;
    cout << "============================================================" << endl;

}

enum enManageUserChoice {
    ListUsers = 1,
    AddNewUser = 2,
    DeleteUser = 3,
    UpdateUser = 4,
    FindUser = 5,
    MainMenue = 6,
};

enManageUserChoice readManageUsersChoice()
{
    short choice = 0;
    do {
        cout << "Choose what do you want to do [1 to 6] : ";
        cin >> choice;
    } while (choice < 1 || choice>6);
    return (enManageUserChoice)choice;
}

void printAllUsersListTable()
{
    cout << "==============================================================================================================" << endl;
    cout << "| " << setw(20) << left << "User Name";
    cout << "| " << setw(50) << left << "Password";
    cout << "| " << setw(13) << left << "Permissions" << endl;
    cout << "==============================================================================================================" << endl << endl;
}

void returnToManageUsersScreen()
{
    cout << "\n\nPress any key te return to manage users screen ...";
    system("pause>0");
    system("cls");
    showManageUsersScreen();
}

void printUserOnListUsersScreen(stUser user)
{
    cout << "| " << setw(20) << left << user.userName;
    cout << "| " << setw(50) << left << user.passWord;
    cout << "| " << setw(13) << left << user.permissions;
    cout << endl;
}

void showListAllUsersScreen()
{
    vector<stUser> users = getAllUsers();

    cout << setw(41) << "" << "Users List (" << users.size() << " Users(s).\n";

    printAllUsersListTable();

    for (stUser& U : users)
    {
        printUserOnListUsersScreen(U);
    }

    cout << "\n\n==============================================================================================================" << endl << endl;
    returnToManageUsersScreen();
}

bool isUserFoundByUserName(string username)
{
    vector<stUser> users = getAllUsers();

    for (stUser& U : users)
    {
        if (U.userName == username)
            return true;
    }

    return false;
}

struct stPermissions {
    short AccessToShowClientsList = 0;
    short AccessToAddNewClient = 0;
    short AccessToDeleteClient = 0;
    short AccessToUpdateClient = 0;
    short AccessToFindClient = 0;
    short AccessToTransactions = 0;
    short AccessToManageUsers = 0;
};

void readPermissions(char accessTo, stPermissions& permissions, stUser& user)
{
    cout << "\nDo you want to give access to : \n\n";

    cout << "Show Client List ? : ";
    cin >> accessTo;
    if (tolower(accessTo) == 'y')
        permissions.AccessToShowClientsList |= 1;

    cout << "\nAdd New Client ? : ";
    cin >> accessTo;
    if (tolower(accessTo) == 'y')
        permissions.AccessToAddNewClient |= 2;

    cout << "\nDelete Client ? : ";
    cin >> accessTo;
    if (tolower(accessTo) == 'y')
        permissions.AccessToDeleteClient |= 4;

    cout << "\nUpdate Client ? : ";
    cin >> accessTo;
    if (tolower(accessTo) == 'y')
        permissions.AccessToUpdateClient |= 8;

    cout << "\nFind Client ? : ";
    cin >> accessTo;
    if (tolower(accessTo) == 'y')
        permissions.AccessToFindClient |= 16;

    cout << "\nTransactions ? : ";
    cin >> accessTo;
    if (tolower(accessTo) == 'y')
        permissions.AccessToTransactions |= 32;

    cout << "\nManage Users ? : ";
    cin >> accessTo;
    if (tolower(accessTo) == 'y')
        permissions.AccessToManageUsers |= 64;

    user.permissions =
        (
            permissions.AccessToAddNewClient +
            permissions.AccessToDeleteClient +
            permissions.AccessToFindClient +
            permissions.AccessToManageUsers +
            permissions.AccessToShowClientsList +
            permissions.AccessToTransactions +
            permissions.AccessToUpdateClient
            );
}

void grantAccessToUser(char access, stUser& user)
{
    if (tolower(access) == 'y')
        user.permissions = -1;
    else
    {
        stPermissions permissions;
        char accessTo = 'n';

        readPermissions(accessTo, permissions, user);
    }
}

stUser addOneUser()
{
    stUser user;
    char grantAccess = 'n';

    cout << "Adding New User :\n\n";

    cout << "Enter Username : ";
    getline(cin >> ws, user.userName);
    
    while(isUserFoundByUserName(user.userName))
    {
        cout << "\nUser with [" << user.userName << "] already exists, Enter another username : ";
        getline(cin, user.userName);
    }

    cout << "\nEnter Password : ";
    getline(cin, user.passWord);

    cout << "\nDo you want to give full access y/n : ";
    cin >> grantAccess;

    grantAccessToUser(grantAccess, user);

    return user;
}

string convertUserToLine(stUser user, string delim = "#//#")
{
    string line = "";

    line += user.userName + delim;
    line += user.passWord + delim;
    line += to_string(user.permissions);

    return line;
}

void insertNewUserToFile(string line)
{
    fstream myFile;
    myFile.open(userFileName, ios::app);

    if (myFile.is_open())
    {
        myFile << line << endl;

        myFile.close();
    }
}

void addNewUsers()
{
    stUser user;
    char addMoreUsers = 'n';

    do
    {   
        user = addOneUser();
        string record = convertUserToLine(user);
        insertNewUserToFile(record);
        cout << "\nUser Added Successfuly, Do you want to add more Users y/n : ";
        cin >> addMoreUsers;
    } while (tolower(addMoreUsers) == 'y');
}

void showAddNewUserScreen()
{
    cout << "============================================================" << endl;
    cout << setw(24) << "" << "Add New User Screen" << endl;
    cout << "============================================================" << endl;

    addNewUsers();
    returnToManageUsersScreen();
}

void findUserByUsername(string userName, vector<stUser> users, stUser& user)
{
    for (stUser& U : users)
    {
        if (U.userName == userName)
            user = U;
    }
}

void printUserDetails(stUser& user)
{
    cout << "\nThe following are the User details : \n";
    
    cout << "============================================================" << endl;
    cout << "Username : " << user.userName << endl;
    cout << "Password : " << user.passWord << endl;
    cout << "Permissions : " << user.permissions << endl;
    cout << "============================================================" << endl;
}

bool confirmeUserDeletion()
{
    char confirme = 'n';

    cout << "\nAre you sure you want to delete this user y/n : ";
    cin >> confirme;

    return (tolower(confirme) == 'y');
}

bool markUserForDeletion(string username, vector<stUser>& users)
{
        for (stUser& U : users)
        {
            if (username == "Admin")
            {
                cout << "\nSorry, You can not delete the Admin.\n";
                return false;
            }

            if (username == U.userName)
            {
                U.isMarkedForDeletion = true;
                return true;
            }
        }
        return false;
}

void removeUser(vector<stUser> users)
{
    fstream myFile;
    myFile.open(userFileName, ios::out);

    if (myFile.is_open())
    {
        for (stUser& U : users)
        {
            if (!U.isMarkedForDeletion)
            {
                string line = convertUserToLine(U);
                myFile << line << endl;
            }
        }
    }
        myFile.close();
}

void deleteUser()
{
    vector<stUser> users = getAllUsers();
    stUser user;

    cout << "\nPlease Ener Username : ";
    getline(cin >> ws, user.userName);
    
    if (!isUserFoundByUserName(user.userName))
    {
        cout << "\nUser with Username [" << user.userName << "] is not Found!" << endl;
        returnToManageUsersScreen();
    }
    findUserByUsername(user.userName, users, user);
    printUserDetails(user);
    
    if (confirmeUserDeletion())
    {
        if (markUserForDeletion(user.userName, users)) {
            removeUser(users);
            cout << "\nUser Deleted Successfully.\n";
        }

        // refresh users
        users = getAllUsers();
    }
}

bool confirmeUpdate()
{
    char confirme = 'n';

    cout << "\nAre you sure you want to update this user y/n : ";
    cin >> confirme;

    return (tolower(confirme) == 'y');
}

void showDeleteUserScreen()
{
    cout << "============================================================" << endl;
    cout << setw(24) << "" << "Delete User Screen" << endl;
    cout << "============================================================" << endl;

    deleteUser();
    returnToManageUsersScreen();
}

void readUpdatedDetails(stUser& user)
{
    cout << "\nEnter New Password : ";
    getline(cin >> ws, user.passWord);

    char accessTo = 'n';
    cout << "\nDo you want to give full access y/n : ";
    cin >> accessTo;

    grantAccessToUser(accessTo, user);
}

void insertUpdatedUserInfos(vector<stUser> users)
{
    fstream myFile;
    myFile.open(userFileName, ios::out);

    if (myFile.is_open())
    {
        for (stUser& U : users)
        {
            string line = convertUserToLine(U);
            myFile << line << endl;
        }
    }
    myFile.close();
}

void update(vector<stUser>& users, stUser user)
{
    for (stUser& U : users)
    {
        if (U.userName == user.userName)
        {
            readUpdatedDetails(U);
        }
    }
    insertUpdatedUserInfos(users);
}

void updateUser()
{
    vector<stUser> users = getAllUsers();
    stUser user;

    cout << "\nPlease Enter Username : ";
    getline(cin >> ws, user.userName);
    if (!isUserFoundByUserName(user.userName))
    {
        cout << "\nUser with Username [" << user.userName << "] is not Found!" << endl;
        returnToManageUsersScreen();
    }

    findUserByUsername(user.userName, users, user);
    printUserDetails(user);

    if (confirmeUpdate())
    {
        update(users, user);
        cout << "\nUser Updated Successfully.\n";
    }
}

void showUpdateUserScreen()
{
    cout << "============================================================" << endl;
    cout << setw(24) << "" << "Update User Screen" << endl;
    cout << "============================================================" << endl;

    updateUser();
    returnToManageUsersScreen();
}

void showFindUserScreen()
{
    cout << "============================================================" << endl;
    cout << setw(24) << "" << "Find User Screen" << endl;
    cout << "============================================================" << endl;

    stUser user;
    vector<stUser> users = getAllUsers();

    cout << "\nPlease Enter Username : ";
    getline(cin >> ws, user.userName);
    
    if (!isUserFoundByUserName(user.userName))
    {
        cout << "\nUser with Username [" << user.userName << "] is not Found!" << endl;
        returnToManageUsersScreen();
    }
    else
    {
        findUserByUsername(user.userName, users, user);
        printUserDetails(user);
        returnToManageUsersScreen();
    }
}

void showAccessDeniedLog()
{
    system("cls");
    cout << "============================================================" << endl;
    cout << "\t\tACCESS DENIED\n";
    cout << "\tYou don'y have Permissions to do this,\n";
    cout << "\tPlease contact your Admin.\n";
    cout << "============================================================" << endl;

    returnToMainMenu();
}

void switchManageUsersScreen(enManageUserChoice choice)
{
    switch (choice)
    {
    case ListUsers:
        system("cls");
        showListAllUsersScreen();
        break;
    case AddNewUser:
        system("cls");
        showAddNewUserScreen();
        break;
    case DeleteUser:
        system("cls");
        showDeleteUserScreen();
        break;
    case UpdateUser:
        system("cls");
        showUpdateUserScreen();
        break;
    case FindUser:
        system("cls");
        showFindUserScreen();
        break;
    case MainMenue:
        returnToMainMenu();
        break;
    }
}

void showManageUsersScreen()
{
    cout << "============================================================" << endl;
    cout << setw(12) << "" << "Manage Users Screen" << endl;
    cout << "============================================================" << endl;

    cout << setw(5) << "" << "[1] List Users." << endl;
    cout << setw(5) << "" << "[2] Add New User." << endl;
    cout << setw(5) << "" << "[3] Delete User." << endl;
    cout << setw(5) << "" << "[4] Update User." << endl;
    cout << setw(5) << "" << "[5] Find User." << endl;
    cout << setw(5) << "" << "[6] Main Menu." << endl;
    cout << "============================================================" << endl;

    enManageUserChoice manageUsersChoice = readManageUsersChoice();
    switchManageUsersScreen(manageUsersChoice);
}

void startBankApp()
{
    loginScreen();

    enUserChoice userChoice = readUserChoice();
    switchScreenToSelectedOne(userChoice,user);

}

int main()
{
    startBankApp();
}