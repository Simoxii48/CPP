#include <iostream>
using namespace std;

class clsPerson
{
public:
    clsPerson()
    {
        cout << "\nHello I'm Constructor" << endl;
    }

    // The destructor is the last member function to be called after the instance of the class is been destroyed from the memory
    ~clsPerson()
    {
        cout << "Hello I'm Destructor" << endl;
    }
};

void fun1()
{
    // the destructor will be called when the function will be destroyed
    clsPerson person1;
}

void fun2()
{
    // pointer instence
    clsPerson *person2 = new clsPerson;

    // The destructor will not be called using pointer, should be manually called
    delete person2;
}

int main()
{
    cout << "Function 1 invoked :)";
    fun1();
    cout << "Function 1 destroyed" << endl;

    cout << "\nFunction 2 invoked :)";
    fun2();
    cout << "Function 2 destroyed" << endl;

    // the destructor of this instance will be called when the main will be destroyed

    cout << "\nFrom Main function";
    clsPerson person0;

    // after running the next line, then the destructor will be called for person0
    cout << "\nDestructor will be called after me" << endl;
    return 0;
}