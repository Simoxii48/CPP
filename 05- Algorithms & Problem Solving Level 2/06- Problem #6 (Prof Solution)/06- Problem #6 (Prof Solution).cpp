#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int sumOfDigits(int number) {
    int remainder = 0, sum = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        sum += remainder;
    }
    return sum;
}

int main()
{
    cout << "\nSum of digits = "
        << sumOfDigits(readPositiveNumber("please enter a positive number : "))
        << "\n";

}