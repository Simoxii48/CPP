#include <iostream>
#include<string>

using namespace std;


int main()
{
    // Convert string to double, float, int, Include string library first
    string st1 = "43.22";

    // string to double
    double stringToDouble = stod(st1);

    // string to float
    float stringToFloat = stof(st1);

    // string to int
    int stringToInt = stoi(st1);


    // Convert int to string
    int num1 = 20;

    string intToString = to_string(num1);

    // Convert double to string
    double num2 = 33.5;

    string doubleToString = to_string(num2);

    // Convert float to string and int
    float num3 = 55.23;

    // convert float to string
    string floatToString = to_string(num3);

    // convert float to int
    int floatToInt = int(num3); // or C style (int)num3 is the same as well


    return 0;
}