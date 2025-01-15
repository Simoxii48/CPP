
#include <iostream>
using namespace std;

int main()
{
    // Problem #42
    // Write a program to calculate the task duration in seconds

    // Variables declaration
    int
        secondsInMinute = 60,
        secondsInHour = secondsInMinute * 60,
        secondsInDay = secondsInHour * 24;

    int seconds, minutes, hours, days;
   

    // Read user input
    cout << "Please enter the total days : ";
    cin >> days;

    cout << "Please enter the total hours : ";
    cin >> hours;

    cout << "Please enter the total minutes : ";
    cin >> minutes;

    cout << "Please enter the total seconds : ";
    cin >> seconds;

    // Calculation process
    float totalTaskDurationInSeconds = seconds + minutes * secondsInMinute + hours * secondsInHour + days * secondsInDay;

    // Print results
    cout << "The total Task Duration with seconds is : " << totalTaskDurationInSeconds << " second" << endl;


    // Then Solve From Algorithms & Problem solving these Problems:
    // #43, #47, & #48
}