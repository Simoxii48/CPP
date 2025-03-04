#include <iostream>
using namespace std;

void readNumbers(int& num1, int& num2) {
    cout << "Please enter number 1 : ";
    cin >> num1;

    cout << "Please enter number 2 : ";
    cin >> num2;
}

void swap(int& num1, int& num2) {
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void printNumbers(int num1, int num2) {
    cout << "Number 1 is : " << num1 << endl;
    cout << "Number 2 is : " << num2 << endl;
}

int main()
{
    int num1 = 0, num2 = 0;
    readNumbers(num1, num2);
    printNumbers(num1, num2);
    swap(num1, num2);
    printNumbers(num1, num2);
}