#include <iostream>
#include <string>

using namespace std;

// ask the user to enter his name, i will make a string function, i will do comment breakdown to explain

// string function, so it will return a string
string readMyName() {
	// string variable to store the name
	string name;

	// print a message to the user to know what to input
	cout << "Please enter your name : ";
	// i used the getline function because the name may have spaces
	getline(cin, name);

	// return the entered value
	return name;
}

void printMyName(string name) {
	// only print what we sent as parameter
	cout << name << endl;
}

int main()
{
	// call the function & procedure
	printMyName(readMyName());

	return 0;
}