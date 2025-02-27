#include <iostream>
using namespace std;

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

short howManyDaysToAdd()
{
    short days = 0;
    cout << "How many days to add : ";
    cin >> days;
    return days;
}

struct stDate {
    short day = 0;
    short month = 0;
    short year = 0;
};

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

stDate fillStDate()
{
    stDate date;

    date.day = readDay();
    date.month = readMonth();
    date.year = readYear();

    return date;
}

short NumberOfDaysInAMonth(short month, short year)
{
    if (month < 1 && month>12)
        return 0;

    short monthsDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month,
    short Year)
{
    short TotalDays = 0;
    for (int i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }
    TotalDays += Day;
    return TotalDays;
}

stDate convertDaysToDate()
{
    stDate date = fillStDate();
    short howManyDays = howManyDaysToAdd();
    short daysLeftToTheEndOfYear = 
        NumberOfDaysFromTheBeginingOfTheYear(date.day, date.month, date.year);

    // stopped here
    return date;
}

int main()
{
    
}