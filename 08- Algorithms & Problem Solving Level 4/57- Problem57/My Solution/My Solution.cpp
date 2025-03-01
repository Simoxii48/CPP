#include <iostream>
using namespace std;

struct stDate
{
	short Year;
	short Month;
	short Day;
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

bool isDate1BeforeDate2(stDate date1, stDate date2)
{
	return date1.Year < date2.Year ? true : (
		(date1.Year == date2.Year) ? (
			(date1.Month < date2.Month) ? true : (
				(date1.Month == date2.Month) ? (
					date1.Day < date2.Day
					) : false
				)
			) : false
		);
}

bool isDate1EqualDate2(stDate date1, stDate date2)
{
	return date1.Year == date2.Year ? (
		(date1.Month == date2.Month) ? (
			date1.Day == date2.Day
			) : false
		) : false;
}

bool isDate1AfetrDate2(stDate date1, stDate date2)
{
	return (!isDate1BeforeDate2(date1, date2) && !isDate1EqualDate2(date1, date2));
}

short compare2Dates(stDate date1, stDate date2)
{
	/* using if statements
	
	if (isDate1BeforeDate2(date1, date2))
		return -1;
	
	else if (isDate1EqualDate2(date1, date2))
		return 0;
	
	else if (isDate1AfetrDate2(date1, date2))
		return 1;
	*/

	// used short hand if
	return isDate1BeforeDate2(date1, date2) ? -1 : (
		isDate1EqualDate2(date1, date2) ? 0 : (
			isDate1AfetrDate2(date1, date2)
			)
		);
}

int main()
{
	cout << "Enter Date 1:\n";
	stDate date1 = ReadFullDate();

	cout << "\nEnter Date 2:\n";
	stDate date2 = ReadFullDate();

	cout << "\nCompare Result = " << compare2Dates(date1, date2) << endl;
}