#include <iostream>
using namespace std;

float readTotalSales(float& totalSales) {
    cout << "Please enter your total sales : ";
    cin >> totalSales;
    return totalSales;
}

float calculateComission(float totalSales) {
    if (totalSales > 1000000) {
        return totalSales * 0.01;
    }
    else if (totalSales > 500000 && totalSales < 1000000) {
        return totalSales * 0.02;
    }
    else if (totalSales > 100000 && totalSales < 500000) {
        return totalSales * 0.03;
    }
    else if (totalSales > 50000 && totalSales < 100000) {
        return totalSales * 0.05;
    }
    else {
        return 0;
    }
}

void printComission(float comission) {
    cout << comission << endl;
}


int main()
{
    float totalSales;

    printComission(calculateComission(readTotalSales(totalSales)));
}