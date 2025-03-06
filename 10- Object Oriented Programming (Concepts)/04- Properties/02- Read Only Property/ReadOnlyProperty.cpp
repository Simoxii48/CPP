#include <iostream>
using namespace std;

class clsPerson
{
    string _FirstName;
    string _LastName;
    short _Id = 10;

public:
    void setFirstName(string firstName)
    {
        _FirstName = firstName;
    }

    string getFisrtName()
    {
        return _FirstName;
    }

    void setLastName(string lastName)
    {
        _LastName = lastName;
    }

    string getLastName()
    {
        return _LastName;
    }

    string fullName()
    {
        return getFisrtName() + " " + getLastName();
    }

    short getPersonId()
    {
        return _Id;
    }
};

int main()
{
    clsPerson person;

    person.setFirstName("Mohammed");
    person.setLastName("Hejjam");

    cout << "\nFirstName : " << person.getFisrtName() << endl;
    cout << "\nLastName : " << person.getLastName() << endl;
    cout << "\nFullName : " << person.fullName() << endl;
    cout << "\nPerson ID : " << person.getPersonId()<<endl;
}