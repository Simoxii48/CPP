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

stDate fillStDate()
{
	stDate date;

	date.Day = ReadDay();
	date.Month = ReadMonth();
	date.Year = ReadYear();

	return date;
}

bool isLastDayInAMonth(stDate date)
{
	return (date.Day == numberOfDaysInMonth(date.Month,date.Year));
}

bool isLastMonthInAYear(stDate date)
{
	return (date.Month == 12);
}

int main()
{
	stDate date = fillStDate();

	if (isLastDayInAMonth(date))
		cout << "\nYes, Day is last Day in Month.\n";
	else
		cout << "\nNo, Day is NOT last Day in Month.\n";

	if (isLastMonthInAYear(date))
		cout << "\nYes, Month is last Month in Year.\n";
	else
		cout << "\nNo, Month is NOT last Month in Year.\n";
}