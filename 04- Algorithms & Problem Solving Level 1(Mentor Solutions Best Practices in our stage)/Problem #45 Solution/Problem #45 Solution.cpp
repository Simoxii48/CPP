#include <iostream>
using namespace std;

enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

int readNumberInRange(string message, int from, int to) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number<from || number>to);

    return number;
}

enMonthOfYear readMonthOfYear() {
    return (enMonthOfYear)readNumberInRange("Please enter your month number : ", 1, 12);
}

string getMonthOfYear(enMonthOfYear month) {
    switch (month) {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "February";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::Apr:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "Jun";
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Sep:
        return "September";
    case enMonthOfYear::Oct:
        return "October";
    case enMonthOfYear::Nov:
        return "November";
    case enMonthOfYear::Dec:
        return "December";
    default:
        return "Not a year month";
    }
}

int main()
{
    cout << getMonthOfYear(readMonthOfYear()) << endl;
}