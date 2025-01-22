#include <iostream>
using namespace std;

// I used advanced topics ragarding my level now but i did it my self i understand the flow of the program :)
// I might used the topics a bit not professionally, but i will solve it better next exercices ;) ;)

// structure to hold the function values
struct stTaskDuration {
    int days;
    int hours;
    int minutes;
    int seconds;
};

// int function to read total task seconds from the user
int readTotalTaskDurationInSeconds(int& totalTaskDuration) {
    cout << "Please enter the total tas duration in seconds : ";
    cin >> totalTaskDuration;
    return totalTaskDuration;
}

// procedure to calculate task seconds to days,hours,minutes & seconds
stTaskDuration calculateTaskDuration(int totalTaskDuration) {
    int secondsInDay = 60 * 60 * 24,
        secondsInHour = 60 * 60,
        secondsInMinute = 60,
        days = totalTaskDuration / secondsInDay,
        remainder = totalTaskDuration % secondsInDay,
        hours = remainder / secondsInHour;
    remainder %= secondsInHour;
    int minutes = remainder / secondsInMinute;
    remainder %= secondsInMinute;
    int seconds = remainder;

    // define struct to save values inside
    stTaskDuration taskDurationWithDetails;

    taskDurationWithDetails.days = days;
    taskDurationWithDetails.hours = hours;
    taskDurationWithDetails.minutes = minutes;
    taskDurationWithDetails.seconds = seconds;

    // return the struct filled
    return taskDurationWithDetails;
}

// procedure to print the result 
void printTaskDuration(stTaskDuration taskDurationInDetails) {
    cout << taskDurationInDetails.days << " : " << taskDurationInDetails.hours << " : " << taskDurationInDetails.minutes << " : " << taskDurationInDetails.seconds << endl;
}

int main()
{
    // total seconds entered from the user
    int totalTaskDurationInSeconds;

    // local structure variable to hold the filled returned structure
    stTaskDuration taskDurationWithDaysHoursMinutesSeconds;

    // read total task duration from the user
    readTotalTaskDurationInSeconds(totalTaskDurationInSeconds);

    // Save the calculation process in a local structure variable, we may use the filled structure somewhere else within the program ;)
    taskDurationWithDaysHoursMinutesSeconds = calculateTaskDuration(totalTaskDurationInSeconds);
    
    
    // Print from the local filled structure
    printTaskDuration(taskDurationWithDaysHoursMinutesSeconds);


    return 0;
}