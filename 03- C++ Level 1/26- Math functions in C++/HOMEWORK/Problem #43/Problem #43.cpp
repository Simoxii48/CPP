
#include <iostream>
using namespace std;

int main()
{
    // Problem #43 Write a program to calculate task duration of seconds
    int taskDurationOfSeconds, remainder;

    cout << "Please enter the task duration with seconds : ";
    cin >> taskDurationOfSeconds;

    int
        secondsInDay = 60 * 60 * 24,
        secondsInHour = 60 * 60,
        secondsInMinutes = 60;

    int day = taskDurationOfSeconds / secondsInDay;
    remainder = taskDurationOfSeconds % secondsInDay;
    int hour = remainder / secondsInHour;
    remainder %= secondsInHour;
    int minute = remainder / secondsInMinutes;
    remainder %= secondsInMinutes;
    int second = remainder;

    cout << "The task duration is " << round(day) <<" (day/s)" << " : " << round(hour) << " (hour/s)" << " : " << round(minute) << " (minute/s)" << " : " << round(second) << " (seconde/s)" << endl;
}