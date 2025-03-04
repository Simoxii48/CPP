#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadNumberInRange
// Purpose: Prompts the user to enter a grade within a specified range and ensures valid input.
// Parameters:
//   - From: The lower bound of the acceptable range.
//   - To: The upper bound of the acceptable range.
// Returns: A validated integer representing the grade.
int ReadNumberInRange(int From, int To)
{
    int Grade;  // Variable to store the user's input.

    // Keep prompting the user until a valid grade (between From and To) is entered.
    do
    {
        cout << "Please enter a Grade between " << From << " and " << To << "? " << endl;
        cin >> Grade;
    } while (Grade < From || Grade > To);  // Repeat if the input is out of range.

    return Grade;  // Return the validated grade.
}

// Function: GetGradeLetter
// Purpose: Determines the letter grade corresponding to the numeric grade.
// Parameter:
//   - Grade: The numeric grade to be converted to a letter grade.
// Returns: A character representing the letter grade.
char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';  // If the grade is below 50, return 'F' (Fail).
}

// Main function: Program entry point.
int main()
{
    // Read a valid grade from the user, determine the corresponding letter grade, and display the result.
    cout << endl << "Result = " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. Input Validation Function (ReadNumberInRange)
    Uses a do-while loop to repeatedly prompt the user for a grade.
    Ensures the input is between 0 and 100 (inclusive).
    Returns the validated grade.

3. Grade Conversion Function (GetGradeLetter)
    Takes a numeric grade as input.
    Determines the corresponding letter grade based on the following ranges:
    90+ → 'A'
    80-89 → 'B'
    70-79 → 'C'
    60-69 → 'D'
    50-59 → 'E'
    Below 50 → 'F'
    Returns the computed letter grade.

4. Program Execution (main())
    Calls ReadNumberInRange(0, 100) to get user input.
    Calls GetGradeLetter() to determine the letter grade.
    Prints the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/