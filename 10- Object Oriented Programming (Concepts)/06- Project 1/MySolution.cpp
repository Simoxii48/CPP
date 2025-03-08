#include <iostream>
using namespace std;

class clsCalculator
{
private:
    int _Number;
    int _Result;
    int _NewResult;

    enum enOpperation
    {
        add = 1,
        mul = 2,
        div = 3,
        sub = 4
    };

    enOpperation switchResultValue()
    {
        if (_NewResult >= _Result)
            return enOpperation::add;
        else if (_NewResult < _Result)
            return enOpperation::sub;
        else if (_Result * _Number)
            return enOpperation::mul;
        else
            return enOpperation::div;
    }

    string opperationMade()
    {
        string arrOpps[4] = {"Adding ", "Multiplying ", "Dividing ", "Subtracting "};
        return arrOpps[(int)switchResultValue() - 1];
    }

public:
    void Add(int Number)
    {
        _Number = Number;
        _Result = _Result + Number;
    }

    void Multiply(int Number)
    {
        _Number = Number;
        _Result = _Result * Number;
    }

    void Divide(int Number)
    {
        if (Number == 0)
            Number = 1;
        _Number = Number;
        _Result = (int)_Result / Number;
    }

    void Subtract(int Number)
    {
        _Number = Number;
        _Result = _Result - Number;
    }

    void Clear()
    {
        _Result = 0;
    }

    void PrintResult()
    {
        cout << "Result after " << opperationMade() << _Number << " is : " << _Result << endl;
    }
};

int main()
{
    // I did not solve it

    clsCalculator calculator;

    calculator.Clear();

    calculator.Add(10);
    calculator.PrintResult();

    calculator.Add(100);
    calculator.PrintResult();

    calculator.Subtract(20);
    calculator.PrintResult();

    calculator.Divide(0);
    calculator.PrintResult();

    calculator.Divide(2);
    calculator.PrintResult();

    calculator.Multiply(3);
    calculator.PrintResult();

    calculator.Clear();
    calculator.PrintResult();

    return 0;
}