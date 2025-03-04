#include <iostream>
using namespace std;

int readTotalSales() {
    int totalsales = 0;
    cout << "Please enter total sales : ";
    cin >> totalsales;
    return totalsales;
}

float getComissionPercentage(float totalSales) {
    if (totalSales >= 1000000)
        return 0.01;
    else if (totalSales >= 500000)
        return 0.02;
    else if (totalSales >= 100000)
        return 0.03;
    else if (totalSales >= 50000)
        return 0.05;
    else
        return 0.00;

}

float calculateTotalComission(float totalSales) {
    return getComissionPercentage(totalSales) * totalSales;
}

int main()
{
    float totalSales = readTotalSales();

    cout << endl << "Comission percentage = " << getComissionPercentage(totalSales);
    cout << endl << "Total comission = " << calculateTotalComission(totalSales);
}