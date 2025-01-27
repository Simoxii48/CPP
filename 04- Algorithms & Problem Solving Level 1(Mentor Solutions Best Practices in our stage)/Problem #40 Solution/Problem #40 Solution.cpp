#include <iostream>
using namespace std;

float readositiveNumber(string message) {
    float number = 0;

    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

float totalBillAfterServiceAndTax(float totalBill) {
    totalBill = totalBill * 1.1; // 1.1 = 10%
    totalBill = totalBill * 1.16; // 1.16 = 16%

    return totalBill;
}

int main()
{
    float totalBill = readositiveNumber("Please enter total bill : ");

    cout << endl;
    cout << "Total bill = " << totalBill << endl;
    cout << "total bill after service fee and sales tax = " << totalBillAfterServiceAndTax(totalBill) << endl;
}