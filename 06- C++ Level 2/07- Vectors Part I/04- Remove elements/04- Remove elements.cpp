#include <iostream>
#include <vector>
using namespace std;



int main()
{
	vector<int> vNumbers = {};

	// push elements to vector
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	// check the vector size
	cout << "Stack size = " << vNumbers.size() << endl;

	// pop out the last element
	vNumbers.pop_back();
	
	// check the vector size
	cout << "Stack size = " << vNumbers.size() << endl;

	// check if the vector stack is empty
	if (!vNumbers.empty())
		vNumbers.pop_back();

	if (vNumbers.size() > 0)
		vNumbers.pop_back();


	cout << "Numbers Vector : \n\n";

	// check if the vector is empty
	if (vNumbers.empty()) {
		cout << "Vector stack is empty" << endl;
	}
	// if not to print its elements
	else {
		//ranged loop
		for (int& number : vNumbers) {
			cout << number << endl;
		}
	}

	// check the vector size
	cout << "Stack size = " << vNumbers.size() << endl;

	// clear the vector stack
	for (int& number : vNumbers) {
		vNumbers.pop_back();
	}

	// check the vector size
	cout << "Stack size = " << vNumbers.size() << endl;

	// push 1 element to vector
	vNumbers.push_back(20);

	// check the vector size
	cout << "Stack size = " << vNumbers.size() << endl;

	// clear all the elements in the vector stack at once
	vNumbers.clear();

	// check the vector size
	cout << "Stack size = " << vNumbers.size() << endl;

	cout << endl;
}