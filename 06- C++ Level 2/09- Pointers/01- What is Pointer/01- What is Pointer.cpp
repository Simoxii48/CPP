#include <iostream>
#include <vector>
using namespace std;

// pointers are only variable that can hold only addresses of any other variable

// you can access the pointer from anywhere in the program
// pointer can only hold addresses not anything else

int main()
{
    int a = 10;

    cout << "A value = " << a << endl;
    cout << "A address = " << &a << endl;

    // pointer declaration
    int* p = &a;

    cout << "Pointer value = " << p << endl;

    // variable int type
    int b = 20;

    cout << "B value = " << b << endl;
    cout << "B address = " << &b << endl;

    // you can change the pointer to point what within the runtime
    // we change the pointer p to point b instead of a
   
    // pointer should be int as well
    p = &b;

    cout << "Pointer value = " << p << endl;

    // the pointer type needs to point to the same variable type
    
    // variable bool type
    bool c = 0;

    // pointer should be bool as well
    bool* pBool = &c;

    cout << "C value = " << c << endl;
    cout << "C address = " << &c << endl;

    cout << "Pointer value = " << pBool << endl;

    //  variable string type
    string name = "h";

    // pointer should be string as well
    string* pString = &name;

    cout << "String value = " << name << endl;
    cout << "String address = " << &name << endl;

    cout << "Pointer value = " << pString << endl;
}