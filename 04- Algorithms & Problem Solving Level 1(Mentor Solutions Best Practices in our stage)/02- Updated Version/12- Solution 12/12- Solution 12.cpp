#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadNumbers
// Purpose: Prompts the user to enter two integer numbers and stores them using reference variables.
// Parameters: 
//   - Num1: Reference to the first integer variable.
//   - Num2: Reference to the second integer variable.
// Returns: None (values are stored in reference variables).
void ReadNumbers(int& Num1, int& Num2)
{
    // Prompt the user to enter the first number and store it in Num1.
    cout << "Please enter Number 1 ? " << endl;
    cin >> Num1;

    // Prompt the user to enter the second number and store it in Num2.
    cout << "Please enter Number 2 ? " << endl;
    cin >> Num2;
}

// Function: MaxOf2Numbers
// Purpose: Determines the maximum of two integer numbers.
// Parameters: 
//   - Num1: First integer value.
//   - Num2: Second integer value.
// Returns: The greater of the two numbers.
int MaxOf2Numbers(int Num1, int Num2)
{
    // Compare the two numbers and return the greater one.
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

// Function: PrintResults
// Purpose: Displays the maximum number.
// Parameter: Max - the maximum number.
// Returns: None (prints the result).
void PrintResults(int Max)
{
    // Print the maximum number found.
    cout << "\n The Maximum Number is: " << Max << endl;
}

// Main function: Program entry point.
int main()
{
    int Num1, Num2;  // Declare two integer variables to store user input.

    // Read two numbers from the user.
    ReadNumbers(Num1, Num2);

    // Compute the maximum and display the result.
    PrintResults(MaxOf2Numbers(Num1, Num2));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadNumbers)
    Uses reference parameters (int &Num1, int &Num2) to modify the values directly.
    Prompts the user to enter two numbers and stores them in the provided reference variables.

3. Maximum Calculation Function (MaxOf2Numbers)
    Takes two integer values as input.
    Compares them and returns the greater of the two numbers.

4. Output Function (PrintResults)
    Receives the maximum number as a parameter.
    Prints "The Maximum Number is: [Max]".

5. Program Execution (main())
    Declares two integer variables (Num1, Num2).
    Calls ReadNumbers() to get user input.
    Calls MaxOf2Numbers() to determine the maximum value.
    Calls PrintResults() to display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/