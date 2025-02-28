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

short numberOfDaysInMonth(short month, short year)
{
    if (month < 1 || month>12)
        return 0;

    short monthsDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

bool isFirstMonthInYear(stDate date)
{
    return date.Month == 1;
}

bool isFirstDayInMonth(stDate date)
{
    return date.Day == 1;
}

void decreaseDateByOneDay(stDate& date)
{
    if (isFirstDayInMonth(date))
    {
        if (isFirstMonthInYear(date))
        {
            date.Year--;
            date.Month = 12;
            date.Day = numberOfDaysInMonth(date.Month, date.Year);
        }
        else
        {
            date.Month--;
            date.Day = numberOfDaysInMonth(date.Month, date.Year);
        }
    }
    else
    {
        date.Day--;
    }
}

void decreaseDateByXDays(stDate& date,short xDays)
{
    for (short i = 1; i <= xDays; i++)
    {
        decreaseDateByOneDay(date);
    }
}

void decreaseDateByOneWeek(stDate& date)
{
    for (short i = 1; i <= 7; i++)
    {
        decreaseDateByOneDay(date);
    }
}

void decreaseDateByXWeeks(stDate& date, short xWeeks)
{
    for (short i = 1; i <= xWeeks; i++)
    {
        decreaseDateByOneWeek(date);
    }
}

void decreaseDateByOneMonth(stDate& date)
{
    if (isFirstMonthInYear(date))
    {
        date.Month = 12;
        date.Year--;
    }
    else
    {
        date.Month--;
    }

    short numberOfDaysInCurrentMonth = numberOfDaysInMonth(date.Month, date.Year);
    
    if (date.Day > numberOfDaysInCurrentMonth)
        date.Day = numberOfDaysInCurrentMonth;
}

void decreaseDateByXMonths(stDate& date,short xMonths)
{
    for (short i = 1; i <= xMonths; i++)
    {
        decreaseDateByOneMonth(date);
    }
}

void decreaseDateByOneYear(stDate& date)
{
    date.Year--;
}

void decreaseDateByXYears(stDate& date, short xYears)
{
    for (short i = 1; i <= xYears; i++)
    {
        decreaseDateByOneYear(date);
    }
}

void decreaseDateByXYearsFaster(stDate& date, short xYears)
{
    date.Year -= xYears;
}

void decreaseDateByOneDecade(stDate& date)
{
    date.Year -= 10;
}

void decreaseDateByXDecades(stDate& date, short xDecades)
{
    for (short i = 1; i <= xDecades; i++)
    {
        decreaseDateByOneDecade(date);
    }
}

void decreaseDateByXDecadesFaster(stDate& date, short xDecadesFaster)
{
    date.Year -= xDecadesFaster * 10;
}

void decreaseDateByOneCentury(stDate& date)
{
    date.Year -= 100;
}

void decreaseDateByOneMillennium(stDate& date)
{
    date.Year -= 1000;
}

int main()
{
    stDate date = fillStDate();

    cout << "\n\nDate after :\n\n";

    decreaseDateByOneDay(date);
    cout << "\n01- Subtracting one day is : \t\t" << 
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    // reviewing printf formating
    printf("01- Subtracting one day (using printf format) : %0*d/%02d/%d\n",
        2, date.Day, date.Month, date.Year);

    short xDays = 10;
    decreaseDateByXDays(date, xDays);
    cout << "02- Subtracting " << xDays << " days is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    decreaseDateByOneWeek(date);
    cout << "03- Subtracting one week is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xWeeks = 10;
    decreaseDateByXWeeks(date, xWeeks);
    cout << "04- Subtracting " << xWeeks << " weeks is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    decreaseDateByOneMonth(date);
    cout << "05- Subtracting one month is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xMonths = 5;
    decreaseDateByXMonths(date, xMonths);
    cout << "06- Subtracting " << xMonths << " months is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    decreaseDateByOneYear(date);
    cout << "07- Subtracting one year is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xYears = 10;
    decreaseDateByXYears(date, xYears);
    cout << "08- Subtracting " << xYears << " years is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xYearsFaster = 10;
    decreaseDateByXYearsFaster(date, xYearsFaster);
    cout << "09- Subtracting " << xYearsFaster << " years (faster) is : \t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    decreaseDateByOneDecade(date);
    cout << "10- Subtracting one decade is : \t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xDecades = 10;
    decreaseDateByXDecades(date, xDecades);
    cout << "11- Subtracting " << xDecades << " decades is : \t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xDecadesFaster = 10;
    decreaseDateByXDecadesFaster(date, xDecadesFaster);
    cout << "12- Subtracting " << xDecadesFaster << " decades (faster) is :" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    decreaseDateByOneCentury(date);
    cout << "13- Subtracting one century is : \t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    decreaseDateByOneMillennium(date);
    cout << "14- Subtracting one millennium is : \t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

}