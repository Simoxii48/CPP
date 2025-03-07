#pragma warning(disable : 4996)

#include <iostream>
using namespace std;

struct stDate
{
	short Year;
	short Month;
	short Day;
};

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

void swapDates(stDate& date1, stDate& date2)
{
	stDate tempdate;

	tempdate.Day = date1.Day;
	tempdate.Month = date1.Month;
	tempdate.Year = date1.Year;

	date1.Day = date2.Day;
	date1.Month = date2.Month;
	date1.Year = date2.Year;

	date2.Day = tempdate.Day;
	date2.Month = tempdate.Month;
	date2.Year = tempdate.Year;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool
	IncludeEndDay = false)
{
	int Days = 0;
	short swapFlagValue = 1;

	if (!IsDate1BeforeDate2(Date1, Date2))
	{
		swapDates(Date1, Date2);
		swapFlagValue = -1;
	}

	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days * swapFlagValue : Days * swapFlagValue;
}

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

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

stDate GetSystemDate()
{
	stDate Date;
	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;

	return Date;
}

int main()
{
	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();

	cout << "\nDifference is : "
		<< GetDifferenceInDays(Date1, Date2) << " Day(s).";

	cout << "\nDifference (including End Day) is : "
		<< GetDifferenceInDays(Date1, Date2, true) << " Day(s).";

	system("pause>0");
	return 0;
}