#include <iostream>   // Include iostream for input/output operations.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Struct: stInfo
// Purpose: Holds information about a candidate, including age and whether they have a driving license.
struct stInfo
{
    int Age;                // Stores the candidate's age.
    bool HasDrivingLicense; // Stores whether the candidate has a driving license (true/false).
};

// Function: ReadInfo
// Purpose: Prompts the user to enter their age and whether they have a driving license.
// Returns: A struct containing the entered age and license status.
stInfo ReadInfo()
{
    stInfo Info;  // Declare a variable of type stInfo to store user input.

    // Prompt the user to enter their age and store it in the struct.
    cout << "Please Enter Your Age?" << endl;
    cin >> Info.Age;

    // Prompt the user to enter whether they have a driver's license (expects 1 for true, 0 for false).
    cout << "Do you have a driver’s license? (1 for Yes, 0 for No)" << endl;
    cin >> Info.HasDrivingLicense;

    return Info;  // Return the filled struct.
}

// Function: IsAccepted
// Purpose: Determines if the candidate is accepted based on age and license status.
// Parameter: Info - struct containing the candidate's age and license status.
// Returns: true if the candidate is older than 21 and has a driving license, otherwise false.
bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

// Function: PrintResult
// Purpose: Prints whether the candidate is hired or rejected based on eligibility.
// Parameter: Info - struct containing the candidate's details.
void PrintResult(stInfo Info)
{
    // Check eligibility using IsAccepted function and print the corresponding message.
    if (IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}

// Main function: Program entry point.
int main()
{
    // Read candidate information, check eligibility, and print the result.
    PrintResult(ReadInfo());

    return 0;  // Return 0 to indicate successful execution.
}

/*
    Code Overview

1. Header Files and Namespace:
    <iostream> is included for input and output operations.
    using namespace std; allows the use of standard functions without prefixing them with std::.

2. Struct Definition (stInfo)
    Stores the candidate’s Age and HasDrivingLicense status.

3. User Input Function (ReadInfo)
    Prompts the user to enter their age and driving license status.
    Reads and stores the values in a struct.
    Returns the struct with user information.

4. Eligibility Checking Function (IsAccepted)
    Determines if the candidate is eligible based on two conditions:
    Age must be greater than 21.
    Must have a valid driving license.
    Returns true if both conditions are met; otherwise, returns false.

5. Output Function (PrintResult)
    Calls IsAccepted() to check eligibility.
    Prints "Hired" if eligible; otherwise, prints "Rejected".

6. Program Execution (main())
    Calls ReadInfo() to collect user input.
    Passes the input to PrintResult() to determine and display the result.
    Returns 0 to indicate successful execution.
    This structured explanation ensures clarity and ease of understanding. 
*/