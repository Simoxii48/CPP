#include <iostream>
using namespace std;

struct stDate {
    short day = 0;
    short month = 0;
    short year = 0;
    short howManyDaysFromBegOfTheYear = 0;
};

short readDay()
{
    short day = 0;
    cout << "Please enter a Day : ";
    cin >> day;
    return day;
}

short readMonth()
{
    short month = 0;
    cout << "Please enter a Month : ";
    cin >> month;
    return month;
}

short readYear()
{
    short year = 0;
    cout << "Please enter a Year : ";
    cin >> year;
    return year;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numberOfDaysInMonth(short month, short year)
{
    if (month < 1 || month>12)
        return 0;

    short monthsDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

stDate fillStDate()
{
    stDate date;

    date.day = readDay();
    date.month = readMonth();
    date.year = readYear();

    return date;
}

short howManyDaysFromBegOfTheYear(short day, short month, short year)
{
    short howManyDays = 0;
    
    for (int i = 1; i < month; i++)
    {
        howManyDays += numberOfDaysInMonth(i, year);
    }
    howManyDays += day;

    return howManyDays;
}

int main()
{
    stDate date1, date2;
    
    date1 = fillStDate();
    
    cout << endl;

    date2 = fillStDate();

    date1.howManyDaysFromBegOfTheYear = 
        howManyDaysFromBegOfTheYear(date1.day, date1.month, date1.year);
    
    date2.howManyDaysFromBegOfTheYear =
        howManyDaysFromBegOfTheYear(date2.day, date2.month, date2.year);

    if (date1.howManyDaysFromBegOfTheYear < date2.howManyDaysFromBegOfTheYear)
        cout << "\nYes, Date1 is less than Date2.\n";
    else
        cout << "\nNo, Date1 is more than Date2.\n";
}