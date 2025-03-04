#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>      // Include cmath to use sqrt() and pow() functions.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadNumbers
// Purpose: Prompts the user to enter a rectangle's side and diagonal, storing them using reference variables.
// Parameters: 
//   - A: Reference to the float variable representing one side of the rectangle.
//   - D: Reference to the float variable representing the diagonal of the rectangle.
// Returns: None (values are stored in reference variables).
void ReadNumbers(float& A, float& D)
{
    // Prompt the user to enter the rectangle's side (A) and store it.
    cout << "Please enter rectangle side A ? " << endl;
    cin >> A;

    // Prompt the user to enter the rectangle's diagonal (D) and store it.
    cout << "Please enter rectangle diagonal D ? " << endl;
    cin >> D;
}

// Function: RectangleAreaBySideAndDiagonal
// Purpose: Computes the area of a rectangle using one side and the diagonal.
// Parameters: 
//   - A: Float value representing one side of the rectangle.
//   - D: Float value representing the diagonal of the rectangle.
// Returns: The computed area of the rectangle as a float.
float RectangleAreaBySideAndDiagonal(float A, float D)
{
    // Calculate the area using the formula: Area = A * sqrt(D² - A²)
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));

    return Area;  // Return the computed area.
}

// Function: PrintResult
// Purpose: Displays the computed area of the rectangle.
// Parameter: Area - the computed area.
// Returns: None (prints the result).
void PrintResult(float Area)
{
    // Print the rectangle's computed area.
    cout << "\nRectangle Area = " << Area << endl;
}

// Main function: Program entry point.
int main()
{
    float A, D;  // Declare two float variables to store the rectangle's side and diagonal.

    // Read the rectangle's side and diagonal from the user.
    ReadNumbers(A, D);

    // Compute the area and display the result.
    PrintResult(RectangleAreaBySideAndDiagonal(A, D));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    <cmath> is included to use sqrt() and pow() for mathematical calculations.
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadNumbers)
    Uses reference parameters (float &A, float &D) to modify the values directly.
    Prompts the user to enter one side (A) and the diagonal (D) of a rectangle.

3. Area Calculation Function (RectangleAreaBySideAndDiagonal)
    Takes the side (A) and diagonal (D) as input.
    Uses the formula: Area=A×D2?A2\text{Area} = A \times \sqrt{D^2 - A^2}Area=A×D2?A2? This formula derives the missing side using the Pythagorean theorem and calculates the rectangle's area.
    Returns the computed area.

4. Output Function (PrintResult)
    Receives the computed area as a parameter.
    Prints "Rectangle Area = [Area]".

5. Program Execution (main())
    Declares two float variables (A, D) to store side and diagonal.
    Calls ReadNumbers() to get user input.
    Calls RectangleAreaBySideAndDiagonal() to compute the area.
    Calls PrintResult() to display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/