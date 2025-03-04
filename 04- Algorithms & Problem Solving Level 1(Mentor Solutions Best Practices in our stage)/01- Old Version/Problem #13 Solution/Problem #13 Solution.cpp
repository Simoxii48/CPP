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

int maxOf3Numbers(int num1, int num2, int num3) {
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;
    else
        if (num2 > num3)
            return num2;
        else
            return num3;
}

void printresult(int max) {
    cout << "The max of 3 numbers is : " << max << endl;
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    readNumbers(num1, num2, num3);

    printresult(maxOf3Numbers(num1, num2, num3));
}