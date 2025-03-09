#include <iostream>
using namespace std;

class clsPerson
{
private:
    int _Salary;

protected:
    string _Name;

public:
    string Hobby = "Development";

    clsPerson()
    {
        _Name = "Mohammed";
        _Salary = 2500;
    }

    // Giving the bribe so it will expose everything to our class
    // This will grant access for everything to class Employee
    friend class clsEmployee; // Friend class concept
};

class clsEmployee : public clsPerson
{
public:
    void Display(clsPerson Person)
    {
        // we can not access the protected & private members from clsPerson, let's give it a bribe X')
        cout << "The Name of The Person is " << Person._Name << endl;
        cout << "The Salary of " << Person._Name << " is " << Person._Salary << endl;
        cout << "The Hobby of " << Person._Name << " is " << Person.Hobby << endl;
    }
};

int main()
{
    clsEmployee Employee1;
    clsPerson Person;

    Employee1.Display(Person);
}