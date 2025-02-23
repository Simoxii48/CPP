#include <iostream>
using namespace std;

short readYear()
{
    short year = 0;
    cout << "Please enter a year : ";
    cin >> year;
    return year;
}

short readMonth()
{
    short month = 0;
    cout << "Please enter a month : ";
    cin >> month;
    return month;
}

short readDay()
{
    short day = 0;
    cout << "Please enter a day : ";
    cin >> day;
    return day;
}

short dayOrder(short year,short month,short day)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;

    short d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 100)) % 7;

    return d;
}

string dayName(short dayOrder)
{
    string arr[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
    return arr[dayOrder];
}

int main()
{
    short
        year = readYear(),
        month = readMonth(),
        day = readDay();
    short dName = dayOrder(year, month, day);

    cout << "\nDate\t: " << day << "/" << month << "/" << year << endl;
    cout << "Day Order : " << dName << endl;
    cout << "Day Name : " << dayName(dName) << endl;
}