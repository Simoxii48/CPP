
#include <iostream>
using namespace std;

int main()
{
    // Problem #31
    // Write a program to ask the user to enter a number, then print the number^2, number^3 & number^4
    int number, numberPo2, numberPo3, numberPo4;
    

    cout << "Please enter your number : ";
    cin >> number;

    numberPo2 = number * number;
    numberPo3 = numberPo2 * number;
    numberPo4 = numberPo3 * number;

    cout << "The number you entered is : " << number << endl;
    cout << "The number power 2 is : " << numberPo2 << endl;
    cout << "The number power 3 is : " << numberPo3 << endl;
    cout << "The number power 4 is : " << numberPo4 << endl;



    // Then Solve From Algorithms & Problem solving these Problems:
    // #35, #39, #40, #42, #43, #47, & #48
}