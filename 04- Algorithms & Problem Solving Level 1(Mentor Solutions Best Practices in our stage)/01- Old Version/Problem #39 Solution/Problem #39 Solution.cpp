#include <iostream>
using namespace std;

float readPositiveNumber(string message) {
    float number = 0;

    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

float calculateRemainder(float totalBill, float totalCash) {
    return totalCash - totalBill;
}

int main()
{
    float totalBill = readPositiveNumber("Please enter total bill : ");
    float totalCash = readPositiveNumber("Please enter total cash paid : ");

    cout << endl;
    cout << "Total bill = " << totalBill << endl;
    cout << "Total cash paid = " << totalCash << endl;
    
    cout << "***********************************\n";
    cout << "Remainder = " << calculateRemainder(totalBill, totalCash) << endl;

}