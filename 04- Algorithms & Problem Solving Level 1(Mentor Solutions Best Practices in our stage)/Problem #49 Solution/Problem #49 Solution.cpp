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
    do {
        pinCode = readPinCode();
        if (pinCode == "1234") {
            return 1; // to exit the loop and return true
        }
        else {
            cout << "\nWrong PIN\n";
            system("color 4F"); // red screen
        }
    } while (pinCode != "1234");
    
    return 0;
}

int main()
{
    if (login()) {
        system("color 2F"); // green screen
        cout << "Your account balance is " << 7500 << endl;
    }
}