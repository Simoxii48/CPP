#include <iostream>
using namespace std;

struct stDate {
    short Day = 0;
    short Month = 0;
    short Year = 0;
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

stDate fillStDate()
{
    stDate date;

    date.Day = readDay();
    date.Month = readMonth();
    date.Year = readYear();

    return date;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numbrOfDaysInMonth(short month, short year)
{
    if (month < 1 || month>12)
        return 0;

    short monthsDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

bool isDate1LessThanDate2(stDate date1, stDate date2)
{
    return (date1.Year < date2.Year) ? true : (
        (date1.Year == date2.Year) ?
        (date1.Month < date2.Month ? true :
            (date1.Month == date2.Month ? date1.Day < date2.Day
                : false)) : false);
}

short numberOfDaysFromBegOfTheYear(short day, short month, short year)
{
    short numOfDays = 0;
    
    for (int i = 1; i < month; i++)
    {
        numOfDays += numbrOfDaysInMonth(i, year);
    }
    numOfDays += day;

    return numOfDays;
}

short diffBetweenDates(stDate date1, stDate date2)
{
    if (isDate1LessThanDate2(date1, date2))
    {
        return numberOfDaysFromBegOfTheYear(date2.Day, date2.Month, date2.Year)
            - numberOfDaysFromBegOfTheYear(date1.Day, date1.Month, date1.Year);
    }
    else
        return 0;
}

int main()
{
    stDate date1 = fillStDate();
    cout << endl;
    stDate date2 = fillStDate();
    short diff = diffBetweenDates(date1, date2);

    cout << "\nDifference is : " << diff << " Day(s).\n";
    cout << "\nDifference (Including End Day) is : " << diff+1 << " Day(s).\n";
}