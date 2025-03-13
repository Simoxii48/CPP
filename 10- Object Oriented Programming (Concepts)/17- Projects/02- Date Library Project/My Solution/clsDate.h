#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "clsString.h"
using namespace std;

class clsDate
{
private:
	short _Day;
	short _Month;
	short _Year;

public:
	// first constructor
	clsDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		
		_Day = now->tm_mday;
		_Month = now->tm_mon + 1;
		_Year = now->tm_year + 1900;
	};
	
	// second constructor
	clsDate(string date)
	{
		vector<string> splittedDate = clsString::Split(date, "/");
		
		_Day = stoi(splittedDate[0]);
		_Month = stoi(splittedDate[1]);
		_Year = stoi(splittedDate[2]);
	};
	
	// third constructor
	clsDate(short Day, short Month, short Year)
	{
		_Day = Day;
		_Month = Month;
		_Year = Year;
	};

	// fourth constructor
	clsDate(short numberOfDayInYear, short Year)
	{
		GetDateFromDayOrderInYear(numberOfDayInYear, Year);
	};

	// print method
	void Print()
	{
		cout << _Day << "/" << _Month << "/" << _Year << endl;
	}

	// static is leap year
	static bool isLeapYear(short year)
	{
		// if year is divisible by 4 AND not divisible by 100
		// OR if year is divisible by 400
		// then it is a leap year
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	}

	// is leap year method
	bool isLeapYear()
	{
		return isLeapYear(_Year);
	}

	// static number of days 
	static short NumberOfDaysInAMonth(short Month, short Year)
	{
		if (Month < 1 || Month>12)
			return 0;
		int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
			days[Month - 1];
	}

	// number of days method
	short NumberOfDaysInAMonth()
	{
		return NumberOfDaysInAMonth(_Month, _Year);
	}

	// date from day order
	void GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
	{
		short RemainingDays = DateOrderInYear;
		short MonthDays = 0;
		_Year = Year;
		_Month = 1;

		while (true)
		{
			MonthDays = NumberOfDaysInAMonth(_Month, Year);
			if (RemainingDays > MonthDays)
			{
				RemainingDays -= MonthDays;
				_Month++;
			}
			else
			{
				_Day = RemainingDays;
				break;
			}
		}
	}

	// static number of days in year
	static short NumberOfDaysInAYear(short Year)
	{
		return isLeapYear(Year) ? 366 : 365;
	}

	// number of days in year method
	short NumberOfDaysInAYear()
	{
		return NumberOfDaysInAYear(_Year);
	}

	// static number of hours in year
	static short NumberOfHoursInAYear(short Year)
	{
		return NumberOfDaysInAYear(Year) * 24;
	}

	// number of hours in year method
	short NumberOfHoursInAYear()
	{
		return NumberOfHoursInAYear(_Year);
	}

	// static 
	static int NumberOfMinutesInAYear(short Year)
	{
		return NumberOfHoursInAYear(Year) * 60;
	}

	// method
	int NumberOfMinutesInAYear()
	{
		return NumberOfMinutesInAYear(_Year);
	}

	// static 
	static int NumberOfSecondsInAYear(short Year)
	{
		return NumberOfMinutesInAYear(Year) * 60;
	}

	// method
	int NumberOfSecondsInAYear()
	{
		return NumberOfSecondsInAYear(_Year);
	}

	// static
	static short NumberOfHoursInAMonth(short Month, short Year)
	{
		return NumberOfDaysInAMonth(Month, Year) * 24;
	}

	// method
	short NumberOfHoursInAMonth()
	{
		return NumberOfHoursInAMonth(_Month, _Year);
	}
};