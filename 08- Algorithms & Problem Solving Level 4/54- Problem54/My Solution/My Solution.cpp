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

stDate fillDate()
{
    stDate date;

    date.Day = readDay();
    date.Month = readMonth();
    date.Year = readYear();

    return date;
}

string shortDaysNames(short dayIndex)
{
    string daysNames[7] = { "Sun", "Mon","Tue","Wed","Thu","Fri","Sat" };
    return daysNames[dayIndex];
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

short DayOfWeekOrder(stDate date)
{
    return DayOfWeekOrder(date.Day, date.Month, date.Year);
}

bool isWeekend(stDate date)
{
    short dayId = DayOfWeekOrder(date);
    return (dayId == 6 || dayId == 0);
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
        Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
            Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month>12)
        return 0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
        days[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month,
        Date.Year));
}

bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }
    return Date;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool
    IncludeEndDay = false)
{
    int Days = 0;
    while (IsDate1BeforeDate2(Date1, Date2))
    {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }
    return IncludeEndDay ? ++Days : Days;
}

short vacationDays(stDate vacStarts,stDate vacEnds)
{
    short vacDays = 0;

    while (GetDifferenceInDays(vacStarts, vacEnds))
    {
        if (!isWeekend(vacStarts))
        {
            vacDays++;
        }
        
        vacStarts = IncreaseDateByOneDay(vacStarts);

    }
    return vacDays;
}

int main()
{
    cout << "Vacation Starts :\n\n";
    stDate vacationStarts = fillDate();

    cout << "\nVacation Ends :\n";
    stDate vacationEnds = fillDate();

    cout << "\nVacation From : " << shortDaysNames(DayOfWeekOrder(vacationStarts)) << " , "
        << vacationStarts.Day << "/" << vacationStarts.Month << "/" << vacationStarts.Year;

    cout << "\nVacation To : " << shortDaysNames(DayOfWeekOrder(vacationEnds)) << " , "
        << vacationEnds.Day << "/" << vacationEnds.Month << "/" << vacationEnds.Year << endl;

    cout << "\nActual Vacation Days is : " <<
        vacationDays(vacationStarts, vacationEnds) << endl;

}