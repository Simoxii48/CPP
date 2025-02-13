#include <iostream>
#include <vector>
using namespace std;

// Exception Handling
// try to use the exception handling when it's really necessary
// it's causing slow in the program

// anything is causing you a problem in the runtime try to solve it any other way if possible


int main()
{
	vector<int> num{ 1,2,3,4,5 };

	try {
		cout << num.at(5);
	}
	catch (...) {
		cout << "Out of bound\n";
	}
}