#include <iostream>
using namespace std;

// Public inheritance Exemple

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

// class B inherits class A publically means

// Private members in base class stays inaccessible
// Protected members in base class stays protected
// Public members in base class stays public

// So in class B we can access protected & public members
// but from outside we can only access public members from class B
class clsB : public clsA
{
public:
    int Fun4()
    {
        // we can access protected members here
        // clsA::Fun2();
        // clsA::V2;

        return 4;
    }
};

int main()
{
    clsB B1;

    // All what we can access
    B1.Fun3();
    B1.V3;
    B1.Fun4();
}
