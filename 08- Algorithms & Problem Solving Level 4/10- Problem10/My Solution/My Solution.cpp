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

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numberOfDaysInMonth(short month,short year)
{
    if (month < 1 || month>12)
        return 0;

    short monthsDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;
    // Gregorian:
    //0:sun, 1:Mon, 2:Tue...etc

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m)
        / 12)) % 7;
}

short countNumberOfDaysUntillGivenDay(short day,short month,short year)
{
    short counter = 0;
    short numberOfDays = numberOfDaysInMonth(1, year);
    short j = 1;
    short m = 0;
    short i = 1;

    while(i <= numberOfDays)
    {
        counter++;
        
        if (day == i && month == ++m)
            break;
        
        if (numberOfDays == i)
        {
            j++;
            numberOfDays = numberOfDaysInMonth(j, year);
            i = 0;
        }

        i++;
    }
    return counter;
}

int main()
{
    short day = readDay();
    short month = readMonth();
    short year = readYear();

    cout << "\nNumber of Days from the begining of the year is : "
        << countNumberOfDaysUntillGivenDay(day, month, year) << endl;
}