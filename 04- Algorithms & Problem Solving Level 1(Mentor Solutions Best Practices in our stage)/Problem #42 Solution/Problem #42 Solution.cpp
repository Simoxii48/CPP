#include <iostream>
using namespace std;

struct strTaskDuration { int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds; };

int readPositiveNumber(string message) {
    int number = 0;

    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

strTaskDuration readTaskDuration() {
    strTaskDuration taskDuration;

    taskDuration.NumberOfDays = readPositiveNumber("Please enter number of days : ");
    taskDuration.NumberOfHours = readPositiveNumber("Please enter number of hours : ");
    taskDuration.NumberOfMinutes = readPositiveNumber("Please enter number of minutes : ");
    taskDuration.NumberOfSeconds = readPositiveNumber("Please enter number of seconds : ");

    return taskDuration;
}

int taskDurationinSeconds(strTaskDuration taskDuration) {
    int durationInSeconds = 0;

    durationInSeconds = taskDuration.NumberOfDays * 24 * 60 * 60;
    durationInSeconds += taskDuration.NumberOfHours * 60 * 60;
    durationInSeconds += taskDuration.NumberOfMinutes * 60;
    durationInSeconds += taskDuration.NumberOfSeconds;

    return durationInSeconds;
}

int main()
{
    cout << "Task duration in seconds : " << taskDurationinSeconds(readTaskDuration());
}