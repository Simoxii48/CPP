#include <iostream>
using namespace std;

short readYear()
{
    short year = 0;
    cout << "Please enter a year to check : ";
    cin >> year;
    return year;
}

bool isLeapYear(short year)
{
    return ((year % 400 == 0 && year % 100 != 0) || (year % 4 == 0));
}

short calculateNumberOfDaysInYear(short year)
{
    return isLeapYear(year) ? 366 : 365;
}

short calculateNumberOfHoursInYear(short numberOfDays)
{
    return numberOfDays * 24;
}

int calculateNumberOfMinutesInYear(short numberOfDays)
{
    return numberOfDays * 60 * 24;
}

int calculateNumberOfSecondsInYear(short numberOfDays)
{
    return numberOfDays * 60 * 60 * 24;
}

int main()
{
    short year = readYear();
    
    int numberOfDays = calculateNumberOfDaysInYear(year);
    int numberOfHours = calculateNumberOfHoursInYear(numberOfDays);
    int numberOfMinutes = calculateNumberOfMinutesInYear(numberOfDays);
    int numberOfSeconds = calculateNumberOfSecondsInYear(numberOfDays);

    cout << "Number Of Days\t\tin Year [" << year << "] is : " << numberOfDays << endl;
    cout << "Number Of Hours\t\tin Year [" << year << "] is : " << numberOfHours << endl;
    cout << "Number Of Minutes\tin Year [" << year << "] is : " << numberOfMinutes << endl;
    cout << "Number Of Seconds\tin Year [" << year << "] is : " << numberOfSeconds << endl;

}