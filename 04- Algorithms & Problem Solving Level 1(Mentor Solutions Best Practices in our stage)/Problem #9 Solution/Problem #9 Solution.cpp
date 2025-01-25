#include <iostream>

using namespace std;

void readNumbers(int& num1, int& num2, int& num3) {
    cout << "Please enter number 1 : ";
    cin >> num1;

    cout << "Please enter number 2 : ";
    cin >> num2;

    cout << "Please enter number 3 : ";
    cin >> num3;
}

int sumOf3Numbers(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

void printResult(int total) {
    cout << "The total sum of numbers is : " << total << endl;
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    readNumbers(num1, num2, num3);
    printResult(sumOf3Numbers(num1, num2, num3));
}