#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string (not used in this program but included).

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Enum: enNumberType
// Purpose: Defines two possible types of numbers: Odd (1) and Even (2).
enum enNumberType { Odd = 1, Even = 2 };

// Function: ReadNumber
// Purpose: Prompts the user to enter an integer and reads it from input.
// Returns: The entered integer value.
int ReadNumber()
{
    int Num;  // Variable to store the user's input.

    // Prompt the user to enter a number.
    cout << "Please enter a number? " << endl;

    cin >> Num;  // Read the number entered by the user.

    return Num;  // Return the entered number.
}

// Function: CheckNumberType
// Purpose: Determines whether a given number is even or odd.
// Parameter: Num - the integer number to be checked.
// Returns: enNumberType::Even if the number is even, enNumberType::Odd if the number is odd.
enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;  // Compute the remainder when dividing by 2.

    if (Result == 0)  // If remainder is 0, the number is even.
        return enNumberType::Even;
    else  // Otherwise, the number is odd.
        return enNumberType::Odd;
}

// Function: PrintNumberType
// Purpose: Displays whether the given number type is even or odd.
// Parameter: NumberType - the type of the number (Even or Odd).
void PrintNumberType(enNumberType NumberType)
{
    // Print whether the number is even or odd based on the given type.
    if (NumberType == enNumberType::Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\n Number is Odd. \n";
}

// Main function: Program entry point.
int main()
{
    // Read a number from the user, determine its type, and print the result.
    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included (though not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.
2. Enumeration Definition (enNumberType)
    Defines Odd = 1 and Even = 2 to represent number types.
3. User Input Function (ReadNumber)
    Prompts the user to enter a number.
    Reads the integer from input and returns it.
4. Number Type Checking Function (CheckNumberType)
    Determines whether the number is even or odd using Num % 2.
    Returns enNumberType::Even if divisible by 2, otherwise returns enNumberType::Odd.
5. Output Function (PrintNumberType)
    Receives the number type and prints "Number is Even" or "Number is Odd".
6. Program Execution (main())
    Calls ReadNumber() to get user input.
    Calls CheckNumberType() to determine if the number is odd or even.
    Calls PrintNumberType() to display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/