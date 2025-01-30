#include <iostream>
using namespace std;

string readPassword() {
    string password = "";
    cout << "Please enter a 3-Letter password (all capital) : ";
    cin >> password;
    return password;
}

bool guessPassword(string originalPassword) {
    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                counter++;
                word += char(i);
                word += char(j);
                word += char(k);
                cout << "Trial [" << counter << "] : " << word << endl;

                if (word == originalPassword) {
                    cout << "\nPassword is : " << word << endl;
                    cout << "Found after " << counter << " Trial(s).\n";
                    return true;
                }
                word = "";
            }
        }
    }
    return false;
}

int main()
{
    guessPassword(readPassword());
}