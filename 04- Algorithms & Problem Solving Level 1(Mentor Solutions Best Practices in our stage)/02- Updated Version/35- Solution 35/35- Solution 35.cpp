// 35- Solution 35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Struct: stPiggyBankContent
// Purpose: Represents the different types of coins and dollar bills in the piggy bank.
struct stPiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

// Function: ReadPiggyBankContent
// Purpose: Prompts the user to enter the number of different coins and dollar bills in the piggy bank.
// Returns: A struct containing the number of each type of coin/bill.
stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;  // Variable to store the piggy bank content.

    // Prompt the user to enter the quantity of each type of coin and dollar bill.
    cout << "Please enter the total number of Pennies: " << endl;
    cin >> PiggyBankContent.Pennies;
    cout << "Please enter the total number of Nickels: " << endl;
    cin >> PiggyBankContent.Nickels;
    cout << "Please enter the total number of Dimes: " << endl;
    cin >> PiggyBankContent.Dimes;
    cout << "Please enter the total number of Quarters: " << endl;
    cin >> PiggyBankContent.Quarters;
    cout << "Please enter the total number of Dollar bills: " << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;  // Return the filled struct.
}

// Function: CalculateTotalPennies
// Purpose: Converts all coins and dollar bills in the piggy bank to the equivalent value in pennies.
// Parameter:
//   - PiggyBankContent: A struct containing the number of each type of coin/bill.
// Returns: The total value in pennies.
int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    // Compute total pennies by converting each coin type to its equivalent in pennies.
    int TotalPennies = PiggyBankContent.Pennies * 1
        + PiggyBankContent.Nickels * 5
        + PiggyBankContent.Dimes * 10
        + PiggyBankContent.Quarters * 25
        + PiggyBankContent.Dollars * 100;

    return TotalPennies;  // Return the total value in pennies.
}

// Main function: Program entry point.
int main()
{
    // Read the piggy bank content and calculate the total value in pennies.
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    // Display the total amount in pennies.
    cout << endl << "Total Pennies = " << TotalPennies << endl;

    // Display the total amount in dollars by converting pennies to dollars.
    cout << endl << "Total Dollars = $" << (float)TotalPennies / 100 << endl;

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included for potential future use (not used in this program).
    using namespace std; allows the use of standard functions without prefixing them with std::.
    
2. Structure (stPiggyBankContent)
    Defines a struct to store counts of different types of coins and dollar bills:
    Pennies
    Nickels
    Dimes
    Quarters
    Dollars

3. User Input Function (ReadPiggyBankContent)
    Prompts the user to enter the number of coins and dollar bills.
    Stores the values in a struct.
    Returns the struct containing piggy bank content.

4. Total Penny Calculation Function (CalculateTotalPennies)
    Converts all coins and dollar bills into pennies using:
    
    
    Returns the total amount in pennies.

5. Program Execution (main())
    Calls ReadPiggyBankContent() to get user input.
    Calls CalculateTotalPennies() to compute the total in pennies.
    Prints:
    Total Pennies
    Total Dollars (converted from pennies)
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding.
*/