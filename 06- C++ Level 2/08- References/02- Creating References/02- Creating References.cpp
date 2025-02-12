#include <iostream>
using namespace std;


int main()
{
    int a = 10;

    // creating a Ref point to memory address of a
    int& x = a;

    cout << &a << endl;
    cout << &x << endl;

    cout << a << endl;
    cout << x << endl;

    // if you edit any of the both it will reflect on both of them
    x = 20;

    cout << a << endl;
    cout << x << endl;
}