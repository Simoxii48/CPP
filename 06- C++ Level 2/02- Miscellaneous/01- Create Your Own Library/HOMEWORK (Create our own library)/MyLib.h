#pragma once
#include <iostream>
using namespace std;

namespace PrintTable {

    // void procedure to print the table header the user wants to print with a range
	void printHeader(int from, int to) {
        cout << "\n\n\t\t\t Multiplication Table from "<<from<<" to " << to << "\n\n";
        cout << "\t";

        for (int i = from; i <= to; i++) {
            cout << i << "\t";
        }
        cout << "\n__________________________________________________________________________________\n";
    
	}

    // string function to seperate the numbers
    string columnSeperator(int i) {
        if (i < 10)
            return "   |";
        else
            return "  |";
    }

    // void procedure to print the table with the wanted range
    void printMultiplicationTable(int from,int to) {
        
        printHeader(from,to);

        for (int i = from; i <= to; i++) {
            cout << " " << i << columnSeperator(i) << "\t";
            for (int j = from; j <= to; j++) {
                cout << i * j << "\t";
            }
            cout << endl;
        }
    }
}

namespace ReadUserInput {

    // simple read function with customizable message
    int readNumber(string message) {
        int number = 0;
        cout << message;
        cin >> number;
        return number;
    }
}