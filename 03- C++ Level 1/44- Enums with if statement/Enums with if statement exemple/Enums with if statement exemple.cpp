#include <iostream>
using namespace std;

// 1 what's the enum, and what we can benefit from using enums
// 2 how to read the enum with the cin
// 3 casting review
// 4 else if statement 
// 5 more coming next lesson

enum enCountryChoice {
    Morocco = 1,
    Jordan = 2,
    Tunisia = 3,
    Algeria = 4,
    Oman = 5,
    Egypt = 6,
    Iraq = 7,
    others = 8
};

int main()
{
    cout << "**************************************\n";

    cout << "Please enter the number of your country : \n";
    cout << "(1) Morocco\n";
    cout << "(2) Jordan\n";
    cout << "(3) Tunisia\n";
    cout << "(4) Algeria\n";
    cout << "(5) Oman\n";
    cout << "(6) Egypt\n";
    cout << "(7) Iraq\n";
    cout << "(8) Others\n";

    cout << "**************************************\n";

    cout << "Your choice : ";

    // int declaration
    int c;

    // enum declaration
    enCountryChoice country;

    // read user choice in the int
    cin >> c;

    // casting the int to enum
    country = (enCountryChoice)c;

    // conditions
    if (country == enCountryChoice::Morocco) {
        cout << "Your country is Morocco\n";
    }
    else if (country == enCountryChoice::Jordan) {
        cout << "Your country is Jordan\n";
    }
    else if (country == enCountryChoice::Tunisia) {
        cout << "Your country is Tunisia\n";
    }
    else if (country == enCountryChoice::Algeria) {
        cout << "Your country is Algeria\n";
    }
    else if (country == enCountryChoice::Oman) {
        cout << "Your country is Oman\n";
    }
    else if (country == enCountryChoice::Egypt) {
        cout << "Your country is Egypt\n";
    }
    else if (country == enCountryChoice::Iraq) {
        cout << "Your country is Iraq\n";
    }
    else {
        cout << "Your country is not listed\n";
    }
}            