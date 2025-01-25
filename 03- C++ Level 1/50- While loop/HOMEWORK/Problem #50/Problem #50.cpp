#include <iostream>
using namespace std;

int readPin(int& pin) {
    cout << "Please enter your PIN : ";
    cin >> pin;

    int i = 2;
    while (pin != 1234) {
        if (i == 0) {
            return 0;
        }
        cout << "Wrong pin, Enter PIN again, you have " << i << " more tentatives : ";
        cin >> pin;
        i--;
    }

    return pin;
}

void showInfo(int pin) {
    int balance = 7500;
    if (pin == 0) {
        cout << "Card Locked :(" << endl;
    }
    else {
        cout << "\n----------------------------\n";

        cout << "Your Balance is : " << balance << endl;

        cout << "----------------------------\n";
    }
}

int main()
{
    int pin;
    
    showInfo(readPin(pin));
}