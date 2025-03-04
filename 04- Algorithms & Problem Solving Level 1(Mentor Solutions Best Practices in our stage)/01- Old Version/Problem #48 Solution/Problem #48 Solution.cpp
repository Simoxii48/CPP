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

float monthlyInstallment(float loanAmount, float howManyMonths) {
    return (float)loanAmount / howManyMonths;
}

int main()
{
    float loanAmount = readPositiveNumber("Please enter the loan amount : ");
    float howManyMonths = readPositiveNumber("Please enter how many months : ");

    cout << "Monthly installment = " << monthlyInstallment(loanAmount, howManyMonths) << endl;
}