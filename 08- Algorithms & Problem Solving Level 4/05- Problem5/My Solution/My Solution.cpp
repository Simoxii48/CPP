#include <iostream>
using namespace std;

short readYear()
{
    short year = 0;
    cout << "Please enter a year to check : ";
    cin >> year;
    return year;
}

short readMonth()
{
    short month = 0;
    cout << "Please enter a month to check : ";
    cin >> month;
    return month;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numberOfDays(short year,short month)
{
    if (isLeapYear(year))
    {
        switch (month)
        {
        case 1:
            return 31;
        case 2:
            return 29;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
        }
    }
    else
    {
        switch (month)
        {
        case 1:
            return 31;
        case 2:
            return 28;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
        }
    }
}

short numberOfHours(short year,short month)
{
    return numberOfDays(year,month) * 24;
}

int numberOfMinutes(short year, short month)
{
    return numberOfHours(year,month) * 60;
}

int numberOfSeconds(short year, short month)
{
    return numberOfMinutes(year,month) * 60;
}

int main()
{
    short year = readYear();
    short month = readMonth();

    cout << "Number of Days\t\tin Month [" << month << "] is : " << numberOfDays(year, month) << endl;
    cout << "Number of Hours\t\tin Month [" << month << "] is : " << numberOfHours(year, month) << endl;
    cout << "Number of Minutes\tin Month [" << month << "] is : " << numberOfMinutes(year, month) << endl;
    cout << "Number of Seconds\tin Month [" << month << "] is : " << numberOfSeconds(year, month) << endl;

}