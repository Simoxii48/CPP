#include <iostream>

using namespace std;

// how to declare a function/procedure
void myFunction() {
    cout << "My function got executed ;)" << endl;
}

// another declaration
void myFunction2() {
    cout << "My second function :-)" << endl;
}

int main()
{
    // Functions are small programs in our big program that has pieces of codes will run when we will call it
    // We ha have functions & procedures, the difference is quit simple, when the function does not return a value then it's a procedure, and when it does it's a function

    // When i need to call my function above all i need is that
    myFunction(); // then it will run the code inside it

    // you can call it whenever you need it 
    // ALWAYS remember that the function will do 1 task and its name to be descriptive to its function

    // calling the second function
    myFunction2();
}