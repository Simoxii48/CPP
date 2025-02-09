#include <iostream>
using namespace std;

// The Stack : First In Last Out

// the call stack will invoke the main function firstly as the active frame and remember only one active frame
// the main func will invoke function1, the active frame now is on func 1
// function1 will invoke function2
// function2 will invoke function3
// function3 will invoke function4
// function 4 will be executed, and it will be poped out from the stack
// the active frame no is on function3, finished then pop up from the stack
// and so on untill the main will get poped out then that's the program life

void function4() {
    cout << "Hi, i'm function 4 " << endl; 
}

void function3() {
    function4();
}

void function2() {
    function3();
}

void function1() {
    function2();
}

int main()
{
    function1();

    return 0;
}