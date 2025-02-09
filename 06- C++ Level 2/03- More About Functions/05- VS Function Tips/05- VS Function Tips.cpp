#include <iostream>
using namespace std;

// function declaration
void function2();

// functions definition
void koko() {
    cout << "Hi, i'm function 4 " << endl;
}

void function3() {
    koko();
}

void function2() {
    function3();
}

void function1() {
    function2();
    koko();
}

int main()
{
    // tip 1 to press f12 will take you straight to the function
    // tip 2 to press ctrl + f12 to take you to the function declaration
    // tip 3 to double press the function will color it where is it
    // tip 4 to collapse and expand the code
    // tip 5 to view call hierarchy
    // tip 6 to find all references shift + f12
    // tip 7 to peak definition by press alt + f12
    // tip 8 to rename the function name in all the program with right click rename

    function1();

    return 0;
}