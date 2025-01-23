#include <iostream>
using namespace std;


int main()
{
    // If Statement

    int x = 10;
    
    if (x > 5) {
        // the code will execute if the statement is true
        cout << "The code of if body has executed." << endl;
    }

    // the code here will always execute
    cout << "The code after if body always executed." << endl;

    // ranging
    if (x >= 5 && x <= 20) {
        cout << "true" << endl;
    }


    // If ... Else statement
    int y;

    cout << "Please enter your number : ";
    cin >> y;

    // conditions
    if (y > 5) {
        cout << "Yes, Y is greather than 5" << endl;
    }
    else {
        cout << "No, Y is less than 5" << endl;
    }

    cout << "The code after if body always executed." << endl;
}