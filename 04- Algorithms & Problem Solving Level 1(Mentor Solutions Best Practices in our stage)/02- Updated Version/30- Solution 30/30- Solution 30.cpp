#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to handle message prompts.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number and ensures the input is non-negative.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message)
{
    int Number;  // Variable to store the user's input.

    // Keep prompting the user until a positive number (>= 0) is entered.
    do
    {
        cout << Message << endl;  // Display the provided message.
        cin >> Number;  // Read the number entered by the user.

    } while (Number < 0);  // Repeat if the number is negative.

    return Number;  // Return the validated positive number.
}

// Function: Factorial
// Purpose: Computes the factorial of a given number N.
// Parameter:
//   - N: An integer for which the factorial is to be calculated.
// Returns: The computed factorial of N.
int Factorial(int N)
{
    int F = 1;  // Initialize the factorial result to 1.

    // Use a for loop to multiply the numbers from N down to 1.
    for (int Counter = N; Counter >= 1; Counter--)
    {
        F = F * Counter;  // Multiply the current value of F by Counter.
    }

    return F;  // Return the computed factorial value.
}

// Main function: Program entry point.
int main()
{
    // Prompt the user for a positive number, compute its factorial, and display the result.
    cout << Factorial(ReadPositiveNumber("Please enter a positive number???")) << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included to allow message-based prompts for better user interaction.
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadPositiveNumber)
    Prompts the user to enter a positive integer.
    Uses a do-while loop to keep asking until the user enters a non-negative number.
    Reads and returns the valid integer.

3. Factorial Calculation Function (Factorial)
    Takes an integer N as input.
    Uses a for loop to compute the factorial:
    Multiplies numbers from N down to 1.
    Returns the computed factorial value.

4. Program Execution (main())
    Calls ReadPositiveNumber() to get user input.
    Calls Factorial() to compute the factorial.
    Prints the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/