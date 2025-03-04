#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>      // Include cmath to use pow() for exponentiation.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadDiameter
// Purpose: Prompts the user to enter the diameter of a circle and reads it from input.
// Returns: The entered diameter as a float.
float ReadDiameter()
{
    float D;  // Variable to store the user's input.

    // Prompt the user to enter the circle's diameter.
    cout << "Please enter diameter D ? " << endl;
    cin >> D;

    return D;  // Return the entered diameter.
}

// Function: CircleAreaByDiameter
// Purpose: Computes the area of a circle given its diameter using the formula: (π * D²) / 4.
// Parameter: D - Float value representing the diameter of the circle.
// Returns: The computed area of the circle as a float.
float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the formula: Area = (π * D²) / 4.
    float Area = (pow(D, 2) * PI) / 4;

    return Area;  // Return the computed area.
}

// Function: PrintResult
// Purpose: Displays the computed area of the circle.
// Parameter: Area - the computed area.
// Returns: None (prints the result).
void PrintResult(float Area)
{
    // Print the circle's computed area.
    cout << "\nCircle Area = " << Area << endl;
}

// Main function: Program entry point.
int main()
{
    // Read the diameter, compute the area, and display the result.
    PrintResult(CircleAreaByDiameter(ReadDiameter()));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    <cmath> is included to use pow() for exponentiation (D²).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadDiameter)
    Prompts the user to enter the diameter (D) of a circle.
    Reads and returns the diameter.
    
3. Area Calculation Function (CircleAreaByDiameter)
    Takes the diameter (D) as input.
    Uses the formula for the area of a circle in terms of diameter:
    
    
    This is implemented as:
    float Area = (pow(D, 2) * PI) / 4;
    
    pow(D, 2) calculates D².
    PI is defined as 3.141592653589793238 for precise calculations.
    The division by 4 ensures correct computation of the area using the given formula.
    Returns the computed area.

4. Output Function (PrintResult)
    Receives the computed area as a parameter.
    Prints "Circle Area = [Area]".

5. Program Execution (main())
    Calls ReadDiameter() to get user input.
    Calls CircleAreaByDiameter() to compute the area.
    Calls PrintResult() to display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/