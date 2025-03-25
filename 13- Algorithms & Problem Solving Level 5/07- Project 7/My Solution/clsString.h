#pragma once

#include <iostream>
#include <stack>

using namespace std;

class clsString
{
private:
	string _Value;
	stack <string> _Undo;
	stack <string> _Redo;
public:

	string getValue()
	{
		return _Value;
	}

	void setValue(string newValue)
	{
		_Undo.push(_Value);
		_Value = newValue;
	}

	__declspec(property(get = getValue, put = setValue))string Value;

	void Undo()
	{
		if (!_Undo.empty())
		{
			_Redo.push(_Value);
			_Value = _Undo.top();
			_Undo.pop();
		}
	}

	void Redo()
	{
		if (!_Redo.empty())
		{
			_Undo.push(_Value);
			_Value = _Redo.top();
			_Redo.pop();
		}
	}
};