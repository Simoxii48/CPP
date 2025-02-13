#include <iostream>
using namespace std;

// Stack & Heap Memory difference

// The memory is the RAM
// RAM will be divided by 4 for the program
// => part for Source code/ instructions

// => part for Static/Global variables

// => part for Stack : the memory given by the operating system assigned for the program
// Local Variables/Functions/Pointers
// So basically the compiler will look for the entire program (arrays, local&global variables,functions,...)
// based on that it will give us the needed memory to run our program, let's say 1Mb
// in case we needed more space, we need to borrow more space.

// the pointer in cases of dynamic allocations, will give us the way for 

// => part for Heap : the rest of the memory
// any dynamic variables/object/arrays....

// The Stack is the limited memory allocated for our program 
// The Heap is somehow is the rest of the memory
// The pointer is the way out from the stack to the Heap
// any dynamic variable function .... will be saved in the heap not the stack

int main()
{
    
}