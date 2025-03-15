#pragma once
#include <iostream>

class clsInputValidate
{
public:
	static bool isNumberBetween(int number, int from, int to)
	{
		return (number >= from && number <= to);
	}
};

