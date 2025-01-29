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

int reverseNumber(int number) {
    int remainder = 0, reversedDigit = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        reversedDigit = reversedDigit * 10 + remainder;
    }
    return reversedDigit;
}

bool isPalindromeNumber(int number) {
    // stopped here :(
    
    // i comback after few Minutes and i found a solution :)
    // a simple return statement if the given number is equal its reversal then it's Palindrome :)
    return number == reverseNumber(number);
}

void printResult(int number) {
    if (isPalindromeNumber(number))
        cout << "Number " << number << " is Palindrome" << endl;
    else
        cout << "Number " << number << " is not palindrome" << endl;
}

int main() {

    printResult(readPositiveNumber("Please enter a positive number : ");

    return 0;
}