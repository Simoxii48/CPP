#include <iostream>
using namespace std;

void readNumbers(int& num1, int& num2) {
    cout << "Please enter your number 1 : ";
    cin >> num1;

    cout << "Please enter your number 2 : ";
    cin >> num2;
}

int maxOf2Numbers(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void printResult(int max) {
    cout << "The max number is : " << max << endl;
}

int main()
{
    int num1 = 0, num2 = 0;
    readNumbers(num1, num2);

    printResult(maxOf2Numbers(num1, num2));
}