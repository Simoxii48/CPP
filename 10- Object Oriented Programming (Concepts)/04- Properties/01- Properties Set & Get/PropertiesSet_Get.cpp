#include <iostream>
using namespace std;

// NOT ALLOWED TO WRITE ANY CODE OUTSIDE THE CLASS AT ALL XXX

// from now on there is no public variable within our classes
class clsPerson
{
    // private data members are advised to be started with _
    string _firstName;
    string _lastName;

public:
    // only way to edit the private data members is through Set function
    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    // only way to retrieve the private data member is through Get Function
    string getFisrtName()
    {
        return _firstName;
    }

    void setLastName(string lastName)
    {
        _lastName = lastName;
    }

    string getLastName()
    {
        return _lastName;
    }

    string fullName()
    {
        return getFisrtName() + " " + getLastName();
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
}