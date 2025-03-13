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
	clsDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		
		_Day = now->tm_mday;
		_Month = now->tm_mon + 1;
		_Year = now->tm_year + 1900;
	};
};