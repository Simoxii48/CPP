#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()
{
    cout << clsInputValidate::isNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidate::isNumberBetween(5.5, 1.3, 10.8) << endl;
    cout << clsInputValidate::isDateBetween(clsDate(), clsDate(10, 3, 2025), clsDate(20, 3, 2025)) << endl;
    cout << clsInputValidate::isDateBetween(clsDate(), clsDate(20, 3, 2025), clsDate(10, 3, 2025)) << endl;

    cout << "\nPlease enter a number : ";
    int x = clsInputValidate::readIntNumber("Invalid number, Enter again : ");
    cout << "x = " << x << endl;

    cout << "\nPlease enter a number between 1 and 5 : ";
    int y = clsInputValidate::readIntNumberBetween(1, 5, "Number is not within range, Enter again : ");
    cout << "y = " << y << endl;

    cout << "\nPlease enter a number : ";
    double a = clsInputValidate::readDblNumber("Invalid number, Enter again : ");
    cout << "a = " << a << endl;

    cout << "\nPlease enter a number between 1 and 5 : ";
    double b = clsInputValidate::readDblNumberBetween(1, 5, "Number is not within range, Enter again : ");
    cout << "b = " << b << endl;

    cout << clsInputValidate::isValideDate(clsDate(35, 12, 2025)) << endl;
}