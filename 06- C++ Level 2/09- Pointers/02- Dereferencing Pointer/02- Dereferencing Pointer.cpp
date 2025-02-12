#include <iostream>
using namespace std;

// Dereferencing Pointer means change the value of the variable that the pointer points to by the pointer

int main()
{
    // variable declaration
    int a = 10;

    // console the variable value
    cout << a << endl;
    // consle the variable address
    cout << &a << endl;

    // pointer declaration (Referencing)
    int* p = &a;

    // console the pointer value (variable a address)
    cout << "Pointer value is : " << p << endl;
    // console the variable value that the pointer points to
    cout << "Value of the address that p is pointing to is : " << *p << endl;

    // Dereferencing the pointer to new value
    *p = 20;

    // console the variable a value (check if the pointer changes its value)
    cout << a << endl;
    // console the variable value that the pointer points to
    cout << *p << endl;

    // assign new value to the variable a
    a = 30;

    // console the variable value
    cout << a << endl;
    // console the variable value that the pointer points to
    cout << *p << endl;


    int b = 15;
    *&b = 5; // we can change any memory address value with the key *, that's the pointer power
    cout << b << endl;

    int* pB = &b;
    *pB = 10;
    cout << b << endl;
}