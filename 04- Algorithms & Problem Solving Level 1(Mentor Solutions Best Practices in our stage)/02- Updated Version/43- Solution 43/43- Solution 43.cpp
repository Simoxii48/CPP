#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>      // Include cmath to use floor() for calculations.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Struct: strTaskDuration
// Purpose: Represents the duration of a task in days, hours, minutes, and seconds.
struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number and ensures valid input.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.

    // Keep prompting the user until a positive number (> 0) is entered.
    do
    {
        cout << Message << endl;  // Display the provided message.
        cin >> Number;  // Read the number entered by the user.
    } while (Number <= 0);  // Repeat if the number is non-positive.

    return Number;  // Return the validated positive number.
}

// Function: SecondsToTaskDuration
// Purpose: Converts a given total number of seconds into a structured duration format (days, hours, minutes, seconds).
// Parameter:
//   - TotalSeconds: The total number of seconds to be converted.
// Returns: A struct containing the equivalent duration in days, hours, minutes, and seconds.
strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;  // Variable to store the converted time values.

    // Constants for time conversion.
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;

    int Remainder = 0;  // Variable to store remaining seconds after each conversion.

    // Convert total seconds into days, hours, minutes, and seconds.
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;

    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;

    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;  // Remaining seconds.

    return TaskDuration;  // Return the structured task duration.
}

// Function: PrintTaskDurationDetails
// Purpose: Prints the task duration in a formatted (days:hours:minutes:seconds) format.
// Parameter:
//   - TaskDuration: A struct containing the task duration values.
// Returns: None (prints the result).
void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << "\n";  // Print an empty line for formatting.

    // Print the structured duration in the format "D:H:M:S".
    cout << TaskDuration.NumberOfDays << ":"
        << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":"
        << TaskDuration.NumberOfSeconds << "\n";
}

// Main function: Program entry point.
int main()
{
    // Read the total number of seconds from the user.
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");

    // Convert total seconds into a structured task duration and display the result.
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use.
    <cmath> is included for floor() function usage.
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. Structure (strTaskDuration)
    Defines a struct to store task duration components:
    NumberOfDays
    NumberOfHours
    NumberOfMinutes
    NumberOfSeconds

3. User Input Function (ReadPositiveNumber)
    Uses a do-while loop to ensure positive input.
    Prompts the user to enter a valid number.
    Reads and returns the validated integer.

4. Time Conversion Function (SecondsToTaskDuration)
    Takes total seconds as input.
    Uses integer division and modulo to convert:
        Seconds => Days using 1 day = 24 x 60 x 60
        Seconds => Hours using 1 hour = 60 x 60
        Seconds => Minutes using 1 minute = 60

    Returns a structured duration.

5. Output Function (PrintTaskDurationDetails)
    Displays the formatted duration in:
    D:H:M:S
    
    Example Output for 90061 seconds:
    1:1:1:1
    
    (1 day, 1 hour, 1 minute, 1 second)

6. Program Execution (main())
    Calls ReadPositiveNumber() to get user input for total seconds.
    Calls SecondsToTaskDuration() to convert time format.
    Calls PrintTaskDurationDetails() to print formatted output.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/