#include <iostream>
using namespace std;

enum enWeekDays { 
    Monday = 1, 
    Tuesday = 2, 
    Wednesday = 3, 
    Thursday = 4, 
    Friday = 5, 
    Saturday = 6, 
    Sunday = 7 };

int readWeekDay(int& day) {
    cout << "Please enter your day :\t";
    cin >> day;
    return day;
}

string decideWeekDay(int day) {
    enWeekDays choosenDay = (enWeekDays)day;
    switch (choosenDay) {
    case enWeekDays::Monday:
        return "It's Monday";
    case enWeekDays::Tuesday:
        return "It's Tuesday";
    case enWeekDays::Wednesday:
        return "It's Wednesday";
    case enWeekDays::Thursday:
        return "It's Thursday";
    case enWeekDays::Friday:
        return "It's Friday";
    case enWeekDays::Saturday:
        return "It's Saturday";
    case enWeekDays::Sunday:
        return "It's Sunday";
    default:
        return "Sorry! Not a week day!";
    }
}

void printChoosenDay(string day) {
    cout << day << endl;
}

void printWeekDaysCard() {
    cout << "******************************************\n";

    cout << "(1) Monday\n";
    cout << "(2) Tuesday\n";
    cout << "(3) Wednesday\n";
    cout << "(4) Thursday\n";
    cout << "(5) Friday\n";
    cout << "(6) Saturday\n";
    cout << "(7) Sunday\n";

    cout << "******************************************\n";
}

int main()
{
    int day;

    printWeekDaysCard();

    // we can use this syntax
    printChoosenDay(decideWeekDay(readWeekDay(day)));
    
    // also this syntax
    /*
    
    int day;

    readWeekDay(day);

    string choosenDay = decideWeekDay(day);

    printChoosenDay(choosenDay);

    */
    return 0;
}