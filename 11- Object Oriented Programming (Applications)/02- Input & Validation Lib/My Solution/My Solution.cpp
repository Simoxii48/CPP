#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()
{
    cout << clsInputValidate::isNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidate::isNumberBetween(5.5, 1.3, 10.8) << endl;
    cout << clsInputValidate::isDateBetween(clsDate(), clsDate(10, 3, 2025), clsDate(20, 3, 2025)) << endl;
    
}