#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadAge
// Purpose: Prompts the user to enter their age and reads it from input.
// Returns: The entered age as an integer.
int ReadAge()
{
    int Age;  // Variable to store the user's input.

    // Prompt the user to enter an age within the specified range.
    cout << "Please enter an Age between 18 and 45 ? " << endl;
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

// Function: ReadUntilAgeBetween
// Purpose: Repeatedly prompts the user to enter an age until it falls within the valid range.
// Parameters:
//   - From: The lower bound of the valid age range.
//   - To: The upper bound of the valid age range.
// Returns: The validated age that falls within the specified range.
int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;  // Initialize Age variable.

    // Keep prompting the user until a valid age is entered.
    do
    {
        Age = ReadAge();  // Read user input.

    } while (!ValidateNumberInRange(Age, From, To));  // Repeat if the age is out of range.

    return Age;  // Return the validated age.
}

// Function: PrintResult
// Purpose: Displays the valid age entered by the user.
// Parameter: Age - the valid age.
// Returns: None (prints the result).
void PrintResult(int Age)
{
    // Print the validated age.
    cout << "Your Age is: " << Age << endl;
}

// Main function: Program entry point.
int main()
{
    // Read and validate age, then print the result.
    PrintResult(ReadUntilAgeBetween(18, 45));

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
    Reads and returns the entered age.

3. Range Validation Function (ValidateNumberInRange)
    Takes an integer number, lower bound (From), and upper bound (To) as input.
    Checks if the number is within the given range using:
    return (Number >= From && Number <= To);
    
    Returns true if the number falls within the range, otherwise returns false.
    
4. Repeated Input Validation Function (ReadUntilAgeBetween)
    Uses a do-while loop to repeatedly prompt the user for input.
    Calls ReadAge() until the entered age falls within the valid range.
    Returns the validated age.
    
5. Output Function (PrintResult)
    Receives the validated age as a parameter.
    Prints "Your Age is: [Age]".

6. Program Execution (main())
    Calls ReadUntilAgeBetween(18, 45) to get validated age input.
    Calls PrintResult() to display the valid age.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/