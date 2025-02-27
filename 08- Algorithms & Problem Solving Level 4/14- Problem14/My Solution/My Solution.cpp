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

bool isDate1EqualDate2(stDate date1, stDate date2)
{
	return (date1.Year == date2.Year) ? 
		((date1.Month == date2.Month) ? (date1.Day == date2.Day) : false) 
		: false;
}

int main()
{
	stDate date1 = ReadFullDate();
	stDate date2 = ReadFullDate();

	if (isDate1EqualDate2(date1, date2))
		cout << "\nYes, Date1 is Equal to Date2.\n";
	else
		cout << "\nNo, Date1 is NOT Equal to Date2.\n";

}