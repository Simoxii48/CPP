
#include <iostream>
using namespace std;

int main()
{

    // Problem #48
    // Write a program to calculate the monthly installment

    // Variables declaration
    float
        loanAmount,
        duration;

    // Read user input
    cout << "Please enter the loan amount : ";
    cin >> loanAmount;

    cout << "For how many months you want to pay your loan : ";
    cin >> duration;

    // Calculation process
    float loanDuration = loanAmount / duration;

    // Print results
    cout << "Your monthly payment will be " << loanDuration << " $" << endl;

}