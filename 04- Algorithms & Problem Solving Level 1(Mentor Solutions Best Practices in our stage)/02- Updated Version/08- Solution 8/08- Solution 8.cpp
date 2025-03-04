#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Enum: enPassFail
// Purpose: Defines two possible outcomes for the mark evaluation: Pass (1) and Fail (2).
enum enPassFail { Pass = 1, Fail = 2 };

// Function: ReadMark
// Purpose: Prompts the user to enter their exam mark and reads it from input.
// Returns: The entered integer mark.
int ReadMark()
{
    int Mark;  // Variable to store the user's input.

    // Prompt the user to enter their mark.
    cout << "Please enter your mark? " << endl;

    cin >> Mark;  // Read the mark entered by the user.

    return Mark;  // Return the entered mark.
}

// Function: CheckMark
// Purpose: Determines whether a given mark is a passing or failing grade.
// Parameter: Mark - the integer mark to be checked.
// Returns: enPassFail::Pass if the mark is 50 or greater, otherwise enPassFail::Fail.
enPassFail CheckMark(int Mark)
{
    // If the mark is 50 or above, return Pass; otherwise, return Fail.
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

// Function: PrintResults
// Purpose: Displays whether the student has passed or failed based on the entered mark.
// Parameter: Mark - the integer mark provided by the user.
void PrintResults(int Mark)
{
    // Check if the mark qualifies as a passing grade.
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Failed" << endl;
}

// Main function: Program entry point.
int main()
{
    // Read the user's mark, check their result, and print the corresponding message.
    PrintResults(ReadMark());

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (though not needed in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. Enumeration Definition (enPassFail)
    Defines:
    Pass = 1 (for marks 50 and above)
    Fail = 2 (for marks below 50)

3. User Input Function (ReadMark)
    Prompts the user to enter their exam mark.
    Reads and returns the entered mark.

4. Evaluation Function (CheckMark)
    Takes an integer mark as input.
    Returns:
    enPassFail::Pass if the mark is 50 or greater.
    enPassFail::Fail if the mark is below 50.

5. Output Function (PrintResults)
    Calls CheckMark() to evaluate the mark.
    Prints "You Passed" if the mark qualifies as a passing grade.
    Prints "You Failed" otherwise.

6. Program Execution (main())
    Calls ReadMark() to get user input.
    Calls PrintResults() to determine and display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/