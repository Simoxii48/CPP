#include <iostream>
using namespace std;

int readATMPin(int& pin) {
    cout << "Please enter your ATM Pin : ";
    cin >> pin;
    return pin;
}

bool checkPIN(int pin) {
    if (pin == 1234) {
        return true;
    }
    else {
        return false;
    }
}

void showResult(int balance, int pin) {
    if (checkPIN(pin)) {
        cout << "Your balance is : " << balance << endl;
    }
    else {
        cout << "WRONG PIN :(" << endl;
    }
}


int main()
{
    int ATM_Pin, accountBalance = 7500;
    
    checkPIN(readATMPin(ATM_Pin));

    showResult(accountBalance, ATM_Pin);
}