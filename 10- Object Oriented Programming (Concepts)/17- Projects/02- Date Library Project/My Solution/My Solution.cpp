#include <iostream>
#include "clsDate.h"
using namespace std;

int main()
{
    clsDate Date1;
    cout << "Date1 : ";
    Date1.Print();

    clsDate Date2("31/12/2025");
    cout << "Date2 : ";
    Date2.Print();

    clsDate Date3(15, 10, 2025);
    cout << "Date3 : ";
    Date3.Print();
	
    clsDate Date4(250, 2025);
    cout << "Date4 : ";
    Date4.Print();

    cout << "\nYear in Date1 instance is leap ?   : " << Date1.isLeapYear() << endl;
    cout << "Number of days in month of Date1   : " << Date1.NumberOfDaysInAMonth() << endl;
    cout << "Number of days in year of Date1    : " << Date1.NumberOfDaysInAYear() << endl;
    cout << "Number of hours in year of Date1   : " << Date1.NumberOfHoursInAYear() << endl;
    cout << "Number of minutes in year of Date1 : " << Date1.NumberOfMinutesInAYear() << endl;
    cout << "Number of seconds in year of Date1 : " << Date1.NumberOfSecondsInAYear() << endl;

}