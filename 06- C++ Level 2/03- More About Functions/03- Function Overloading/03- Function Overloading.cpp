#include <iostream>
using namespace std;


double mySum2DoubleNumbers(double a, double b) {
    return a + b;
}

int mySum2IntegerNumbers(int a, int b) {
    return a + b;
}

int mySum3IntegerNumbers(int a, int b, int c) {
    return a + b + c;
}

int mySum4IntegerNumbers(int a, int b, int c, int d) {
    return a + b + c + d;
}

// function overloading

// we can call the four functions with the same name, and based on how many params and its types we sents the compiler
// will choose the approprite function
double mySum(double a, double b) {
    return a + b;
}

int mySum(int a, int b) {
    return a + b;
}

/*  we can not overload the function with the same number of params even if we give different names
    int mySum(int z, int w) {
    return z + w;
}
*/

int mySum(int a, int b, int c) {
    return a + b + c;
}

int mySum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main()
{
    // four different functions with four differents names
    cout << mySum2IntegerNumbers(10, 20) << endl;
    cout << mySum2DoubleNumbers(10.1, 20.1) << endl;
    cout << mySum3IntegerNumbers(10, 20, 30) << endl;
    cout << mySum4IntegerNumbers(10, 20, 30, 40) << endl;

    cout << endl;

    // four different functions with one name
    cout << mySum(10, 20) << endl;
    cout << mySum(10.1, 20.1) << endl;
    cout << mySum(10, 20, 30) << endl;
    cout << mySum(10, 20, 30, 40) << endl;

    // built in func in c++ overloading
    // cout << max() << endl;
}