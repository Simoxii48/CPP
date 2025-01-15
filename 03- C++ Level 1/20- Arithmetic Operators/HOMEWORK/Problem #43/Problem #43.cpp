
#include <iostream>
using namespace std;

int main()
{
    
    // Problem #43
    // Write a program to change the task duration from seconds to days, hours, minutes & seconds

    // Variables declaration
    int
        secondsInMinute = 60,
        secondsInHour = secondsInMinute * 60,
        secondsInDay = secondsInHour * 24;

    int seconds;


    // Read user input
    cout << "Please enter the total seconds : ";
    cin >> seconds;

    // Calculation process
    int
        days = seconds / secondsInDay,
        hours = (seconds / secondsInHour) % 24,
        minutes = (seconds / secondsInMinute) % 60,
        second = seconds % minutes;

    // Print results
    cout << "The total days is : " << days << " days : " << hours << " hours : " << minutes << " minutes : " << second << " second" << endl;
    


    // Mentor Solution
    // Declare total seconds to be given from the user and initialize the seconds value accordingly
    int totalSeconds;

    cout << "Please enter the total number of seconds : ";
    cin >> totalSeconds;
    
    // i choosed to declare them const because its value is actually constant and does'nt need to be changed later
    const int
        secondsPerDay = 60 * 60 * 24,
        secondsPerHour = 60 * 60,
        secondsPerMinutes = 60;

    // declare the variables that will hold the calculations results
    int 
        numberOfDays = floor(totalSeconds / secondsPerDay), // floor() function used to floor down the result without fractions
        remainder = totalSeconds % secondsPerDay; // the remainder will hold the rest of the total seconds divided by seconds per day
    
    int numberOfHours = floor(remainder / secondsPerHour);
    remainder = remainder % secondsPerHour;
    int numberOfMinutes = floor(remainder / secondsPerMinutes);
    remainder = remainder % secondsPerMinutes;
    int numberOfSeconds = remainder;

    cout << numberOfDays << " : " << numberOfHours << " : " << numberOfMinutes << " : " << numberOfSeconds << endl;

    // Mentor Solution is better that mine, my solution encounter many peoblems while the prof solution works just fine

    // Then Solve From Algorithms & Problem solving these Problems:
    // #47, & #48
}