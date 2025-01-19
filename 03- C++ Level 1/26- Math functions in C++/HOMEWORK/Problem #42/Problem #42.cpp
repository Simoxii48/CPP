
#include <iostream>
using namespace std;

int main()
{
    // Problem #42 Write a program to calculate the task duration in seconds & print it on the screen
    int days, hours, minutes, seconds;

    cout << "Please enter how many days : ";
    cin >> days;

    cout << "Please enter how many hours : ";
    cin >> hours;

    cout << "Please enter how many minutes : ";
    cin >> minutes;

    cout << "Please enter how many seconds : ";
    cin >> seconds;

    int
        secondsInDay = 60 * 60 * 24,
        secondsInHour = 60 * 60,
        secondsInMinute = 60;


    float taskDurationInSeconds = days * secondsInDay + hours * secondsInHour + minutes * secondsInMinute + seconds;

    cout << "The task duration in seconds is : " << round(taskDurationInSeconds) << endl;
}