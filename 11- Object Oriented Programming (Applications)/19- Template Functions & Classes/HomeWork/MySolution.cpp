#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()
{
    cout << endl << "Is Number Between Result : " <<
        clsInputValidate::IsNumberBetween(15, 10, 20);
    
    cout << endl << "Read number of int type : ";
    clsInputValidate::ReadNumber<int>();

    cout << endl << "Read Number Between double type : ";
    clsInputValidate::ReadNumberBetween<double>(1, 9);
}