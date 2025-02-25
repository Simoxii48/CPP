#include <iostream>
#include <string>
using namespace std;

short readYear()
{
    short year = 0;
    cout << "Enter a year : ";
    cin >> year;
    return year;
}

short readMonth()
{
    short month = 0;
    cout << "Enter a month : ";
    cin >> month;
    return month;
}

short readDay()
{
    short day = 0;
    cout << "Enter a day : ";
    cin >> day;
    return day;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numberOfDaysInMonth(short year, short month)
{
    if (month < 1 && month>12)
        return 0;

    short monthsDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

short numberOfDaysFromBeginingOfYear(short year, short month, short day)
{
    short counter = 0;
    
    for (short i = 1; i < month; i++) {
        counter += numberOfDaysInMonth(year, i);
    }
    counter += day;

    return counter;
}

string dateFormatFromNumberOfDays(short numberOfDays)
{
    short monthsDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    short monthsCount = 0;
    short i = 0;

    while (numberOfDays -= monthsDays[i])
    {
        monthsCount++;
        
        if (numberOfDays < monthsDays[i])
        {
            monthsCount++;
            break;
        }
        
        i++;
    }
    
    return to_string(numberOfDays) + "/" + to_string(monthsCount) + "/2022";
}

int main()
{
    short year = readYear(), month = readMonth(), day = readDay();
    short numberOfDays = numberOfDaysFromBeginingOfYear(year, month, day);
    
    cout << "\nNumbre of days from the begining of the year is " << 
        numberOfDays << endl;

    cout << "Date for [" << numberOfDays << "] is : " <<
        dateFormatFromNumberOfDays(numberOfDays) << endl;
}