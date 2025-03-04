#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: PrintName
// Purpose: Prints a message displaying the given name.
// Parameter: Name - a string containing the name to be displayed.
void PrintName(string Name)
{
    // Print the name with a message, adding a newline before for formatting.
    cout << "\n Your Name is: " << Name << endl;
}

// Main function: Program entry point.
int main()
{
    // Call the PrintName function, passing "Mohammed" as the argument.
    // This will display: "Your Name is: Mohammed"
    PrintName("Mohammed");

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    <string> is included to work with the std::string data type.
    The using namespace std; directive allows standard functions like cout and string to be used without prefixing them with std::.

2. Name Printing Function:
    PrintName takes a string parameter and prints it along with a formatted message.
    It utilizes cout for output, with \n to ensure proper formatting before the message.

3. Program Execution:
    main() is the entry point of the program.
    The function PrintName("Mohammed") is called, which prints "Your Name is: Mohammed".
    The program returns 0, indicating successful execution.
    This structured explanation makes it easy to understand each component of the code. 
*/