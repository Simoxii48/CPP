#include <iostream>
using namespace std;

enum enYearMonths {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    Jun = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int ReadYearMonth(int& choosenMonth) {
    cout << "Please enter your month : ";
    cin >> choosenMonth;
    return choosenMonth;
}

string decideYearMonth(int month) {
    enYearMonths choosenMonth = (enYearMonths)month;
    switch (month) {
    case enYearMonths::January:
        return "January";
    case enYearMonths::February:
        return "February";
    case enYearMonths::March:
        return "March";
    case enYearMonths::April:
        return "April";
    case enYearMonths::May:
        return "May";
    case enYearMonths::Jun:
        return "Jun";
    case enYearMonths::July:
        return "July";
    case enYearMonths::August:
        return "August";
    case enYearMonths::September:
        return "September";
    case enYearMonths::October:
        return "October";
    case enYearMonths::November:
        return "November";
    case enYearMonths::December:
        return "December";
    default:
        return "Sorry! Wrong Choice ! :(";
    }
}

void printChoosenMonth(string choosenMonth) {
    cout << choosenMonth << endl;
}

void printMonthsCard() {
    cout << "********************************************\n";

    cout << "(1) January\n";
    cout << "(2) February\n";
    cout << "(3) March\n";
    cout << "(4) April\n";
    cout << "(5) May\n";
    cout << "(6) Jun\n";
    cout << "(7) July\n";
    cout << "(8) August\n";
    cout << "(9) september\n";
    cout << "(10) October\n";
    cout << "(11) November\n";
    cout << "(12) December\n";

    cout << "********************************************\n";
}

int main()
{
    // to save the choosen month from the user
    int choosenMonth;

    // to print the card of months
    printMonthsCard();

    // to read user choice
    ReadYearMonth(choosenMonth);

    // to save the result returned to print
    string decidedMonth = decideYearMonth(choosenMonth);

    // to print the message 
    printChoosenMonth(decidedMonth);
    
}