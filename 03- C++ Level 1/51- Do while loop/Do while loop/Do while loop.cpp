#include <iostream>
using namespace std;

// Read number in range using while loop
int readIntNumberInRangeUsingWhile(int from, int to) {
    // int to save the inserted number
    int number;

    // print a message for the user
    cout << "Please enter a number between : " << from << " and " << to << endl;
    
    // reading from the user
    cin >> number;
    
    // first we will check if the conditions are met we will execute the while loop, but if not we will skip the loop directly 
    while (number<from || number>to) {
        // print the message to show the mistake the user occured
        cout << "Wrong number,";

        // ask again to do the following 
        cout << "Please enter a number between : " << from << " and " << to << endl;
        
        // reading from the user once again
        cin >> number;
    }

    // returning the value
    return number;
}

// Read number in range using Do while loop
int readIntNumberInRangeUsingDoWhile(int from, int to) {
    // int to save the inserted number
    int number;

    // here is different than while(), here we will execute the do body at least once then we will check the conditions,
    // if met we do more itterations, and if not we will break the loop
    do {
        // print a message for the user
        cout << "Please enter a number between : " << from << " and " << to << endl;

        // reading from the user
        cin >> number;
    } while (number<from || number>to); // conditions to check after do body is executed
    return number;
}

int main()
{
    // using while loop
    cout << "\n The number you inserted is " << readIntNumberInRangeUsingWhile(1, 10) << " Using while loop" <<  endl;
    
    // using do while loop
    cout << "\n The number you inserted is " << readIntNumberInRangeUsingDoWhile(1, 10) << " using do while loop" << endl;
}