#include <iostream>
#include <iomanip>
using namespace std;

short readYear()
{
    short year = 0;
    cout << "Please enter a year : ";
    cin >> year;
    return year;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numberOfDaysInAMonth(short year,short month)
{
    if (month < 1 || month>12)
        return 0;

    short numberOfDaysInAllMonths[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : numberOfDaysInAllMonths[month - 1];
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

string shortMonthName(short month)
{
    string monthNames[] = { 
        "Jan","Feb","Mar",
        "Apr","May","Jun",
        "Jul","Aug","Sep",
        "Oct","Nov","Dec" };
    return monthNames[month - 1];
}

void printHeader(short year)
{
    printf("\n\n  ---------------------------------\n");
    cout << setw(9) << "" << "Calendar - " << year << endl;
    printf("  ---------------------------------\n\n");
}

void printMonthCalendar(short year,short month)
{
    short current = DayOfWeekOrder(1, month, year);
    short numberOfDaysInMonth = numberOfDaysInAMonth(year, month);

    printf("  ---------------%s---------------\n", shortMonthName(month).c_str());
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    
    short i;
    for (i = 0; i < current; i++)
        printf("     ");

    
    for (short j = 1; j <= numberOfDaysInMonth; j++)
    {
        printf("%5d", j);
        
        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }
    printf("\n  _________________________________\n\n");
}

void printCalendar(short year)
{
    printHeader(year);

    for (int i = 1; i <= 12; i++)
    {
        printMonthCalendar(year, i);
    }
}

int main()
{
    short year = readYear();

    printCalendar(year);
}