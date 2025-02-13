#include <iostream>
#include <string>
using namespace std;

// Pointers don't take space in the memory because they are only addresses

// IMPORTANT always when you use the new key word you must use delete keyword when you done with new created variable

int main()
{
	// if we declare an int and float we already hold their memory and they will be destroyed untill the main finish

	// declare an int pointer
	int* ptrX;

	// declare a float pointer
	float* ptrY;

	// dynamically allocate memory
	ptrX = new int;
	ptrY = new float;

	// assigning value to the memory
	*ptrX = 45;
	*ptrY = 58.35f;

	cout << *ptrX << endl;
	cout << *ptrY << endl;

	// deallocate the memory
	delete ptrX;
	delete ptrY;

	// imagine here after releasing the memory the program needs to run for 20 Hours,
	// why we are still holding the memory for those variable after we finish from them ?!!
	// that's why here in our program now we release them to use the memory in something else
	// and always the memory remains fresh and fast


	// i will do it again myself now
	char registerUser = 'n';

	// ask the user if he wants to register
	cout << "Do you want to register (y/n) : ";
	cin >> registerUser;

	if (registerUser == 'y' || registerUser == 'Y') {
		// if we get here it means he insert yes

		// declare a salary pointer
		float* ptrSalary;

		// declare a name pointer
		string* ptrName;

		// declaring new variables
		ptrSalary = new float;
		ptrName = new string;

		cout << "Please enter your salary : ";
		cin >> *ptrSalary;

		cout << "Please enter your name : ";
		cin.ignore(1, '\n');
		getline(cin, *ptrName);

		cout << "Your name is : " << *ptrName << endl;
		cout << "Your salary is : " << *ptrSalary << endl;

		// memory releasing
		delete ptrName;
		delete ptrSalary;
	}
	else {
		cout << "Wish to see you again :)" << endl;
	}

}