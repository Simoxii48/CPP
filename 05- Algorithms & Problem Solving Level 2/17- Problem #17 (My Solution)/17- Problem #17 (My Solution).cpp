#include <iostream>
using namespace std;

string readPassword(string message) {
    string password = "";
    do {
        cout << message;
        cin >> password;
        for (int i = 0; i <= password.length() - 1; i++) {
            if (password[i] < 65 || password[i] > 90) {
                cout << "Wrong characters inserted, only insert Capital Letters : ";
                cin >> password;
            }
        }
    } while (password.length() != 3);
    return password;
}

void guessPassword(string password) {
    int counter = 1;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                cout << "Trial [" << counter++ << "] : " << char(i) << char(j) << char(k) << endl;
                if (password[password.length() - 1] == k)
                    break;
            }
            if (password[password.length() - 2] == j)
                break;
        }
        if (password[0] == i) {
            cout << "\nPassword is : " << password << endl;
            cout << "\nFound after " << counter - 1 << " Trial(s)." << endl;
            break;
        }
    }
}

int main()
{
    string password = readPassword("Please enter your password : ");
    
    guessPassword(password);
}