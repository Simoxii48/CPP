#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use to_string() for formatted messages.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadNumber
// Purpose: Prompts the user with a custom message to enter a number and reads it from input.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A float representing the user's input number.
float ReadNumber(string Message)
{
    float Number = 0;  // Variable to store the user's input.

    // Display the provided message and prompt the user to enter a number.
    cout << Message << endl;
    cin >> Number;

    return Number;  // Return the entered number.
}

// Function: SumNumbers
// Purpose: Reads numbers from the user and sums them until the user enters -99 to stop.
// Returns: The total sum of entered numbers as a float.
float SumNumbers()
{
    int Sum = 0;       // Initialize the sum accumulator.
    int Number = 0;    // Variable to store user input.
    int Counter = 1;   // Counter to track the number of inputs.

    // Read the first number from the user.
    Number = ReadNumber("Please enter Number " + to_string(Counter));

    // Continue reading and summing numbers until the user enters -99.
    while (Number != -99)
    {
        Sum += Number;  // Add the number to the sum.
        Counter++;      // Increment the input counter.

        // Read the next number.
        Number = ReadNumber("Please enter Number " + to_string(Counter));
    };

    return Sum;  // Return the computed sum.
}

// Main function: Program entry point.
int main()
{
    // Compute the sum of entered numbers and display the result.
    cout << endl << "Result = " << SumNumbers() << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included to allow usage of to_string() for message formatting.
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadNumber)
    Takes a custom message as input.
    Prompts the user to enter a floating-point number.
    Reads and returns the entered number.

3. Summation Function (SumNumbers)
    Reads a sequence of numbers from the user.
    Stops reading when the user enters -99.
    Keeps track of the total sum and input count.
    Returns the computed sum of numbers.
    
4. Program Execution (main())
    Calls SumNumbers() to start reading and summing numbers.
    Prints the final sum result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/