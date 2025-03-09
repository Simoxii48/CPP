#include <iostream>
using namespace std;

// Private inheritance Exemple

class clsA
{
private:
    int V1;
    int Fun1()
    {
        return 1;
    }

protected:
    int V2;
    int Fun2()
    {
        return 2;
    }

public:
    int V3;
    int Fun3()
    {
        return 3;
    }
};

// class B inherits class A Privatelly means

// Private members in base class stays inaccessible
// Protected members in base class becomes private in derived class
// Public members in base class becomes private in derived class

// So in class B we can access protected & public members
// but from outside we can only access public members from class B
class clsB : private clsA
{
public:
    int Fun4()
    {
        // we can access protected members here
        // clsA::Fun2();
        // clsA::V2;
        // clsA::Fun3();
        // clsA::V3;

        return 4;
    }
};

int main()
{
    clsB B1;

    // All what we can access
    B1.Fun4();
}
