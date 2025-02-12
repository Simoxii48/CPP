#include <iostream>
using namespace std;

// call by val
void function1(int x) {
    // Demonstrate the variable param address in memory
    cout << "The Hex address of x : " << &x << endl << endl;
    
    x++;
}

// call by Ref &
void function2(int& x) {
    // Demonstrate the variable param address in memory
    cout << "The Hex address of x : " << &x << endl << endl;
    
    x++;
}

int main()
{
    int a = 10;

    cout << "The Hex address of a : " << &a << endl << endl;

    cout << "Function by val invoked and changed nothing in the variable sent\n";
    // function called by val will create a copy of the sent variable, edit it in the func destroy it when finish
    function1(a);

    cout << "A variable new value : " << a << endl;

    cout << "Function by ref invoked and changed the variable sent\n";
    // function called by Ref will point to the same memory address with an extra alias (x,a) point to the same variable
    function2(a);

    cout << "A variable new value : " << a << endl;

    // notice that sending a variable by Ref will share the same address variable in main 
    // which will reflect edits directly to the variable

    return 0;
}