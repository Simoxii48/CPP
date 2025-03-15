#pragma once
#include <iostream>
#include "clsDate.h"

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
		return (Date.IsDateAfterDate2(DateFrom) && Date.IsDateBeforeDate2(DateTo));
	}
};

