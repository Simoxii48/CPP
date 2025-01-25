#include <iostream>
#include <string>
using namespace std;

int readNumber() {
    int number = 0;
    
    cout << "Please enter your number : ";
    cin >> number;
    
    return number;
}

float calculateHalfNumber(int num) {
    return (float)num / 2;
}

void printResult(int num) {
    string result = "Half of " + to_string(num) + " is " + to_string(calculateHalfNumber(num));
    cout << endl << result << endl;
}

int main()
{
    printResult(readNumber());
}