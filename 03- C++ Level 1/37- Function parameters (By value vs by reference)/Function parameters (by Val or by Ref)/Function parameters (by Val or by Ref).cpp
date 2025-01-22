#include <iostream>
using namespace std;

// this procedure is recieving an int parameter by Val, so it will make a copy edit the copy not the original parameter
void myFunction(int num1) {
    num1 = 7000;

    cout << "Number inside myFunction become : " << num1 << endl;
}

// this procedure is recieving an int parameter by Ref, so it will straight away edit the original parameter
// & in C++ called the Reference, it has the Hex Address of the variable sent, which means the same variable will be changed
void myFunction2(int& num2) {
    num2 = 5000;

    cout << "Number inside myFunction become : " << num2 << endl;
}


int main()
{
    int
        num1 = 1000,
        num2 = 2000;

    myFunction(num1);

    cout << "Number after calling myFunction become : " << num1 << endl;

    myFunction2(num2);

    cout << "Number after calling myFunction become : " << num2 << endl;

    // so let's print the variable with the &
    cout << num1 << endl;
    cout << &num1 << endl;

}