#include <iostream>
#include <string>
using namespace std;

short readYear()
{
    short year = 0;
    cout << "Please enter a year : ";
    cin >> year;
    return year;
}

short readMonth()
{
    short month = 0;
    cout << "Please enter a month : ";
    cin >> month;
    return month;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short monthDaysNumbers(short year, short month)
{
    if (month < 1 || month>12)
        return 0;

    short monthDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(month) ? 29 : 28) : monthDays[month - 1];
}

short dayOrder(short year, short month, short day = 1)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;

    short d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 100)) % 7;

    return d;
}

string dayName(short dayOrder)
{
    string arr[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
    return arr[dayOrder];
}

string monthName(short month)
{
    string arr[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
    return arr[month - 1];
}

void printDaysNames()
{
    for(int i=0;i<7;i++)
        cout << dayName(i) << "  ";
    cout << endl;
}

void printCalendarDays(short year, short month)
{
    short monthStartDay = dayOrder(year, month);
    short numberOfDaysInMonth = monthDaysNumbers(year, month);

    printDaysNames();
    
    // stopped here i've been stuck :(
}

void printCalenderCard(short year, short month)
{
    cout << "\n---------------" << monthName(month) << "---------------" << endl;
    printCalendarDays(year, month);
    cout << "\n---------------------------------" << endl;
}

int main()
{
    //short year = readYear();
    //short month = readMonth();

    printCalenderCard(2025, 1);
}