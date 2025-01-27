#include <iostream>
using namespace std;

enum enDaysOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int readNumberInRange(string message, int from, int to) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number<from || number>to);

    return number;
}

enDaysOfWeek readDayOfWeek() {
    return (enDaysOfWeek)readNumberInRange("Please enter the day number : ", 1, 7);
}

string getDayOfWeek(enDaysOfWeek day) {
    switch (day) {
    case enDaysOfWeek::Sat:
        return "Saturday";
    case enDaysOfWeek::Sun:
        return "Sunday";
    case enDaysOfWeek::Mon:
        return "Monday";
    case enDaysOfWeek::Tue:
        return "Tuesday";
    case enDaysOfWeek::Wed:
        return "Wednesday";
    case enDaysOfWeek::Thu:
        return "Thursday";
    case enDaysOfWeek::Fri:
        return "Friday";
    default:
        return "Not a week day";
    }
}

int main()
{
    cout << getDayOfWeek(readDayOfWeek());
}