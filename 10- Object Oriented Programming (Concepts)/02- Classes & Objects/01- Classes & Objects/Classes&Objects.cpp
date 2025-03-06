#include <iostream>
#include <vector>
using namespace std;

// the class is a data type same like struct int string ...
class clsPerson
{
    // you ca, either use private or not the class members are private by default
private:
    int x = 1;

    // by default, every member in the class is private, any members you need to set them public use public
public:
    string firsName;
    string lastName;

    string fullName()
    {
        return firsName + " " + lastName;
    }
};

int main()
{
    // object instance of he class
    clsPerson Person1;

    Person1.firsName = "Mohammed";
    Person1.lastName = "Hejjam";

    cout << Person1.fullName() << endl;

    // the member x can not be exposed here, inaccessible member
    // Person1.x;

    // we declare S1 object from the string class
    string S1;
}