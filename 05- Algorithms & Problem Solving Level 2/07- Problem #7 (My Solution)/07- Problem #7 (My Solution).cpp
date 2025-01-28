#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

void reverseDigits(int number) {
    int remainder = 0;
    string reversed = "";
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        reversed += to_string(remainder);
    }
    return stoi(reversed);
}

int main()
{
    int number = readPositiveNumber("Please enter a positive number : ");
    
    cout << "Reverse is = ";
    
    reverseDigits(number);
}