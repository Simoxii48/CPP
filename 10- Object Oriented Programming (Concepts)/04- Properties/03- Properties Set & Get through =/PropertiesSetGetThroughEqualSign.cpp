#include <iostream>
using namespace std;

class clsPerson
{
    string _FirstName;

public:
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string getFirstName()
    {
        return _FirstName;
    }
    // declaration specification syntax
    __declspec(property(get = getFirstName, put = setFirstName)) string FirstName;
};

int main()
{
    clsPerson person;

    person.setFirstName("Mohammed");
    cout << person.getFirstName() << endl;

    // instead of the above we only write this
    person.FirstName = "Mohammed";
    cout << person.FirstName;
}