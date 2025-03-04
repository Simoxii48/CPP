#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPinCode
// Purpose: Prompts the user to enter a PIN code and reads it from input.
// Returns: A string containing the entered PIN code.
string ReadPinCode()
{
    string PinCode;  // Variable to store the entered PIN code.

    // Prompt the user to enter their PIN code.
    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;  // Return the entered PIN code.
}

// Function: Login
// Purpose: Authenticates the user by checking if the entered PIN matches "1234".
//          Allows up to 3 incorrect attempts before blocking access.
// Returns: true if login is successful, false if the user fails all attempts.
bool Login()
{
    string PinCode;  // Variable to store the entered PIN code.
    int Counter = 3; // Number of attempts allowed.

    // Keep prompting the user until the correct PIN is entered or attempts run out.
    do
    {
        Counter--;  // Decrement the attempt counter.
        PinCode = ReadPinCode();  // Read PIN from user.

        if (PinCode == "1234")  // Check if the entered PIN is correct.
        {
            return true;  // Return true if login is successful.
        }
        else
        {
            cout << "\nWrong PIN, you have " << Counter << " more tries\n";  // Show remaining attempts.
        }

    } while (Counter >= 1 && PinCode != "1234");  // Continue if attempts remain and PIN is incorrect.

    return false;  // Return false if login failed after all attempts.
}

// Main function: Program entry point.
int main()
{
    // Check if the user has successfully logged in.
    if (Login())
    {
        system("color 2F");  // Change console text to green (Windows-specific).
        cout << "\nYour account balance is " << 7500 << '\n';  // Display account balance.
    }
    else
    {
        system("color 4F");  // Change console text to red (Windows-specific).
        cout << "\nYour card is blocked. Call the bank for help.\n";  // Notify the user of blocked access.
    }

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. User Input Function (ReadPinCode)
    Prompts the user to enter a PIN code.
    Reads and returns the entered PIN code.

3. Authentication Function (Login)
    Uses a do-while loop to allow a maximum of 3 attempts.
    If the correct PIN (1234) is entered, it returns true (successful login).
    If the wrong PIN is entered:
    The remaining attempts are displayed.
    The user can retry up to 3 times.
    If the user fails all 3 attempts, it returns false (access blocked).

4. Program Execution (main())
    Calls Login() to authenticate the user.
    If login is successful:
    Changes console text to green (system("color 2F") for Windows).
    Displays the account balance (7500).
    If login fails after 3 attempts:
    Changes console text to red (system("color 4F") for Windows).
    Displays a message indicating that the card is blocked.
    Returns 0 to indicate successful execution.
*/