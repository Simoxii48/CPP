#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number and ensures valid input.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A positive float entered by the user.
float ReadPositiveNumber(string Message)
{
    float Number = 0;  // Variable to store the user's input.

    // Keep prompting the user until a positive number (> 0) is entered.
    do
    {
        cout << Message << endl;  // Display the provided message.
        cin >> Number;  // Read the number entered by the user.
    } while (Number <= 0);  // Repeat if the number is non-positive.

    return Number;  // Return the validated positive number.
}

// Function: MonthlyInstallment
// Purpose: Calculates the monthly installment required to repay a loan over a given period.
// Parameters:
//   - LoanAmount: The total loan amount.
//   - HowManyMonths: The duration (in months) over which the loan is repaid.
// Returns: The monthly installment amount as a float.
float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return LoanAmount / HowManyMonths;  // Compute and return the monthly installment.
}

// Main function: Program entry point.
int main()
{
    // Read the total loan amount from the user.
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");

    // Read the number of months for loan repayment.
    float HowManyMonths = ReadPositiveNumber("How Many Months?");

    // Compute and display the required monthly installment.
    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadPositiveNumber)
    Uses a do-while loop to ensure positive input.
    Prompts the user to enter a valid loan amount or repayment period.
    Reads and returns the validated floating-point number.
    
3. Loan Calculation Function (MonthlyInstallment)
    Takes the loan amount and repayment duration in months as input.
    Computes the monthly installment using:
    MonthlyInstallment = LoanAmount / HowManyMonths
    
    Returns the monthly payment amount.

4. Program Execution (main())
    Calls ReadPositiveNumber() to get:
    Loan Amount
    Number of Months
    Calls MonthlyInstallment() to compute the monthly installment.
    Prints:
    Monthly Installment required to repay the loan
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/