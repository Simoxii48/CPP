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

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

bool isLeapYear(short year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numberOfDaysInMonth(short month, short year)
{
	if (month < 1 || month > 12)
		return 0;

	short monthsDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

bool isLastDayInMonth(stDate date)
{
	return (date.Day == numberOfDaysInMonth(date.Month, date.Year));
}

bool isLastMonthInYear(stDate date)
{
	return date.Month == 12;
}

void increaseDateByOneDay(stDate& date)
{
		isLastMonthInYear(date) ? 

		(isLastDayInMonth(date) ? (date.Year++, date.Month = 1, date.Day = 1) : (date.Day++)) 
		: 
		(isLastDayInMonth(date) ? (date.Month++, date.Day = 1) : date.Day++);
}

int main()
{
	stDate date = ReadFullDate();

	increaseDateByOneDay(date);

	cout << "\nDate after adding one day is : " 
		<< date.Day << "/" << date.Month << "/" << date.Year << endl;
}