#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Enum: enPassFail
// Purpose: Defines two possible outcomes for the average evaluation: Pass (1) and Fail (2).
enum enPassFail { Pass = 1, Fail = 2 };

// Function: ReadNumbers
// Purpose: Prompts the user to enter three exam marks and stores them using reference variables.
// Parameters: 
//   - Mark1: Reference to the first mark.
//   - Mark2: Reference to the second mark.
//   - Mark3: Reference to the third mark.
// Returns: None (values are stored in reference variables).
void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
    // Prompt the user to enter the first mark and store it in Mark1.
    cout << "Please enter Mark 1 ? " << endl;
    cin >> Mark1;

    // Prompt the user to enter the second mark and store it in Mark2.
    cout << "Please enter Mark 2 ? " << endl;
    cin >> Mark2;

    // Prompt the user to enter the third mark and store it in Mark3.
    cout << "Please enter Mark 3 ? " << endl;
    cin >> Mark3;
}

// Function: SumOf3Marks
// Purpose: Calculates the total sum of three marks.
// Parameters: 
//   - Mark1: First exam mark.
//   - Mark2: Second exam mark.
//   - Mark3: Third exam mark.
// Returns: The sum of the three marks as an integer.
int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;  // Compute and return the sum.
}

// Function: CalculateAverage
// Purpose: Computes the average of three marks.
// Parameters: 
//   - Mark1: First exam mark.
//   - Mark2: Second exam mark.
//   - Mark3: Third exam mark.
// Returns: A float value representing the average of the marks.
float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    // Compute the total sum using SumOf3Marks() and divide by 3 to get the average.
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

// Function: CheckAverage
// Purpose: Determines if the computed average is a passing or failing grade.
// Parameter: Average - the computed average of the three marks.
// Returns: enPassFail::Pass if the average is 50 or greater, otherwise enPassFail::Fail.
enPassFail CheckAverage(float Average)
{
    // If the average is 50 or above, return Pass; otherwise, return Fail.
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

// Function: PrintResults
// Purpose: Displays the computed average and whether the student has passed or failed.
// Parameter: Average - the computed average of the three marks.
// Returns: None (prints the result).
void PrintResults(float Average)
{
    // Print the computed average.
    cout << "\n Your Average is: " << Average << endl;

    // Check if the average qualifies as a passing grade.
    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Failed" << endl;
}

// Main function: Program entry point.
int main()
{
    int Mark1, Mark2, Mark3;  // Declare three integer variables to store exam marks.

    // Read three marks from the user.
    ReadNumbers(Mark1, Mark2, Mark3);

    // Compute the average and display the result.
    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. Enumeration Definition (enPassFail)
    Defines:
    Pass = 1 (for an average 50 or above)
    Fail = 2 (for an average below 50)

3. User Input Function (ReadNumbers)
    Uses reference parameters (int &Mark1, int &Mark2, int &Mark3) to modify the values directly.
    Prompts the user to enter three exam marks and stores them in the provided reference variables.

4. Sum Calculation Function (SumOf3Marks)
    Takes three integer values as input.
    Returns the sum of the three marks.

5. Average Calculation Function (CalculateAverage)
    Calls SumOf3Marks() to compute the total sum.
    Divides the sum by 3 to calculate the average.
    Returns the computed average as a float.

6. Average Evaluation Function (CheckAverage)
    Takes the computed average as input.
    Returns:
    enPassFail::Pass if the average is 50 or greater.
    enPassFail::Fail if the average is below 50.
    
7. Output Function (PrintResults)
    Receives the computed average as a parameter.
    Prints "Your Average is: [Average]".
    Calls CheckAverage() to determine whether the student has passed or failed.
    Prints "You Passed" if the student qualifies, otherwise prints "You Failed".

8. Program Execution (main())
    Declares three integer variables (Mark1, Mark2, Mark3).
    Calls ReadNumbers() to get user input.
    Calls CalculateAverage() to compute the average.
    Calls PrintResults() to display the average and pass/fail result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/