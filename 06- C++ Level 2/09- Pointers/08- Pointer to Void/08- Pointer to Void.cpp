#include <iostream>
using namespace std;

struct stEmployee {
    string name = "";
    float salary = 0;
};

int main()
{
    // void pointer is a generic pointer can points to anything
    void* ptr;

    float f1 = 10.5;
    int x = 0;

    ptr = &f1;

    cout << ptr << endl;

    // in the case of retrieve the void pointer value of the variable points to the compiler will fail
    // cout << *ptr;

    // we need to explicitly cast the type to what it's pointing to
    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;
    *(static_cast<int*>(ptr)) = 15;

    cout << ptr << endl;

    cout << *(static_cast<int*>(ptr)) << endl;

    // void to struct exemple
    stEmployee employee1;
    employee1.name = "Mohammed Hejjam";
    employee1.salary = 10000;

    ptr = &employee1;

    cout << ptr << endl;
    cout << (static_cast<stEmployee*>(ptr))->name << endl;
    cout << (static_cast<stEmployee*>(ptr))->salary << endl;
}