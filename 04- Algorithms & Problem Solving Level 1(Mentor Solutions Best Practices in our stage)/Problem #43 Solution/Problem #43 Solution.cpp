#include <iostream>
using namespace std;

struct strTaskDuration { int numberOfDays, numberOfHours, numberOfMinutes, numberOfSeconds; };

int readPositiveNumber(string message) {
    int number = 0;

    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

strTaskDuration secondsToTaskDuration(int totalSeconds) {
    strTaskDuration taskDuration;

    const int secondsPerDay = 24 * 60 * 60;
    const int secondsPerHour = 60 * 60;
    const int secondsPerMinute = 60;

    int remainder = 0;
    taskDuration.numberOfDays = totalSeconds / secondsPerDay;
    remainder = totalSeconds % secondsPerDay;
    taskDuration.numberOfHours = remainder / secondsPerHour;
    remainder %= secondsPerHour;
    taskDuration.numberOfMinutes = remainder / secondsPerMinute;
    remainder %= secondsPerMinute;
    taskDuration.numberOfSeconds = remainder;

    return taskDuration;
}

void printTaskDurationDetails(strTaskDuration taskDuration) {
    cout << endl << 
        taskDuration.numberOfDays << " : " <<
        taskDuration.numberOfHours << " : " <<
        taskDuration.numberOfHours << " : " <<
        taskDuration.numberOfSeconds << endl;
}

int main()
{
    int totalSeconds = readPositiveNumber("Please enter total seconds : ");
    printTaskDurationDetails(secondsToTaskDuration(totalSeconds));
}