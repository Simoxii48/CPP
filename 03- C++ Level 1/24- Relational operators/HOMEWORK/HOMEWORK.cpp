

#include <iostream>
using namespace std;

int main()
{
    // HOMEWORK TASK : Write a program to ask the user to enter 2 numbers, then apply the relational operators we learned

    int number1, number2;

    cout << "Please enter the first number A :\n";
    cin >> number1;

    cout << "Please enter the second number B :\n";
    cin >> number2;

    cout << number1 << " = " << number2 << " is " << (number1 == number2) << endl;
    cout << number1 << " != " << number2 << " is " << (number1 != number2) << endl;
    cout << number1 << " < " << number2 << " is " << (number1 < number2) << endl;
    cout << number1 << " > " << number2 << " is " << (number1 > number2) << endl;
    cout << number1 << " <= " << number2 << " is " << (number1 <= number2) << endl;
    cout << number1 << " >= " << number2 << " is " << (number1 >= number2) << endl;

}