#include <iostream>
using namespace std;

// The scope is from the first { untill the next one closing }
// every variable has 3 values : name, value & the important one, the Reference
// so let's say we declare a variable X in Y scope, here C++ will save the variable X with the name X, the value assigned to it and the Reference 0x0a12d12 (for exemple)
// when you will declare another X, the compiler will throw the error, because it is seeing that you already declare X, how it knows, by the Reference 0x0a12d12


// global variable will be visible within all the program
// the global variables will live the life of the program
int x = 100;

// IMPORTANT HINT

// if wa want to access the global x variable from any part of the program we will write ::x 

void myFunction() { // From here down to the next comment is the scope function
    // x variable will live within this scope and we can not declare another x variable 
    
    // local variables will live with the function life
    // the x value will be stored in the memory
    int x = 10;

    cout << "The value of x inside myFunction is : " << x << endl;
    
    // here all the local variables will be destroyed from the memory to save the space for something else
} // untill here

int main()
{ // from here
    // here we can declare x, because we are within another scope, but we can not declare 2 x within the same scope

    int x = 20;

    cout << "The value of x inside main function is : " << x << endl;

    myFunction(); // will print the value of x inside my function

    cout << "The global value of x is : " << ::x << endl;

    // we can as well edit the global variables values
    ::x = ::x + 50;

    cout << "The global value of x becomes : " << ::x << endl;
    
} // to here is the main function scope
