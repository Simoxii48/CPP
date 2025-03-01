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

bool IsWeekEnd(stDate Date)
{
	//Weekends are Fri and Sat
	short DayIndex = DayOfWeekOrder(Date.Day, Date.Month,
		Date.Year);
	return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(stDate Date)
{
	//Weekends are Sun,Mon,Tue,Wed and Thur
	/*
	short DayIndex = DayOfWeekOrder(Date.Day, Date.Month,
	Date.Year);
	return (DayIndex >= 5 && DayIndex <= 4);
	*/
	//shorter method is to invert the IsWeekEnd: this will save updating code.
	return !IsWeekEnd(Date);
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

string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = {
	"Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}

short readVacationDays()
{
	short vacDays = 0;
	cout << "Please enter vacation days : ";
	cin >> vacDays;
	return vacDays;
}

stDate calculateVacReturnDate(stDate vacStarts,short vacDays)
{
	stDate vacReturnDate = vacStarts;

	while (vacDays != 0)
	{
		if (IsBusinessDay(vacReturnDate))
		{
			vacDays--;
		}
		
		vacReturnDate = IncreaseDateByOneDay(vacReturnDate);
	}

	return vacReturnDate;
}

int main()
{
	cout << "Vacation Starts :\n";
	stDate VacationStarts = ReadFullDate();

	cout << endl;
	short vacationDays = readVacationDays();

	stDate vacReturnDate = calculateVacReturnDate(VacationStarts, vacationDays);
	cout << "\nReturn Date : " << DayShortName(DayOfWeekOrder(vacReturnDate)) << " , "
		<< vacReturnDate.Day << "/" << vacReturnDate.Month << "/" << vacReturnDate.Year << endl;
}