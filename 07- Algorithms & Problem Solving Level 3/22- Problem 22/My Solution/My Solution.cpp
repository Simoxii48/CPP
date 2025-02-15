#include <iostream>
using namespace std;

int fibNum = 0, prev1 = 1, prev2 = 0;
int i = 1;

void printFubonacciUsingRecursion(int length) {
	
	i++;
	fibNum = prev1 + prev2;
	cout << fibNum << "	";
	prev2 = prev1;
	prev1 = fibNum;

	if(i < length)
		printFubonacciUsingRecursion(length);
}

int main()
{
	cout << "1	";
	printFubonacciUsingRecursion(10);
}