#include <iostream>
using namespace std;

class clsMember
{

public:
    int var;
    static int counter;

    // Constructor each time we will create an instance, the counter will increase by 1 reflecting on all instances the same number of counter (Shared for all)
    clsMember()
    {
        counter++;
    }

    void Print()
    {
        cout << "\nvar     = " << var << endl;
        cout << "counter = " << counter << endl;
    }
};

// static variable initialisation outside the class
int clsMember::counter = 0;

int main()
{
    // Create 3 instances of the class
    clsMember a1, a2, a3;

    // defining each instance variable
    a1.var = 10;
    a2.var = 20;
    a3.var = 30;

    a1.Print();
    a2.Print();
    a3.Print();

    // any instance can access and edit the static shared counter and will reflect the same for all the instances.
    a2.counter = 59;

    cout << "\nafter chaning the static member counter in one object:\n";

    a1.Print();
    a2.Print();
    a3.Print();

    return 0;
}