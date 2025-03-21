#include <iostream>

using namespace std;

template<class T>

class Calculator
{
private:
    T _number1, _number2;

public:
    Calculator(T n1, T n2)
    {
        _number1 = n1;
        _number2 = n2;
    }

    void PrintResult()
    {
        cout << "Numbers : " << _number1 << " and " << _number2 << "." << endl;
        cout << _number1 << " + " << _number2 << " = " << Add() << endl;
        cout << _number1 << " - " << _number2 << " = " << Subtract() << endl;
        cout << _number1 << " * " << _number2 << " = " << Multiply() << endl;
        cout << _number1 << " / " << _number2 << " = " << Divide() << endl;
    }

    T Add()
    {
        return _number1 + _number2;
    }

    T Subtract()
    {
        return _number1 - _number2;
    }

    T Divide()
    {
        return _number1 / _number2;
    }

    T Multiply()
    {
        return _number1 * _number2;
    }
};

int main()
{
    Calculator<int> intCalculator(10, 15);
    Calculator<float> fltCalculator(2.4, 1.2);

    cout << "Int Results : " << endl;
    intCalculator.PrintResult();

    cout << endl;

    cout << "Float Resuts :" << endl;
    fltCalculator.PrintResult();
}