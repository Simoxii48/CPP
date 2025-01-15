
#include <iostream>
using namespace std;

int main()
{

    // Problem #47
    // Write a program to calculate the number of months to pay the loan

    // Variables declaration
    float
        loanAmount,
        monthlyPayment;

    // Read user input
    cout << "Please enter the loan amount : ";
    cin >> loanAmount;

    cout << "What is your monthly payment : ";
    cin >> monthlyPayment;
   
    // Calculation process
    float loanDuration = loanAmount / monthlyPayment;
    
    // Print results
    cout << "You need " << loanDuration << " month(s) to pay the loan" << endl;
  
    // Then Solve From Algorithms & Problem solving these Problems:
    // #48
}