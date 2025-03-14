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

    cout << endl;

    cout << "Difference in days between Date1 and Date2 is : " <<
        Date1.GetDifferenceInDays(Date2) << " Day(s)" << endl;

    cout << endl;

    cout << "Difference in days between Date2 and Date1 is : " <<
        Date2.GetDifferenceInDays(Date1) << " Day(s)" << endl;

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.IncreaseDateByOneWeek();
    
    cout << "Date3 after adding 1 week is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    short xWeeks = 4;
    Date3.IncreaseDateByXWeeks(xWeeks);

    cout << "Date3 after adding " << xWeeks << " week(s) is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.IncreaseDateByOneMonth();

    cout << "Date3 after adding 1 month is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    xDays = 10;
    Date3.IncreaseDateByXDays(xDays);

    cout << "Date3 after adding " << xDays << " Day(s) is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    short xMonths = 4;
    Date3.IncreaseDateByXMonths(xMonths);

    cout << "Date3 after adding " << xMonths << " Month(s) is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.IncreaseDateByOneYear();

    cout << "Date3 after adding 1 year is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    short xYears = 4;
    Date3.IncreaseDateByXYears(xYears);

    cout << "Date3 after adding " << xYears << " Year(s) is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    xYears = 4;
    Date3.IncreaseDateByXYearsFaster(xYears);

    cout << "Date3 after adding " << xYears << " Year(s) faster method is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.IncreaseDateByOneDecade();

    cout << "Date3 after adding 1 decade is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    short xDecades = 2;
    Date3.IncreaseDateByXDecades(xDecades);

    cout << "Date3 after adding " << xDecades << " Decade(s) method is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    xDecades = 4;
    Date3.IncreaseDateByXDecadesFaster(xDecades);

    cout << "Date3 after adding " << xDecades << " Decade(s) faster method is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.IncreaseDateByOneCentury();

    cout << "Date3 after adding 1 century is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.IncreaseDateByOneMillennium();

    cout << "Date3 after adding 1 millennium is : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();
    
    Date3.DecreaseDateByOneDay();

    cout << "Date3 after decrease 1 day : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByOneWeek();

    cout << "Date3 after decrease 1 week : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByXWeeks(xWeeks);

    cout << "Date3 after decrease " << xWeeks << " week(s) : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByOneMonth();

    cout << "Date3 after decrease 1 month : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByXDays(xDays);

    cout << "Date3 after decrease " << xDays << " days(s) : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByXMonths(xMonths);

    cout << "Date3 after decrease " << xMonths << " month(s) : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByOneYear();

    cout << "Date3 after decrease 1 year : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByXYears(xYears);

    cout << "Date3 after decrease " << xYears << " year(s) : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByXYearsFaster(xYears);

    cout << "Date3 after decrease " << xYears << " year(s) faster method : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByOneDecade();

    cout << "Date3 after decrease 1 decade : ";
    Date3.Print();

    cout << endl;

    cout << "Date3 : ";
    Date3.Print();

    Date3.DecreaseDateByXDecades(xDecades);

    cout << "Date3 after decrease " << xDecades << " decade(s) : ";
    Date3.Print();
}