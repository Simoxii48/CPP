#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;
    cout << "enter your number : ";
    cin >> number;
    return number;
}

int main()
{
    int number = readNumber();

    (number >= 0) ? cout << "Positive" : cout << "Negative";

    cout << endl;

    (number == 0) ? cout << "Zero" : ((number < 0) ? cout << "Negative" : cout << "Positive");
}