#include <iostream>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float readNumber(string message) {
    float number = 0;
    
    cout << message;
    cin >> number;

    return number;
}

enOperationType readOpType() {
    char ot = '+';

    cout << "Please enter opperation type ( +, -, *, /) : ";
    cin >> ot;
    
    return (enOperationType)ot;
}

float calculate(float num1, float num2, enOperationType opType) {
    switch (opType) {
    case enOperationType::Add:
        return num1 + num2;
    case enOperationType::Subtract:
        return num1 - num2;
    case enOperationType::Multiply:
        return num1 * num2;
    case enOperationType::Divide:
        return num1 / num2;
    default:
        return num1 + num2;
    }
}

int main()
{
    float number1 = readNumber("Please enter the first number : ");
    float number2 = readNumber("Please enter the second number : ");
    
    enOperationType opType = readOpType();

    cout << endl << "Result = " << calculate(number1, number2, opType) << endl;
}