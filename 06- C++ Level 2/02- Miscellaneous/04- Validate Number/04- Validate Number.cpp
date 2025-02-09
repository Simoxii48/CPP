#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;
    cout << "Please enter a number : ";
    cin >> number;

    while (cin.fail()) { // cin.fail() will return a bool value if inputs were invalid
        
        // user didn't input a number
        cin.clear(); // clear the inputs
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // syntax to ignore all the given input untill enter is found
        
        cout << "Invalid number, Enter a valid number again : ";
        cin >> number;
    }
    return number;
}

int main()
{
    // to test the number validation
    cout << "Your number is : " << readNumber() << endl;

}