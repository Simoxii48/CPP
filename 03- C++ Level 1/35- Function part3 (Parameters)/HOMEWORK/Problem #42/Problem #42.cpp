#include <iostream>
using namespace std;

// procedure to read task duration in days,hours,minutes & seconds
void readTaskDuration(int& days, int& hours, int& minutes, int& seconds) {
    cout << "Please enter how many days the task took : ";
    cin >> days;

    cout << "Please enter how many hours the task took : ";
    cin >> hours;

    cout << "Please enter how many minutes the task took : ";
    cin >> minutes;

    cout << "Please enter how many seconds the task took : ";
    cin >> seconds;
}

// int function to calculate the task duration 
int calculateTaskDuration(int days, int hours, int minutes, int seconds) {
    int
        secondsInDay = 60 * 60 * 24,
        secondsInHour = 60 * 60,
        secondsInMinutes = 60,
        totalTaskDurationInSeconds = days * secondsInDay + hours * secondsInHour + minutes * secondsInMinutes + seconds;
    return totalTaskDurationInSeconds;
}

// procedure to print the total task duration in seconds
void printTotalTaskDurationInSeconds(int totalTaskDuration) {
    cout << "Total task duration in seconds is : " << totalTaskDuration << endl;
}

int main()
{
    int days, hours, minutes, seconds;
    
    // read inputs from the user
    readTaskDuration(days, hours, minutes, seconds);

    // calculation process
    printTotalTaskDurationInSeconds(calculateTaskDuration(days, hours, minutes, seconds));

    return 0;
}