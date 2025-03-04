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
    cout << "Please enter Number A ? " << endl;
    cin >> Num1;

    // Prompt the user to enter the second number and store it in Num2.
    cout << "Please enter Number B ? " << endl;
    cin >> Num2;
}

// Function: Swap
// Purpose: Swaps the values of two integer variables using a temporary variable.
// Parameters: 
//   - A: Reference to the first integer variable.
//   - B: Reference to the second integer variable.
// Returns: None (values are modified directly in the caller's scope).
void Swap(int& A, int& B)
{
    int Temp;  // Temporary variable to hold one of the values during swapping.

    Temp = A;  // Store the value of A in Temp.
    A = B;     // Assign the value of B to A.
    B = Temp;  // Assign the value of Temp (original A) to B.
}

// Function: PrintNumbers
// Purpose: Displays the values of two integer numbers.
// Parameters: 
//   - Num1: First integer value.
//   - Num2: Second integer value.
// Returns: None (prints the values).
void PrintNumbers(int Num1, int Num2)
{
    // Print the values of Num1 and Num2.
    cout << "\nNumber1 = " << Num1 << endl;
    cout << "Number2 = " << Num2 << endl;
}

// Main function: Program entry point.
int main()
{
    int Num1, Num2;  // Declare two integer variables to store user input.

    // Read two numbers from the user.
    ReadNumbers(Num1, Num2);

    // Print the numbers before swapping.
    PrintNumbers(Num1, Num2);

    // Swap the values of Num1 and Num2.
    Swap(Num1, Num2);

    // Print the numbers after swapping.
    PrintNumbers(Num1, Num2);

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

3. Swapping Function (Swap)
    Uses reference parameters (int &A, int &B) to swap values in place.
    Utilizes a temporary variable (Temp) to store one of the values during swapping.
    The swapping is performed without returning a value since the original variables are modified.
    
4. Output Function (PrintNumbers)
    Receives two integer values as parameters.
    Prints their values in the format:
    Number1 = [value]
    Number2 = [value]

5. Program Execution (main())
    Declares two integer variables (Num1, Num2).
    Calls ReadNumbers() to get user input.
    Calls PrintNumbers() to display values before swapping.
    Calls Swap() to swap the two values.
    Calls PrintNumbers() again to show values after swapping.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/