#include <iostream>
using namespace std;

class clsPerson
{
    // the private modifiers will make its data & function members available only within the class itself.
private:
    int variable1 = 5;
    int function1()
    {
        return 40;
    }

    // the protected modifier will make its data & function members available only within the class itself and the classes
    //  that will inherit the class, and not for available for outside
protected:
    int variable2 = 100;
    int function2()
    {
        return 50;
    }

    // public modifier will make its data & function members availbale for everyone
public:
    string fisrtName;
    string lastName;

    string fullName()
    {
        return fisrtName + " " + lastName;
    }

    float function3()
    {
        return function1() * variable1 * variable2;
    }
};

int main()
{
    clsPerson person1;

    person1.fisrtName = "Mohammed";
    person1.lastName = "Hejjam";

    cout << "Person 1 : " << person1.fullName() << endl;
    cout << person1.function3() << endl;
}