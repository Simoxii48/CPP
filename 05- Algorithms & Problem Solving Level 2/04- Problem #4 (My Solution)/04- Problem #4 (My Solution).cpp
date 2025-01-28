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

bool checkIsPerfect(int Number) {
	int sum = 0;
	for (int i = 1; i < Number; i++) {
		if (Number % i == 0)
			sum += i;
	}
	return Number == sum;
}

void printAllPerfectNumbersFrom1ToN(int Number) {
	for (int i = 1; i <= Number; i++) {
		if (checkIsPerfect(i))
			cout << i << endl;
	}
}

int main()
{
	printAllPerfectNumbersFrom1ToN(readPositiveNumber("Please enter positive number : "));

	return 0;
}