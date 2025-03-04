#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadAge
// Purpose: Prompts the user to enter their age and reads it from input.
// Returns: The entered age as an integer.
int ReadAge()
{
    int Age;  // Variable to store the user's input.

    // Prompt the user to enter their age.
    cout << "Please enter your Age ? " << endl;
    cin >> Age;

    return Age;  // Return the entered age.
}

// Function: ValidateNumberInRange
// Purpose: Checks if a given number falls within a specified range.
// Parameters: 
//   - Number: The integer number to check.
//   - From: The lower bound of the valid range.
//   - To: The upper bound of the valid range.
// Returns: True if the number is within the range [From, To], otherwise false.
bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

// Function: PrintResult
// Purpose: Displays whether the given age is within the valid range (18 to 45).
// Parameter: Age - the age to be validated.
// Returns: None (prints the result).
void PrintResult(int Age)
{
    // Check if the age is in the valid range (18 to 45).
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " is a valid age \n";
    else
        cout << Age << " is an invalid age \n";
}

// Main function: Program entry point.
int main()
{
    // Read the age, validate it, and print the result.
    PrintResult(ReadAge());

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadAge)
    Prompts the user to enter their age.
    Reads and returns the age as an integer.

3. Range Validation Function (ValidateNumberInRange)
    Takes an integer number, lower bound (From), and upper bound (To) as input.
    Checks if the number is within the given range using:
    return (Number >= From && Number <= To);
    
    Returns true if the number falls within the range, otherwise returns false.

4. Output Function (PrintResult)
    Calls ValidateNumberInRange() to check if the age is between 18 and 45.
    Prints:
    "Age is a valid age" if it's within the range.
    "Age is an invalid age" if it's out of range.

5. Program Execution (main())
    Calls ReadAge() to get user input.
    Calls PrintResult() to validate and display the age result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/