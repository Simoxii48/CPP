#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number and ensures valid input.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A positive float entered by the user.
float ReadPositiveNumber(string Message)
{
    float Number = 0;  // Variable to store the user's input.

    // Keep prompting the user until a positive number (> 0) is entered.
    do
    {
        cout << Message << endl;  // Display the provided message.
        cin >> Number;  // Read the number entered by the user.
    } while (Number <= 0);  // Repeat if the number is non-positive.

    return Number;  // Return the validated positive number.
}

// Function: HoursToDays
// Purpose: Converts a given number of hours into days.
// Parameter:
//   - NumberOfHours: The total hours to be converted.
// Returns: The equivalent number of days as a float.
float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;  // Convert hours to days.
}

// Function: HoursToWeeks
// Purpose: Converts a given number of hours into weeks.
// Parameter:
//   - NumberOfHours: The total hours to be converted.
// Returns: The equivalent number of weeks as a float.
float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / (24 * 7);  // Convert hours to weeks.
}

// Function: DaysToWeeks
// Purpose: Converts a given number of days into weeks.
// Parameter:
//   - NumberOfDays: The total days to be converted.
// Returns: The equivalent number of weeks as a float.
float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;  // Convert days to weeks.
}

// Main function: Program entry point.
int main()
{
    // Read the number of hours from the user.
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");

    // Convert hours to days.
    float NumberOfDays = HoursToDays(NumberOfHours);

    // Convert days to weeks.
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;  // Print an empty line for formatting.

    // Display the total hours, days, and weeks.
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use.
    using namespace std; allows the use of standard functions without prefixing them with std::.
    
2. User Input Function (ReadPositiveNumber)
    Uses a do-while loop to ensure positive input.
    Prompts the user to enter a valid number.
    Reads and returns the validated floating-point number.
    
3. Time Conversion Functions
    HoursToDays => Converts hours into days. Days = Hours / 24;
    HoursToWeeks => Converts hours into Weeks. Weeks = Hours / (24 * 7);
    DaysToWeeks => Converts days into weeks. Weeks = Days / 7;

4. Program Execution (main())
    Calls ReadPositiveNumber() to get user input for hours.
    Converts:
    Hours to Days
    Days to Weeks
    Displays:
    Total Hours
    Total Days
    Total Weeks
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/