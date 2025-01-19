
#include <iostream>
using namespace std;

int main()
{
    // Problem #32 Enter a number then calculate the power value M
    int number,M;

    cout << "Please enter your number : ";
    cin >> number;

    cout << "Please enter the power M : ";
    cin >> M;

    cout << round(pow(number, M)) << endl;

}