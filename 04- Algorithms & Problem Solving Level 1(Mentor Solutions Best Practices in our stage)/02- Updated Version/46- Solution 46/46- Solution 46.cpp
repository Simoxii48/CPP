#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: PrintLettersAtoZ
// Purpose: Prints uppercase letters from 'A' to 'Z' using their ASCII values.
// Returns: None (prints the result to the console).
void PrintLettersAtoZ()
{
    // Loop through ASCII values of uppercase letters (65 to 90).
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;  // Convert the ASCII value to a character and print it.
    }
}

// Main function: Program entry point.
int main()
{
    // Call the function to print uppercase letters from 'A' to 'Z'.
    PrintLettersAtoZ();

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. Function (PrintLettersAtoZ)
    Uses a for loop to iterate through ASCII values 65 to 90, which correspond to:
    65 → 'A'
    66 → 'B'
    ...
    90 → 'Z'
    Converts each ASCII value to its corresponding character using char(i).
    Prints each letter on a new line.

3. Program Execution (main())
    Calls PrintLettersAtoZ() to print letters 'A' to 'Z'.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/