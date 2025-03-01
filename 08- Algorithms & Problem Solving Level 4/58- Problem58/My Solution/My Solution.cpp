#include <iostream>
using namespace std;

struct stDate {
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

struct stPeriod {
    stDate stStartDate;
    stDate stEndDate;
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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
		: false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) &&
		!IsDate1EqualDate2(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

enDateCompare CompareDates(stDate Date1, stDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;

	if (IsDate1EqualDate2(Date1, Date2))
		return enDateCompare::Equal;
	/* if (IsDate1AfterDate2(Date1,Date2))
	return enDateCompare::After;*/

	//this is faster
	return enDateCompare::After;
}

bool isPeriodsOverlaps(stPeriod period1, stPeriod period2)
{
	return (
		CompareDates(period2.stStartDate, period1.stEndDate) != enDateCompare::After
		||
		CompareDates(period1.stStartDate, period2.stEndDate) != enDateCompare::Before
		);
}

int main()
{
	stPeriod period1, period2;
	
	cout << "Enter Period 1 :\n";
	
	cout << "Enter Start Date :\n";
	period1.stStartDate = ReadFullDate();

	cout << "\n\nEnter End Date :\n";
	period1.stEndDate = ReadFullDate();

	cout << "\n\nEnter Period 2 :\n";

	cout << "Enter Start Date :\n";
	period2.stStartDate = ReadFullDate();

	cout << "\n\nEnter End Date :\n";
	period2.stEndDate = ReadFullDate();

	if (isPeriodsOverlaps(period1, period2))
		cout << "\nYes, Periods Overlaps.\n";
	else
		cout << "\nNo, periods did NOT Overlaps.\n";
}