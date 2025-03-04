#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadName
// Purpose: Prompts the user to enter their name and reads it from the input.
// Returns: A string containing the user's entered name.
string ReadName()
{
    string Name;  // Declare a string variable to store the user's name.

    // Prompt the user to enter their name.
    cout << "Please enter your name? " << endl;

    // Use getline to read the full name, including spaces.
    getline(cin, Name);

    return Name;  // Return the entered name.
}

// Function: PrintName
// Purpose: Displays the entered name with a formatted message.
// Parameter: Name - a string containing the name to be displayed.
void PrintName(string Name)
{
    // Print the user's name with a message, adding a newline for formatting.
    cout << "\n Your Name is: " << Name << endl;
}

// Main function: Program entry point.
int main()
{
    // Call ReadName to get the user's input and pass it to PrintName for display.
    PrintName(ReadName());

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included to work with std::string for handling names.
    using namespace std; allows the use of standard functions without prefixing them with std::.
2. User Input Function (ReadName)
    Prompts the user to enter their name.
    Uses getline(cin, Name) to capture the full name, including spaces.
    Returns the entered name.
3. Name Printing Function (PrintName)
    Receives the entered name as a parameter.
    Prints it in the format: "Your Name is: [Name]".
4. Program Execution (main())
    Calls ReadName() to get user input.
    Passes the returned name to PrintName() for display.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity. 
*/