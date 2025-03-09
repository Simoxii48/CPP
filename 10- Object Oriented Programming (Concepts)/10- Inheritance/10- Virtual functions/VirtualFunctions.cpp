#include <iostream>
using namespace std;

// Brief about the Virtual functions concept

//  When you have a Base class pointer that points to Derived class, so it's invoking the functions that the Base know, it's the normal behaviour in OOP.

// When you use the virtual keyword in the Base class, it will be an exception, here it will run the method from the Derived class.

// 2 Conditions that make the object method run from the Derived class not the Base class :
//  1- The function in the Base class must be virtual, that makes the Vtable handle the function dynamically in the runtime.
//  2- the Function must be override in the Derived class, forget using the override concept will make the function in the Base class run even if it's virtual.

// IMPORTANT : if any one of the 2 conditions fails it will make the pointer call the Base method not the derived.

class clsPerson
{
public:
    virtual void Print()
    {
        cout << "Hi, i'm a person!\n";
    }
};

class clsEmployee : public clsPerson
{
public:
    void Print()
    {
        cout << "Hi, I'm an Employee\n";
    }
};

class clsStudent : public clsPerson
{
public:
    void Print()
    {
        cout << "Hi, I'm a student\n";
    }
};

int main()
{
    clsEmployee Employee1;
    clsStudent Student1;

    cout << "Using Normal function overriding :\n"
         << endl;

    cout << "Employee subClass print overrided method : ";
    Employee1.Print();
    cout << "Student subClass print overrided method : ";
    Student1.Print();

    cout << endl
         << "Using pointers :\n"
         << endl;

    clsPerson *Person1 = &Employee1;
    clsPerson *Person2 = &Student1;

    cout << "Employee subClass print method : ";
    Person1->Print(); // will invoke the print() from the person class
    cout << "Student subClass print method : ";
    Person2->Print(); // will invoke the print() from the person class

    return 0;
}
