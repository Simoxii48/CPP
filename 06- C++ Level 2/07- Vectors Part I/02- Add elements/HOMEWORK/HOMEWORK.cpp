#include <iostream>
#include <vector>
using namespace std;

// vector must be accessed by ref & It doesn't being sent by ref par default

void readNumbers(vector <int>& vNumbers) {
    char readMore = 'y';
    int userInput = 0;

    // just to check is vector when reading are accessed by Ref
    // cout << &vNumbers << endl;

    cout << "Please enter a number : ";
    cin >> userInput;
    vNumbers.push_back(userInput);

    cout << "Do you want to enter more numbers (y/n) : ";
    cin >> readMore;

    while (readMore == 'y' || readMore == 'Y') {
        cout << "Please enter more numbers : ";
        cin >> userInput;
        vNumbers.push_back(userInput);

        cout << "Do you want to enter more numbers (y/n) : ";
        cin >> readMore;
    }
}

void printInsertedNumbers(vector <int> vNumbers) {
    cout << "Vector inserted numbers : ";

    for (int& number : vNumbers) {
        cout << number << "  ";
    }
    cout << endl;
}

int main()
{
    // vector declaration and empty initialisation
    vector <int> vNumbers = {};

    // just to check is vector when reading are accessed by Ref
    // cout << &vNumbers << endl;

    readNumbers(vNumbers);
    printInsertedNumbers(vNumbers);
}