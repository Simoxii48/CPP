#include <iostream>
using namespace std;

class clsPerson
{
public:
    // data members have their own space in the memory because each instance is different than the other
    string firstName;
    string lastName;

    // function members will be in our exemple only 1 function shared to all the instances to save the memory
    // what's the point to attach every object instance with its own function
    string fullName()
    {
        return firstName + " " + lastName;
    }
};

int main()
{
    clsPerson person1, person2;

    person1.firstName = "Mohammed";
    person1.lastName = "Hejjam";

    person2.firstName = "Maher";
    person2.lastName = "Bukhari";

    cout << person1.fullName() << endl;
    cout << person2.fullName() << endl;
}