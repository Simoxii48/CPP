#include <iostream>
using namespace std;

// ternary syntax
// condition ? expression1 : expression2;

int main()
{
    // using if else statement
    int mark = 90;
    string result = "";

    if (mark >= 50)
        result = "PASS";
    else
        result = "Fail";

    cout << result << endl;

    // using ternary operator
    int mark2 = 90;
    string result2 = "";
    
    result2 = (mark2 >= 50) ? "PASS" : "FAIL";

    cout << result2 << endl;

    // nested ternary ops
    (mark2 >= 50) ? "PASS" : (mark2 >= 50) ? "PASS" : "FAIL";
}