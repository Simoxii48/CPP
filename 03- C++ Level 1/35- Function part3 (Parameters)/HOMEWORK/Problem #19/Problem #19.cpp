#include <iostream>
using namespace std;

// float function to return the entered value
float readD(float& d) {
	cout << "Enter D : ";
	cin >> d;
	return d;
}

// float function to calculate the circle area
float calculateCircleArea(float d) {
	const float pi = 3.14;
	float area = (pi * pow(d, 2)) / 4;
	return area;
}

// procedure tp print result 
void printCircleArea(float area) {
	cout << "Circle area is : " << area << endl;
}

int main()
{
	float d;

	// Break down for the following syntax
	// Function get invoked from right to left
	// 1 readD function invoked to read d from user and save it in the d variable
	// 2 calculate the circle area using the entered number saved in d
	// 3 print the area that the function calculate 
	printCircleArea(calculateCircleArea(readD(d)));
	
}