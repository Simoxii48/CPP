
#include <iostream>
using namespace std;

int main()
{
    // Problem #31 Enter a number then calculate the power values
    int number;

    cout << "Please enter your number : ";
    cin >> number;

    cout << round(pow(number, 2)) << endl;
    cout << round(pow(number, 3)) << endl;
    cout << round(pow(number, 4)) << endl;
    
}