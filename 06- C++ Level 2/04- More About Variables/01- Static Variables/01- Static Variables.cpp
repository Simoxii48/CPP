#include <iostream>
using namespace std;

int sum;

void myFunc() {
    // local variable will be destroyed when the function finish
    int number = 1;
    cout << "Value of number: " << number << endl;
    number++;
}

void myFunc2() {
    // static variable
    // static variable is holding the variable in the memory even when the function finish
    // static variables will live with the program life
    static int number = 1;
    cout << "Value of number: " << number << endl;
    number++;
}

int main()
{
    myFunc();
    myFunc();
    myFunc();
    
    cout << endl;

    myFunc2();
    myFunc2();
    myFunc2();

    return 0;
}