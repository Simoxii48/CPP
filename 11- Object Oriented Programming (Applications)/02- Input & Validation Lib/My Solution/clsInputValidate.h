#pragma once
#include <iostream>
#include "clsDate.h"
#include <typeinfo>

class clsInputValidate
{
public:
	static bool isNumberBetween(int number, int from, int to)
	{
		return (number >= from && number <= to);
	}

	static bool isNumberBetween(double number, double from, double to)
	{
		return (number >= from && number <= to);
	}

	static bool isDateBetween(clsDate Date, clsDate DateFrom, clsDate DateTo)
	{
		return 
			(Date.IsDateAfterDate2(DateFrom) && Date.IsDateBeforeDate2(DateTo))
			||
			(Date.IsDateBeforeDate2(DateFrom) && Date.IsDateAfterDate2(DateTo));
	}

	static int readIntNumber(string errorMessage)
	{
		int x = 0;
		cin >> x;
		
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << errorMessage;
			cin >> x;
		}

		return x;
	}

	static int readIntNumberBetween(int from, int to, string errorMsg)
	{
		int x = readIntNumber("Invalid number, Enter again : ");
		
		while(!isNumberBetween(x, from, to))
		{
			cout << errorMsg;
			x = readIntNumber("Invalid number, Enter again : ");
		}

		return x;
	}

	static int readDblNumber(string errorMessage)
	{
		double x = 0;
		cin >> x;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << errorMessage;
			cin >> x;
		}

		return x;
	}

	static double readDblNumberBetween(double from, double to, string errorMsg)
	{
		double x = readIntNumber("Invalid number, Enter again : ");

		while (!isNumberBetween(x, from, to))
		{
			cout << errorMsg;
			x = readIntNumber("Invalid number, Enter again : ");
		}

		return x;
	}

	static bool isValideDate(clsDate Date)
	{
		return Date.IsValidDate(Date);
	}
};

