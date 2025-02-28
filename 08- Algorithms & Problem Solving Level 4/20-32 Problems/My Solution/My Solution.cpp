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

bool isLastMonthInYear(stDate date)
{
    return date.Month == 12;
}

bool isLastDayInMonth(stDate date)
{
    return date.Day == numberOfDaysInMonth(date.Month, date.Year);
}

stDate increaseDateByOneDay(stDate& date)
{
    if (isLastDayInMonth(date))
    {
        if (isLastMonthInYear(date))
        {
            date.Month = 1;
            date.Day = 1;
            date.Year++;
        }
        else
        {
            date.Month++;
            date.Day = 1;
        }
    }
    else
    {
        date.Day++;
    }
    return date;
}

stDate increaseDateByXDays(stDate& date, short xDays)
{
    for (short i = 1; i <= xDays; i++)
    {
        increaseDateByOneDay(date);
    }
    return date;
}

stDate increaseDateByOneWeek(stDate& date)
{
    for (short i = 1; i <= 7; i++)
    {
        increaseDateByOneDay(date);
    }
    return date;
}

stDate increaseDateByXWeeks(stDate& date, short xWeek)
{
    for (short i = 1; i <= xWeek; i++)
    {
        increaseDateByOneWeek(date);
    }

    return date;
}

stDate increaseDateByOneMonth(stDate& date)
{
    if (!isLastMonthInYear(date))
    {
        date.Month++;
    }
    else
    {
        date.Month = 1;
        date.Year++;
    }
    return date;
}

stDate increaseDateByXMonths(stDate& date, short xMonths)
{
    for (short i = 1; i <= xMonths; i++)
    {
        increaseDateByOneMonth(date);
    }
    return date;
}

void increaseDateByOneYear(stDate& date)
{
    date.Year++;
}

void increaseDateByXYears(stDate& date, short xYears)
{
    for (short i = 1; i <= xYears; i++)
    {
        increaseDateByOneYear(date);
    }
}

void increaseDateByXYearsFaster(stDate& date,short xYearsFaster)
{
    date.Year += xYearsFaster;
}

void increaseDateByOneDecade(stDate& date)
{
    increaseDateByXYearsFaster(date, 10);
}

void increaseDateByXDecades(stDate& date, short xDecades)
{
    for (short i = 1; i <= xDecades; i++)
    {
        increaseDateByOneDecade(date);
    }
}

void increaseDateByXDecadesFaster(stDate& date, short xDecadesFaster)
{
    date.Year += (xDecadesFaster * 10);
}

void increaseDateByOneCentury(stDate& date)
{
    increaseDateByXDecadesFaster(date, 10);
}

void increaseDateByOneMillennium(stDate& date)
{
    increaseDateByXDecadesFaster(date, 100);
}

int main()
{
    stDate date = fillStDate();

    cout << "\nDate after :\n\n";

    increaseDateByOneDay(date);
    cout << "01- Adding one day is : \t\t" << 
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xDays = 10;
    increaseDateByXDays(date,xDays);
    cout << "02- Adding " << xDays << " days is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    increaseDateByOneWeek(date);
    cout << "03- Adding one week is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xWeeks = 10;
    increaseDateByXWeeks(date, xWeeks);
    cout << "04- Adding " << xWeeks << " weeks is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    increaseDateByOneMonth(date);
    cout << "05- Adding one month is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xMonths = 5;
    increaseDateByXMonths(date, xMonths);
    cout << "06- Adding " << xMonths << " months is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    increaseDateByOneYear(date);
    cout << "07- Adding one year is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xYears = 10;
    increaseDateByXYears(date, xYears);
    cout << "08- Adding " << xYears << " years is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xYearsFaster = 10;
    increaseDateByXYearsFaster(date, xYearsFaster);
    cout << "09- Adding " << xYearsFaster << " years (faster) is : \t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    increaseDateByOneDecade(date);
    cout << "10- Adding one decade is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xDecades = 10;
    increaseDateByXDecades(date, xDecades);
    cout << "11- Adding " << xDecades << " decades is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    short xDecadesFaster = 10;
    increaseDateByXDecadesFaster(date, xDecadesFaster);
    cout << "12- Adding " << xDecadesFaster << " decades (faster) is : \t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    increaseDateByOneCentury(date);
    cout << "13- Adding one century is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;

    increaseDateByOneMillennium(date);
    cout << "14- Adding one Millennium is : \t\t" <<
        date.Day << "/" << date.Month << "/" << date.Year << endl;
}