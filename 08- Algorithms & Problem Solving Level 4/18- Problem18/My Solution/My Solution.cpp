#pragma warning(disable : 4996)

#include <iostream>
using namespace std;

struct stDate {
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month;
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
}

stDate ReadFullDate()
{
	stDate Date;
	cout << "Please enter Your Date Of Birth : \n\n";

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

stDate getSystemDate()
{
	stDate date;
	time_t t = time(0);
	tm* now = localtime(&t);

	date.Day = now->tm_mday;
	date.Month = now->tm_mon;
	date.Year = now->tm_year + 1900;

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

bool IsDate1BeforeDate2(stDate date1, stDate date2)
{
	return (date1.Year < date2.Year) ? true : (
		(date1.Year == date2.Year) ? 
			(date1.Month<date2.Month ? true : (date1.Month==date2.Month ? 
				(date1.Day<date2.Day) 
				: false)) 
		: false);
}

bool isLastDayInMonth(stDate date)
{
	return (date.Day == numberOfDaysInMonth(date.Month, date.Year));
}

bool isLastMonthInYear(short month)
{
	return month == 12;
}

stDate increaseDateByOnDay(stDate date)
{
	if (isLastDayInMonth(date))
	{
		if (isLastMonthInYear(date.Month))
		{
			date.Day = 1;
			date.Month = 1;
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

int getDifferenceInDays(stDate date1, stDate date2, bool includeEndDay = false)
{
	int days = 0;
	
	while (IsDate1BeforeDate2(date1, date2))
	{
		days++;
		date1 = increaseDateByOnDay(date1);
	}

	return includeEndDay ? ++days : days;
}

int main()
{
	stDate date = ReadFullDate();
	stDate systemDateNow = getSystemDate();

	cout << "\nYou age is : " << getDifferenceInDays(date, systemDateNow) 
		<< " Day(s).\n";
}