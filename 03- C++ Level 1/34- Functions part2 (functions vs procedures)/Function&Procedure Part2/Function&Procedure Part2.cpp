#include <iostream>

using namespace std;

// Procedure exemple
void myFunction1() {
    cout << "My function 1 got executed :)" << endl;
}

// Function exemple
// Every function is with a unique data type that has to return
// In our exemple our myFunction2 is a string function that will finally return a string value
string myFunction2() {
    return "My function 2 got executed :)";
}

// another function exemple
int myFunction3() {
    int x = 10, y = 20;
    return x * y;
}

int main()
{
    // calling function1
    myFunction1();

    // calling function2
    // because it will return a string value, let's print it on the screen
    cout << myFunction2() << endl;
    
    // calling my function 3
    myFunction3();
    
    // We noticed that nothing printed on the screen because the function is returning a value not printing on screen
    cout << myFunction3() << endl; // will print 200

    // we can as well hold the value of the function in a variable
    int result = myFunction3();

    cout << result << endl;
}