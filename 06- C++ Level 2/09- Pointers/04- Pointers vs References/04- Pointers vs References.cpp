#include <iostream>
using namespace std;

// Defference btw Pointers & Reference

// The pointer has a slot in the memory that holds the variable address that points to
// Pointer has Name:p, Value:variable address that points to, Memory address:0x001254dc

// The Ref is not a pointer it's an alias for the variable
// The Ref has not a slot in the memory, it's addes to the same variable slot with his name
// The Ref can not be changed when we assign it to a variable


// To conclude the ref while its assigned to a variable then it will stuck with it, we can not change it in the program runtime,
// but the pointer will give us a flexibility to change what's pointing to as long as it's points to the same data type

int main()
{
    int a = 10;

    // create a Ref& for a
    int& x = a;

    cout << &a << endl;
    cout << &x << endl;

    cout << a << endl;
    cout << x << endl;

    // Create a pointer
    int* p = &a;

    cout << p << endl;
    cout << *p << endl;

    int b = 20;

    // we can not change the Ref in the runtime to another variable
    // &x = b;

    // change the pointer value to new variable
    p = &b;

    cout << p << endl;
    cout << *p << endl;
}