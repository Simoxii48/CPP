#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

int factorial(int n) {
    int f = 1;
    for (int i = n; i >= 1; i--) {
        f *= i;
    }
    return f;
}

int main()
{
    cout << factorial(readPositiveNumber("Please enter a positive number : "));
}