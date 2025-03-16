#pragma once

#include <iostream>
using namespace std;


class clsPerson
{
private:
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	clsPerson(string FirstName, string LastName, string Email, string Phone)
	{
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	void setFirstName(string newFirstName)
	{
		_FirstName = newFirstName;
	}

	__declspec(property(get = GetFirstName, put = setFirstName)) string FirstName;

	string GetLastName()
	{
		return _LastName;
	}

	void setLastName(string newLastName)
	{
		_LastName = newLastName;
	}

	__declspec(property(get = GetLastName, put = setLastName)) string LastName;

	string GetEmail()
	{
		return _Email;
	}

	void setEmail(string newEmail)
	{
		_Email = newEmail;
	}

	__declspec(property(get = GetEmail, put = setEmail)) string Email;

	string GetPhone()
	{
		return _Phone;
	}

	void setPhone(string newPhone)
	{
		_Phone = newPhone;
	}

	__declspec(property(get = GetPhone, put = setPhone)) string Phone;

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
};