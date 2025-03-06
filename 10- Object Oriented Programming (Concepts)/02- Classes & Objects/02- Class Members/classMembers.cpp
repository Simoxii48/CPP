#include <iostream>
using namespace std;

class clsPerson
{
public:
    // Data members is any variable declared inside the class that holds data
    string firstName;
    string lastName;

    // function members is any function or procedure declared inside the class
    string fullName()
    {
        return firstName + " " + lastName;
    }
};

int main()
{
    clsPerson person1;

    person1.firstName = "Mohammed";
    person1.lastName = "Hejjam";

    cout << person1.fullName() << endl;
}