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
    cout << "Number of seconds in year of Date1 : " << Date1.NumberOfSecondsInAYear() << endl << endl;

    cout << "Number of Hours in month of Date1   : " << Date1.NumberOfHoursInAMonth() << endl;
    cout << "Number of Minutes in month of Date1 : " << Date1.NumberOfMinutesInAMonth() << endl;
    cout << "Number of Seconds in month of Date1 : " << Date1.NumberOfSecondsInAMonth() << endl;
    cout << "Number of day week order is of Date1: " << Date1.DayOfWeekOrder() << endl;
    cout << "Day short name of Date1             : " << Date1.DayShortName() << endl;
    cout << "\nMonth Calendar Of Date1 : " << endl;
    Date1.PrintMonthCalendar();
    cout << endl << "Year Calendar of Date1 : " << endl;
    Date1.PrintYearCalendar();

    cout << endl << "Number of days from the beginning of the year in Date1 is : " << Date1.NumberOfDaysFromTheBeginingOfTheYear() << endl;
    cout << endl << "Number of days from the beginning of the year in Date2 is : " << Date2.NumberOfDaysFromTheBeginingOfTheYear() << endl;
    
    cout << endl;

    short xDays = 15;
    Date1.DateAddDays(xDays);
    cout << "Date1 after adding " << xDays << " day(s) : ";
    Date1.Print();

    cout << endl;
    
    cout << "Date1 : ";
    Date1.Print();
    cout << "Date2 : ";
    Date2.Print();
    
    cout << "Is Date 1 before Date 2 : " << Date1.IsDateBeforeDate2(Date2) << endl << endl;

    cout << "Date1 : ";
    Date1.Print();
    cout << "Date2 : ";
    Date2.Print();
    
    cout << "Is Date 1 before Date 2 : " << Date1.IsDateEqualDate2(Date2) << endl;

    cout << endl;

    cout << "Date2 : ";
    Date2.Print();
    cout << "Is last day in month  : " << Date2.IsLastDayInMonth() << endl;
    cout << "Is last month in year : " << Date2.IsLastMonthInYear() << endl;

    cout << endl;

    cout << "Date2 : ";
    Date2.Print();
    Date2.IncreaseDateByOneDay();
    cout << "Date2 after adding 1 Day : ";
    Date2.Print();

}