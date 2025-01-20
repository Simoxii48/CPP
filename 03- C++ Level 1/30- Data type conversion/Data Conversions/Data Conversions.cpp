#include <iostream>
#include<string>
using namespace std;

int main()
{
    // Casting (data type conversion) always use explicit conversions
    // NOTE : When you convert from higher to lower data type ranges you will lose data be carefull, But at the opposite you will lose nothing you will have more zeros :)
    
    // Exemple from Double to Int
    int num1;
    double num2 = 10.99;

    // Implicit conversion from double to Int, Here the compiler will caste the number depends on the compiler version maybe to use ceil/floor Or Round functions
    num1 = num2;

    // Explicit conversion using the C style
    num1 = (int)num2;

    // Explicit conversion using int() function
    num1 = int(num2);

    cout << num1 << endl;

    // String to int,float,double, We need the string library
    string str = "123.456";

    // String to int
    int stringToInt = stoi(str);

    // String to Float
    float stringToFloat = stof(str);

    // String to Double
    double stringToDouble = stod(str);

    cout << "string to int : " << stringToInt << endl;
    cout << "string to float : " << stringToFloat << endl;
    cout << "string to double : " << stringToDouble << endl;


    // Convert numbers to string
    int num3 = 123;
    double num4 = 123.456;

    string str1, str2;

    str1 = to_string(num3);
    str2 = to_string(num4);

    cout << num3 << endl;
    cout << num4 << endl;

    return 0;
}