#include <iostream>
using namespace std;

string readPinCode() {
    string pinCode;
    cout << "Please enter PIN code : ";
    cin >> pinCode;
    return pinCode;
}

bool login() {
    string pinCode;
    int counter = 3;
    do {
        counter--;
        pinCode = readPinCode();

        if (pinCode == "1234") {
            return 1;
        }
        else {
            system("color 4F");
            cout << "\nWrong PIN, you have " << counter << " more tries : \n";
        }
    } while (counter >= 1 && pinCode != "1234");

    return 0;
}

int main()
{
    if (login()) {
        system("color 2F");
        cout << "Your account balance is " << 7500 << endl;
    }
    else {
        cout << "Your card is locked, call the bank for help." << endl;
    }
}