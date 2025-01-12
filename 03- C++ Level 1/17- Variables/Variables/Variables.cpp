
#include <iostream>

using namespace std;

int main()
{
	// Declare Variable Syntax
	int myage = 45;

	// Display the variable on screen
	cout << myage << endl;

	// Declare the variable without assign a value
	int myNewAge;

	// Assign the value after 
	myNewAge = 46;

	// Note C++ is CaseSensitive Language which means myAge != myage !!! Carefull

	//Reassign the value for myAge will overwrite the data 
	myage = 26;

	//Display the new value of the variable to confirm
	cout << myage << endl;

	// To make the number looks meaningfull we can Concatenate it with string to display a good message
	cout << "My age is " << myage << " Years old." << endl;

	
	// Declare the other different data types 
	
		// the integer data type
		int myNumber = 52;

		// the float data type
		float myFloatNumber = 12.5;

		// the double data type >> usually used for presised results of complex calculations
		double myDoubleNumber = 2.235645212;

		//the character data type. NOTE Always use the '' For the char not the "", will cause errors
		char myChar = 'A';

		//the string data type
		string myText = "Mohammed";

		// the boolean data type
		bool myBoolean = true;


	// Display all the Variables on the screen using the cout object

		cout << myNumber << endl;
		cout << myFloatNumber << endl;
		cout << myDoubleNumber << endl;
		cout << myChar << endl;
		cout << myText << endl;
		cout << myBoolean << endl;

	// To remember The escape sequence lesson, we want to print on screen ', how it can be done ? let's do it
		char myQuote = '\'';
		cout << myQuote << endl;


	// Declare Many variable with 2 ways

		int x = 4;
		int y = 8;
		int sum = x + y;

		// Print
		cout << sum << endl;

		// NOTE if the variables are from the same type !!!! We can declare them on the same line
		// int a = 5, b = 6, total = a + b;

		// Print
		// cout << total << endl;

	// We can As Well Print the sum for x + y for exemple directly without save the result on another variable IF !!!!
	// We will use it on time, if you will need it more than one time better to calculate it once, save it on a variable
	// and reuse it whenever you need it, not consuming your ressources by calculate it many times, be Clever ;)



	// Important Always Name The variables with a descriptive names, if you need a varible for age don't name it x name it age
	// simply, if you have student grade don't name it y and use comment to remember, no make your varibles names descriptive
	// it will make programming fun and easier for you, Name it studentGrade that simple :) :)

	// Practice with the Professor :

		// This is 2 Different variables, remember case Sensitive :)
		int age = 10, Age = 12;

		// you can not name a variable with a space in between or using special character
			//	int my Age = 12; // Not Allowed
			//	int my - Age = 10; // Not Allowed

		// you can use this approach
		int my_Age = 10;
		int _myAge = 12;

		// you can not start a variable with a number 
			//	string 5name; // Not Allowed

		// you can use this approach
		string name5;

		// you can not use special characters at all
			//	string @name; // Not Allowed
			//	string amount#; // Not Allowed
			//	string sales& Amount; // Not Allowed

		// you can not use reserved keywords
			// int for; // Not Allowed
			// int string;// Not allowed

	// Constant approach will make the variable read only and it's value can not be override
		const float pi = 3.14;

		// It Can not be modified later on
			// pi = 2;


	// HOMEWORK

		// 1-Are the following valid varible names and why
		/*
			Age		Valid
			My-Age	Invalid (Has Special character)
			My_Age	Valid
			_Age	Valid
			2x		Invalid (Start with a number)
			X2		Valid
			My Name	Invalid (Has Space Between)
			MyName	Valid
			#Name	Invalid (Has Special character)
			$Name	Invalid (Has Special character)
			N@me	Invalid (Has Special character)
			int		Invalid (Reserved Keyword)
			float	Invalid (Reserved Keyword)
		*/

		// 2-Write Program using what we learn so far to print the ID card
		string myFullName = "Mohammed Hejjam";
		int myAge = 26;
		string myCity = "Oujda";
		string myCountry = "Morocco";
		float myMonthlySalary = 5000;
		char myGender = 'M';
		bool isMarried = false;

		cout << "\t\t HOMEWORK \n\n";
		
		cout << "1- Write Program using what we learn so far to print the ID card : \n\n";

		cout << "***************************************\n";
		cout << "Name : " << myFullName << "\n";
		cout << "City : " << myCity << "\n";
		cout << "Country : " << myCountry << "\n";
		cout << "Monthly Salary : " << myMonthlySalary << "\n";
		cout << "Yearly Salary : " << myMonthlySalary * 12 << "\n";
		cout << "Gender : " << myGender << "\n";
		cout << "Married : " << isMarried << "\n";
		cout << "***************************************\n\n";

		cout << endl; // Release the Buffer


		// 3-Make a simple calculation
		int a = 20, b = 30, c = 10;

		cout << "2- Make A Simple Calculation Below :\n\n";

		cout << "\n" << a << " +\n";
		cout << b << " +\n";
		cout << c << "\n";
		cout << "______________\n\n";
		cout << "Total = " << a + b + c << "\n\n";


		// 4- Make a simple declaration with math opperation
		int myActualAge = 25;

		cout << "3- Make A Simple Sentence :\n\n";

		cout << "After 5 Years You Will Be " << myActualAge + 5 << " Years old.\n";
}