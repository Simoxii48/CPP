#include <iostream>
using namespace std;

class clsA
{
public:
    // static method can be called within the class itself, without the need of the instance
    static int Fun1()
    {
        return 10;
    }

    // fun 2 can only be accessible from the object
    int Fun2()
    {
        return 20;
    }
};

int main()
{
    // accessible through the class itself
    // At class level you can call only static methods and static members
    cout << clsA::Fun1() << endl;

    // static methods can also be called throught the object.
    clsA A1, A2;

    cout << A1.Fun1() << endl;
    cout << A1.Fun2() << endl;
    cout << A2.Fun1() << endl;
}