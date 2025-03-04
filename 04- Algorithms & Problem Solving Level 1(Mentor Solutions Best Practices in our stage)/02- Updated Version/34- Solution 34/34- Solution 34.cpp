#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadTotalSales
// Purpose: Prompts the user to enter the total sales amount and reads it from input.
// Returns: The entered total sales as a float.
float ReadTotalSales()
{
    float TotalSales;  // Variable to store the user's input.

    // Prompt the user to enter the total sales.
    cout << "Please enter Total Sales? " << endl;
    cin >> TotalSales;

    return TotalSales;  // Return the entered total sales amount.
}

// Function: GetCommissionPercentage
// Purpose: Determines the commission percentage based on the total sales amount.
// Parameter:
//   - TotalSales: The total sales amount.
// Returns: The commission percentage as a float.
float GetCommissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;  // 1% commission for sales ≥ 1,000,000
    else if (TotalSales >= 500000)
        return 0.02;  // 2% commission for sales between 500,000 and 999,999
    else if (TotalSales >= 100000)
        return 0.03;  // 3% commission for sales between 100,000 and 499,999
    else if (TotalSales >= 50000)
        return 0.05;  // 5% commission for sales between 50,000 and 99,999
    else
        return 0.00;  // No commission for sales below 50,000
}

// Function: CalculateTotalCommission
// Purpose: Computes the total commission amount based on total sales.
// Parameter:
//   - TotalSales: The total sales amount.
// Returns: The total commission amount as a float.
float CalculateTotalCommission(float TotalSales)
{
    return GetCommissionPercentage(TotalSales) * TotalSales;  // Multiply sales by commission percentage.
}

// Main function: Program entry point.
int main()
{
    // Read the total sales amount from the user.
    float TotalSales = ReadTotalSales();

    // Display the commission percentage.
    cout << endl << "Commission Percentage = " << GetCommissionPercentage(TotalSales) * 100 << "%" << endl;

    // Display the total commission amount.
    cout << endl << "Total Commission = " << CalculateTotalCommission(TotalSales) << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadTotalSales)
    Prompts the user to enter the total sales amount.
    Reads and returns the value as a float.
    
3. Commission Calculation Function (GetCommissionPercentage)
    Takes the total sales amount as input.
    Determines the commission percentage based on sales brackets:
    ≥ 1,000,000 → 1%
    500,000 - 999,999 → 2%
    100,000 - 499,999 → 3%
    50,000 - 99,999 → 5%
    Below 50,000 → 0%
    Returns the commission percentage.

4. Total Commission Calculation Function (CalculateTotalCommission)
    Uses the commission percentage to compute the total commission amount: Total Commission=Total Sales×Commission Percentage\text{Total Commission} = \text{Total Sales} \times \text{Commission Percentage}Total Commission=Total Sales×Commission Percentage
    Returns the computed total commission.
    
5. Program Execution (main())
    Calls ReadTotalSales() to get user input.
    Calls GetCommissionPercentage() to determine the commission rate.
    Calls CalculateTotalCommission() to compute the commission amount.
    Prints the commission percentage and total commission.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/