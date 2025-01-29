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
	return number == reverseNumber(number);
}

int main()
{
	cout << reverseNumber(122) << endl;
	cout << 122 << endl;
	if (isPalindromeNumber(readPositiveNumber("Please enter a positive number : ")))
		cout << "\nYes, It is a palindrome number.\n";
	else 
		cout << "\No, It is NOT a palindrome number.\n";
}