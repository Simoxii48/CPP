
#include <iostream>
using namespace std;

int main()
{
    // Problem #14
    // Write a program to ask the user to enter 2 numbers then print the 2 numbers numbers then swap them and print them again.

    int num1, num2, temp = 0;

    cout << "Please enter the number 1 : ";
    cin >> num1;

    cout << "Please enter the number 2 : ";
    cin >> num2;

    cout << "The number 1 is : " << num1 << " and the number 2 is : " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The number 1 becomes : " << num1 << " and the number 2 becomes : " << num2 << endl;


    // Then Solve From Algorithms & Problem solving these Problems:
    // #15, #17, #19, #20, #21, #22, #31, #35, #39, #40, #42, #43, #47, & #48
}