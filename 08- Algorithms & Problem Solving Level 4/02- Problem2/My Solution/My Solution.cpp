#include <iostream>
using namespace std;

// Leap year means the year with 366 days instead of 365

int readYear()
{
    int year = 0;
    cout << "Enter year to check : ";
    cin >> year;
    return year;
}

bool isLeapYear(int year)
{
    if (year % 400 != 0)
    {
        return true;
    }

    if (year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }

    // if both conditions fails means that it's not leap year
    return false;
}

void printLeapYearResult(bool isLeapYear)
{
    isLeapYear ? cout << "Leap Year\n" : cout << "Not Leap Year\n";
}

int main()
{
    float year = readYear();

    printLeapYearResult(isLeapYear(year));
}