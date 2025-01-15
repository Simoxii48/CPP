
#include <iostream>
using namespace std;

int main()
{
    // Problem #40
    // Write a program to read the bill value and add service fee & sales tax and print the total new value

    // Variables declaration
    float theBillValue;

    // Read user input
    cout << "Please enter the bill amount : ";
    cin >> theBillValue;

    // Calculation process
    theBillValue = theBillValue * 1.1 * 1.16;// (1.1 equals to 10% & 1.16 equals to 16%) 

    // Print results
    cout << "Total amount need to be paid is : " << theBillValue << " $" << endl;


    // Then Solve From Algorithms & Problem solving these Problems:
    // #42, #43, #47, & #48
}