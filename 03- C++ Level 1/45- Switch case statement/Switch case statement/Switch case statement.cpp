#include <iostream>
using namespace std;

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

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

int main()
{
    int day = 1;

    // switch case exemple
    switch (day) { // every case should have break
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default: // to advise to always put default case 
        cout << "Not a week day!\n";
    }
    
    // previous exemple using switch case
    cout << "\n\n****************************************\n";

    cout << "Please choose the number of your color : \n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";

    cout << "****************************************\n";

    cout << "Insert your choice : ";

    int choosenColor;

    cin >> choosenColor;

    enScreenColor color = (enScreenColor)choosenColor;

    switch (color) {
    case enScreenColor::Red:
        system("color 4F");
        break;
    case enScreenColor::Blue:
        system("color 1F");
        break;
    case enScreenColor::Green:
        system("color 2F");
        break;
    case enScreenColor::Yellow:
        system("color 6F");
        break;
    default:
        system("color 5F");
    }


    // previous exemple using switch case
    cout << "\n\n**************************************\n";

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

    int choosenContry;
    cin >> choosenContry;

    enCountryChoice country = (enCountryChoice)choosenContry;

    switch (country) {
    case enCountryChoice::Morocco:
        cout << "Your country is Morocco\n";
        break;
    case enCountryChoice::Jordan:
        cout << "Your country is Jordan\n";
        break;
    case enCountryChoice::Tunisia:
        cout << "Your country is Tunisia\n";
        break;
    case enCountryChoice::Algeria:
        cout << "Your country is Algeria\n";
        break;
    case enCountryChoice::Oman:
        cout << "Your country is Oman\n";
        break;
    case enCountryChoice::Egypt:
        cout << "Your country is Egypt\n";
        break;
    case enCountryChoice::Iraq:
        cout << "Your country is Iraq\n";
        break;
    default:
        cout << "Your country is not listed\n";
    }
}