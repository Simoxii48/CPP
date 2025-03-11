#pragma once
#include <iostream>
using namespace std;

class clsString
{
private:
	string _Value;
public:
	clsString()
	{
		_Value = "";
	}
	clsString(string Value)
	{
		_Value = Value;
	}

	string getValue()
	{
		return _Value;
	}

	void setValue(string newValue)
	{
		_Value = newValue;
	}

	__declspec(property(get = getValue, put = setValue)) string Value;
};

