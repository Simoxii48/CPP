#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

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

// Function: ReadTaskDuration
// Purpose: Prompts the user to enter task duration in days, hours, minutes, and seconds.
// Returns: A struct containing the task duration values.
strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;  // Variable to store the task duration.

    // Prompt the user to enter each time component of the task duration.
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days?");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes?");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds?");

    return TaskDuration;  // Return the filled struct.
}

// Function: TaskDurationInSeconds
// Purpose: Converts a given task duration into total seconds.
// Parameter:
//   - TaskDuration: A struct containing the task duration values.
// Returns: The total duration in seconds.
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;  // Initialize total duration in seconds.

    // Convert each time component to seconds and accumulate the total.
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;  // Convert days to seconds.
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;  // Convert hours to seconds.
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;  // Convert minutes to seconds.
    DurationInSeconds += TaskDuration.NumberOfSeconds;  // Add remaining seconds.

    return DurationInSeconds;  // Return the total duration in seconds.
}

// Main function: Program entry point.
int main()
{
    // Read task duration from user input and compute total seconds.
    cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
    cout << endl;  // Print a new line for formatting.

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use.
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

4. Task Duration Input Function (ReadTaskDuration)
    Calls ReadPositiveNumber() for each duration component.
    Returns a struct containing the task duration values.

5. Task Duration Conversion Function (TaskDurationInSeconds)
    Takes a struct with task duration components.
    Converts:
    Days → Seconds using 1 day=24×60×601 \text{ day} = 24 \times 60 \times 601 day=24×60×60
    Hours → Seconds using 1 hour=60×601 \text{ hour} = 60 \times 601 hour=60×60
    Minutes → Seconds using 1 minute=601 \text{ minute} = 601 minute=60
    Adds Seconds directly.
    Returns the total duration in seconds.

6. Program Execution (main())
    Calls ReadTaskDuration() to get user input.
    Calls TaskDurationInSeconds() to compute the total time in seconds.
    Prints the final result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/