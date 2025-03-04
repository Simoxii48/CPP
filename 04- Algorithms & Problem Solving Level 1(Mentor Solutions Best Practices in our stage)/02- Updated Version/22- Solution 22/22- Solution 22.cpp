#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>      // Include cmath to use pow() for exponentiation.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadTriangleData
// Purpose: Prompts the user to enter the side length and base of an isosceles triangle and stores them using reference variables.
// Parameters: 
//   - A: Reference to the float variable representing one equal side of the isosceles triangle.
//   - B: Reference to the float variable representing the base of the triangle.
// Returns: None (values are stored in reference variables).
void ReadTriangleData(float& A, float& B)
{
    // Prompt the user to enter the length of one of the equal sides (A).
    cout << "Please enter triangle side A ? " << endl;
    cin >> A;

    // Prompt the user to enter the base (B) of the isosceles triangle.
    cout << "Please enter triangle base B ? " << endl;
    cin >> B;
}

// Function: CircleAreaByITriangle
// Purpose: Computes the area of a circle inscribed in an isosceles triangle using a specific formula.
// Parameters: 
//   - A: Float value representing one equal side of the isosceles triangle.
//   - B: Float value representing the base of the isosceles triangle.
// Returns: The computed area of the inscribed circle as a float.
float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the given formula:
    // Area = π * (B² / 4) * ((2A - B) / (2A + B))
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area;  // Return the computed area.
}

// Function: PrintResult
// Purpose: Displays the computed area of the inscribed circle.
// Parameter: Area - the computed area.
// Returns: None (prints the result).
void PrintResult(float Area)
{
    // Print the computed area of the inscribed circle.
    cout << "\nCircle Area = " << Area << endl;
}

// Main function: Program entry point.
int main()
{
    float A, B;  // Declare two float variables to store the side and base of the isosceles triangle.

    // Read the triangle's side and base from the user.
    ReadTriangleData(A, B);

    // Compute the area of the inscribed circle and display the result.
    PrintResult(CircleAreaByITriangle(A, B));

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    <cmath> is included to use pow() for exponentiation (B²).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadTriangleData)
    Uses reference parameters (float &A, float &B) to modify the values directly.
    Prompts the user to enter:
    The side length (A) of the isosceles triangle.
    The base length (B) of the triangle.
    
3. Area Calculation Function (CircleAreaByITriangle)
    Takes the side length (A) and base length (B) as input.
    Uses the given formula to compute the area of a circle inscribed in an isosceles triangle:
    
    
    This is implemented as:
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    
    pow(B, 2) calculates B².
    PI is defined as 3.141592653589793238 for precise calculations.
    Returns the computed area.

4. Output Function (PrintResult)
    Receives the computed area as a parameter.
    Prints "Circle Area = [Area]".

5. Program Execution (main())
    Calls ReadTriangleData() to get user input.
    Calls CircleAreaByITriangle() to compute the inscribed circle's area.
    Calls PrintResult() to display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/