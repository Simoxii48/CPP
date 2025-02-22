#include <iostream>
using namespace std;

bool IsLeapYear(short Year)
{
	/* All The logics to be replaced with one line of code
	
	// leap year if perfectly divisible by 400
	if (Year % 400 == 0) {
		return true;
	}

	// not a leap year if divisible by 100
	// but not divisible by 400
	else if (Year % 100 == 0) {
		return false;
	}

	// leap year if not divisible by 100
	// but divisible by 4
	else if (Year % 4 == 0) {
		return true;
	}

	// all other years are not leap years
	else {
		return false;
	}
	*/
	return (Year % 400 == 0 || Year % 4 == 0) ? true : (Year % 100 == 0) ? false : false;
}

short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year to check? ";
	cin >> Year;
	return Year;
}

int main()
{
	short Year = ReadYear();

	if (IsLeapYear(Year))
		cout << "\nYes, Year [" << Year << "] is a leap year.\n";
	else
		cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";

	system("pause>0");
	return 0;
}