#include <iostream>
using namespace std;

// Base class
class clsPerson
{
public:
    string fullName = "Mohammed Abu-Hadhoud";
};

// Derived class
class clsEmployee : public clsPerson
{
public:
    string title = "CEO";
};

int main()
{
    clsEmployee Employee1;
    cout << Employee1.fullName << endl;

    // Upcasting will convert Employee to Person
    clsPerson *Person1 = &Employee1;

    // When we upcast from from big to small (Derived to Base) we will only access what we have in the Base class because it exists in the Derived class by inheritance
    cout << Person1->fullName << endl;

    clsPerson Person2;
    cout << Person2.fullName << endl;

    // Downcasting will convert Person to Employee
    // you cannot convertPperson to Employee
    // clsEmployee* Employee2 = &Person2;

    // Every Employee is a Person, But not every Person is an Employee
}