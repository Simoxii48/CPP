#include <iostream>
using namespace std;

enum enPerfectNotPerfect { Perfect = 1, NotPerfect = 2 };

int readPositiveNumber(string message) {
	int number = 0;
	do {
		cout << message;
		cin >> number;
	} while (number <= 0);

	return number;
}

enPerfectNotPerfect checkIsPerfect(int number) {
	int M = round(number / 2), sum = 0;
	for (int i = 1; i <= M; i++) {
		if (number % i == 0)
			sum += i;
	}

	if (sum == number)
		return enPerfectNotPerfect::Perfect;
	else
		return enPerfectNotPerfect::NotPerfect;
}

void printN_IsPerfectNumber(int N) {
	if (checkIsPerfect(N) == enPerfectNotPerfect::Perfect)
		cout << N << " is perfect." << endl;
	else
		cout << N << " is not perfect." << endl;
}

int main()
{
	printN_IsPerfectNumber(readPositiveNumber("Please enter a positive number : "));
}