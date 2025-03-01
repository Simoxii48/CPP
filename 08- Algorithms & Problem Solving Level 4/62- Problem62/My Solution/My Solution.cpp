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
	if (month < 1 || month>12)
		return 0;

	short monthsDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2) ? (isLeapYear(year) ? 29 : 28) : monthsDays[month - 1];
}

bool isValidateDate(stDate date)
{
	return !(
		date.Day > numberOfDaysInMonth(date.Month, date.Year)
		||
		numberOfDaysInMonth(date.Month, date.Year) == 0
		);
}

int main()
{
	stDate date = ReadFullDate();

	if (isValidateDate(date))
		cout << "\nYes, Date is a valid date.\n";
	else
		cout << "\nNo, date is NOT a valid date.\n";
}