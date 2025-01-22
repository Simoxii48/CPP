#include <iostream>
using namespace std;


int main()
{
    // array declaration
    int x[5] = { 22,18,2,55,520 };

    cout << x[0] << endl; // prints 22
    cout << x[1] << endl; // prints 18
    cout << x[2] << endl; // prints 2
    cout << x[3] << endl; // print 55
    cout << x[4] << endl; // prints 520

    // we can do maths as well
    cout << x[0] + x[4] << endl;

    // we can declare an array without assigning value
    int y[5];

    // we can assign values later
    y[0] = 10;
    y[1] = 20;

    cout << y[0] + y[1] << endl;

    return 0;
}