#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>      // Include cmath to use pow() for exponentiation.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadRadius
// Purpose: Prompts the user to enter the radius of a circle and reads it from input.
// Returns: The entered radius as a float.
float ReadRadius()
{
    float R;  // Variable to store the user's input.

    // Prompt the user to enter the circle's radius.
    cout << "Please enter radius R ? " << endl;
    cin >> R;

    return R;  // Return the entered radius.
}

// Function: CircleArea
// Purpose: Computes the area of a circle given its radius.
// Parameter: R - Float value representing the radius of the circle.
// Returns: The computed area of the circle as a float.
float CircleArea(float R)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the formula: Area = π * R².
    float Area = pow(R, 2) * PI;

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
    // Read the radius, compute the area, and display the result.
    PrintResult(CircleArea(ReadRadius()));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    <cmath> is included to use pow() for exponentiation (R²).
    using namespace std; allows the use of standard functions without prefixing them with std::.
    
2. User Input Function (ReadRadius)
    Prompts the user to enter the radius (R) of a circle.
    Reads and returns the radius.
    
3. Area Calculation Function (CircleArea)
    Takes the radius (R) as input.
    Uses the standard formula for the area of a circle:
    

    float Area = pow(R, 2) * PI;
    
    pow(R, 2) calculates R².
    PI is defined as 3.141592653589793238 for precise calculations.
    Returns the computed area.
    
4. Output Function (PrintResult)
    Receives the computed area as a parameter.
    Prints "Circle Area = [Area]".

5. Program Execution (main())
    Calls ReadRadius() to get user input.
    Calls CircleArea() to compute the area.
    Calls PrintResult() to display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/