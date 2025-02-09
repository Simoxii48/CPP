#pragma once

// we include the iostraem lib because we need its function in our local library
#include<iostream>
using namespace std;

// the first object that will hold some function that are from the same utilities
namespace myTest{

	void printResult() {
		cout << "Test passed successfully :)" << endl;
	}

}

// another object i called readInputs, because all the functions related with the inputs will be listed below to be called from here directly
namespace ReadInputs {
	
	int readNumber() {
		int number = 0;

		cout << "Please enter your number here : ";
		cin >> number;

		return number;
	}

	int readNumberInRange(int from, int to) {
		int number = 0;
		do {
			cout << "Please enter from : " << from << " to : " << to << " here : ";
			cin >> number;
		} while (number<from || number>to);
		return number;
	}
}