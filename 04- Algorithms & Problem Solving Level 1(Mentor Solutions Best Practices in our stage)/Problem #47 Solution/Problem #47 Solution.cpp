#include <iostream>
using namespace std;

float readPositiveNumber(string message) {
    int number = 0;

    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

float totalMonths(float loanAmount, float monthlyInstallment) {
    return (float)loanAmount / monthlyInstallment;
}

int main()
{
    float loanAmount = readPositiveNumber("Please enter loan amount : ");
    float monthlyInstallment = readPositiveNumber("Please enter monthly installment : ");

    cout << "Total months to pay = " << totalMonths(loanAmount, monthlyInstallment) << endl;
}