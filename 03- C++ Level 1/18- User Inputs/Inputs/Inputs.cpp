
#include <iostream>

using namespace std;

int main()
{
	// Variables Declarations
	char myChar;
	int myNumber;

	// Print a message to the user to understand what to insert
	cout << "Please enter your character : ";
	// Read the inputs from the user
	cin >> myChar;

	// Print a message to the user to understand what to insert
	cout << "Please enter your number : ";
	// Read the inputs from the user
	cin >> myNumber;

	// Print the results on the screen
	cout << "You entered in your character : " << myChar << endl;
	cout << "You entered in your number : " << myNumber << endl << endl << endl;

		//NOTE using cin without a descriptive printed message will be seen as a blank window 

	// HOMEWORK

	// Task 1

		// Variables Declaration
	string fullName, city, country;
	int age;
	float monthlySalary;
	char gender;
	bool isMarried;

	cout << "First HOMEWORK Task About Inserting Your ID Data below :\n\n";

	cout << "\tPlease Insert your Full Name : ";
	cin >> fullName;

	cout << "\tPlease Insert your Age: ";
	cin >> age;

	cout << "\tPlease Insert your City: ";
	cin >> city;

	cout << "\tPlease Insert your Country: ";
	cin >> country;

	cout << "\tPlease Insert your Monthly Salary: ";
	cin >> monthlySalary;

	cout << "\tPlease Insert your Gender: ";
	cin >> gender;

	cout << "\tPlease tell me are you married ? ";
	cin >> isMarried;
	
	
	// Printing inserted data on screen
	cout << endl << endl;
	cout << "\t******************************\n";
	cout << "\tName: " << fullName << ".\n";
	cout << "\tAge: " << age << " Years.\n";
	cout << "\tCity: " << city << ".\n";
	cout << "\tCountry: " << country << ".\n";
	cout << "\tMonthly Salary: " << monthlySalary << "\n";
	cout << "\tYearly Salary: " << monthlySalary * 12 << "\n";
	cout << "\tGender: " << gender << "\n";
	cout << "\tMarried: " << isMarried << "\n";
	cout << "\t******************************\n\n\n";


	// Task 2

	int num1, num2, num3;

	cout << "Second HOMEWORK Task About Making Simple Addition Opperation below: \n\n";

	//Print descriptive message on screen
	cout << "\tPlease enter the first number: ";
	cin >> num1;
	
	cout << "\tPlease enter the second number: ";
	cin >> num2;
	
	cout << "\tPlease enter the last number: ";
	cin >> num3;

	cout << "\n\n" <<"\t"<< num1 << " +\n";
	cout << "\t"<<num2 << " +\n";
	cout << "\t"<<num3 << endl << endl;
	cout << "\t-----------------\n\n";
	cout << "\tTotal = " << num1 + num2 + num3 << endl << endl;

	cout << "Last HOMEWORK Task :\n\n";
	int yourAgeNow;

	cout << "\tPlease Insert your age now: ";
	cin >> yourAgeNow;

	cout << "\n\n\tAfter 5 Years you will be " << yourAgeNow + 5 << " Years old." << endl;
}