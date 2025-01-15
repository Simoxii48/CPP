
#include <iostream>
using namespace std;

int main()
{
    // Problem #35
    // Write a program to make the piggy bank calculator

    // Variables declaration
    float pennies, nickles, dimes, quarters, dollars, pennyValue = 1;

    // Read user inputs
    cout << "Please enter your pennies : ";
    cin >> pennies;

    cout << "Please enter your nickles : ";
    cin >> nickles;

    cout << "Please enter your dimes : ";
    cin >> dimes;

    cout << "Please enter your quarters : ";
    cin >> quarters;

    cout << "Please enter your dollars : ";
    cin >> dollars;

    // Calculation process
    pennies = pennies * pennyValue;
    nickles = nickles * pennyValue * 5;
    dimes = dimes * pennyValue * 10;
    quarters = quarters * pennyValue * 25;
    dollars = dollars * pennyValue * 100;

    float total = pennies + nickles + dimes + quarters + dollars;
    

    // Print results on screen
    cout << "The total pennies yin your bank is : " << total << endl;
    cout << "The total amount of dollars in your piggy bank is : " << total / 100 << endl;

    
    //******************************************************************************************************
    // Mentor Solution for optimization 

    // Variables declaration
    float Pennies, Nickels, Dimes, Quarters, Dollars;

    // Read user inputs
    cout << "Please enter your pennies : ";
    cin >> Pennies;

    cout << "Please enter your nickles : ";
    cin >> Nickels;

    cout << "Please enter your dimes : ";
    cin >> Dimes;

    cout << "Please enter your quarters : ";
    cin >> Quarters;

    cout << "Please enter your dollars : ";
    cin >> Dollars;

    // Calculation process
    float totalPennies = Pennies * 1 + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
    float totalDollars = totalPennies / 100;

    // Print results on screen
    cout << "The total pennies yin your bank is : " << totalPennies << endl;
    cout << "The total amount of dollars in your piggy bank is : " << totalDollars << endl;
    
    // Then Solve From Algorithms & Problem solving these Problems:
    // #39, #40, #42, #43, #47, & #48
}