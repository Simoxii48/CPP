#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Enum: enOddOrEven
// Purpose: Defines two possible classifications for numbers: Odd (1) and Even (2).
enum enOddOrEven { Odd = 1, Even = 2 };

// Function: ReadNumber
// Purpose: Prompts the user to enter a number and reads it from input.
// Returns: The entered number as an integer.
int ReadNumber()
{
    int Number;  // Variable to store the user's input.

    // Prompt the user to enter a number.
    cout << "Please enter a number? " << endl;
    cin >> Number;

    return Number;  // Return the entered number.
}

// Function: CheckOddOrEven
// Purpose: Determines whether a given number is odd or even.
// Parameter: Number - The integer to check.
// Returns: enOddOrEven::Odd if the number is odd, otherwise enOddOrEven::Even.
enOddOrEven CheckOddOrEven(int Number)
{
    // If the number is not divisible by 2, return Odd; otherwise, return Even.
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

// Function: SumOddNumbersFrom1toN_UsingWhile
// Purpose: Computes the sum of all odd numbers from 1 to N using a while loop.
// Parameter: N - The upper limit of the range.
// Returns: The sum of all odd numbers from 1 to N.
int SumOddNumbersFrom1toN_UsingWhile(int N)
{
    int Counter = 0;  // Initialize the counter.
    int Sum = 0;  // Initialize the sum accumulator.

    // Print the header message.
    cout << "Sum odd numbers using While Statement:\n";

    // Use a while loop to sum all odd numbers from 1 to N.
    while (Counter < N)
    {
        Counter++;  // Increment the counter.

        // Check if the number is odd and add it to the sum if true.
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }
    return Sum;  // Return the computed sum.
}

// Function: SumOddNumbersFrom1toN_UsingDoWhile
// Purpose: Computes the sum of all odd numbers from 1 to N using a do-while loop.
// Parameter: N - The upper limit of the range.
// Returns: The sum of all odd numbers from 1 to N.
int SumOddNumbersFrom1toN_UsingDoWhile(int N)
{
    int Counter = 0;  // Initialize the counter.
    int Sum = 0;  // Initialize the sum accumulator.

    // Print the header message.
    cout << "Sum odd numbers using Do..While Statement:\n";

    // Use a do-while loop to sum all odd numbers from 1 to N.
    do
    {
        Counter++;  // Increment the counter.

        // Check if the number is odd and add it to the sum if true.
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    } while (Counter < N);  // Repeat until Counter reaches N.

    return Sum;  // Return the computed sum.
}

// Function: SumOddNumbersFrom1toN_UsingFor
// Purpose: Computes the sum of all odd numbers from 1 to N using a for loop.
// Parameter: N - The upper limit of the range.
// Returns: The sum of all odd numbers from 1 to N.
int SumOddNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;  // Initialize the sum accumulator.

    // Print the header message.
    cout << "Sum odd numbers using For Statement:\n";

    // Use a for loop to iterate from 1 to N and sum all odd numbers.
    for (int Counter = 1; Counter <= N; Counter++)
    {
        // Check if the number is odd and add it to the sum if true.
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }

    return Sum;  // Return the computed sum.
}

// Main function: Program entry point.
int main()
{
    // Read the upper limit N from the user.
    int N = ReadNumber();

    // Compute and print the sum of odd numbers using different loop types.
    cout << SumOddNumbersFrom1toN_UsingWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_UsingDoWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_UsingFor(N) << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. Enumeration (enOddOrEven)
    Defines two values:
    Odd = 1 (for odd numbers).
    Even = 2 (for even numbers).

3. User Input Function (ReadNumber)
    Prompts the user to enter a number (N).
    Reads and returns the number as an integer.

4. Odd/Even Check Function (CheckOddOrEven)
    Takes an integer as input.
    Returns:
    enOddOrEven::Odd if the number is odd.
    enOddOrEven::Even if the number is even.

5. Sum Odd Numbers Using While Loop (SumOddNumbersFrom1toN_UsingWhile)
    Uses a while loop to iterate from 1 to N.
    Checks if the current number is odd, then adds it to the sum.

6. Sum Odd Numbers Using Do-While Loop (SumOddNumbersFrom1toN_UsingDoWhile)
    Uses a do-while loop to iterate from 1 to N.
    Ensures at least one iteration before checking the condition.
    Adds odd numbers to the sum.

7. Sum Odd Numbers Using For Loop (SumOddNumbersFrom1toN_UsingFor)
    Uses a for loop to iterate from 1 to N.
    Checks if the number is odd, then adds it to the sum.
    
8. Program Execution (main())
    Calls ReadNumber() to get user input.
    Calls SumOddNumbersFrom1toN_UsingWhile(), SumOddNumbersFrom1toN_UsingDoWhile(), and SumOddNumbersFrom1toN_UsingFor() to compute and print the sum of odd numbers.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/