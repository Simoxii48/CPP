#pragma warning(disable : 4996)

#include <iostream>
using namespace std;

struct stDate {
    string weekDay = "";
    short dayIndex = 0;
    short day = 0;
    short month = 0;
    short year = 0;
};

string daysNames(short day)
{
    string names[7]{ "Mon","Tue","Wed","Thu","Fri","Sat","Sun" };
    return names[day - 1];
}

void getSystemDate(stDate& date)
{
    time_t t = time(0);
    tm* dt = localtime(&t);

    date.weekDay = daysNames(dt->tm_wday);
    date.dayIndex = dt->tm_wday;
    date.day = dt->tm_mday;
    date.month = dt->tm_mon + 1;
    date.year = dt->tm_year + 1900;
}

bool isEndOfWeek(stDate date)
{
    return date.weekDay == "Sun";
}

bool isWeekend(stDate date)
{
    return (date.weekDay == "Sat" || date.weekDay == "Sun");
}

bool isBusinessDay(stDate date)
{
    return (date.weekDay != "Sat" && date.weekDay != "Sun");
}

short daysUntillEndOfWeek(stDate date)
{
    short daysLeft = 0;
    
    while (date.weekDay != "Sun")
    {
        daysLeft++;
        date.dayIndex++;
        date.weekDay = daysNames(date.dayIndex);
    }
    return daysLeft;
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

short daysUntillEndOfMonth(stDate date)
{
    short daysLeft = 0;
    short numberOfDays = numberOfDaysInMonth(date.month, date.year);
    
    while (numberOfDays)
    {
        if (date.day == numberOfDays)
            break;
        
        date.day++;
        daysLeft++;
    }

    return daysLeft;
}

short daysUntilTheEndOfTheYear(stDate date)
{
    short daysLeft = 0;

    for (short i = date.month+1; i <= 12; i++)
    {
        daysLeft += numberOfDaysInMonth(i, date.year);
    }

    daysLeft += daysUntillEndOfMonth(date);

    return daysLeft;
}

int main()
{
    stDate date;
    getSystemDate(date);

    cout << "Today is : " << date.weekDay << " , " << 
        date.day << "/" << date.month << "/" << date.year << endl;

    cout << "\nIs it End of Week ?\n";
    if (isEndOfWeek(date))
        cout << "Yes it is end of week.\n";
    else
        cout << "No Not end of week.\n";

    cout << "\nIs it Weekend ?\n";
    if (isWeekend(date))
        cout << "Yes it is a weekend.\n";
    else
        cout << "No it is Not a weekend.\n";

    cout << "\nIs it Business day ?\n";
    if (isBusinessDay(date))
        cout << "Yes it is a business day.\n";
    else
        cout << "No it is NOT a business day.\n";

    cout << "\nDays until end of week : " << 
        daysUntillEndOfWeek(date) << " Day(s).\n";

    cout << "Days untill end of month : " <<
        daysUntillEndOfMonth(date) << " Day(s).\n";

    cout << "Days untill end of year : " <<
        daysUntilTheEndOfTheYear(date) << " Day(s).\n";
}