#include <iostream>
using namespace std;

int readMonthNumber(int& monthNumber) {
    cout << "Please enter your month number : ";
    cin >> monthNumber;
    return monthNumber;
}

string decideMonthSelected(int monthNumber) {
    if (monthNumber == 1) {
        return "January";
    }
    else if (monthNumber == 2) {
        return "February";
    }
    else if (monthNumber == 3) {
        return "March";
    }
    else if (monthNumber == 4) {
        return "April";
    }
    else if (monthNumber == 5) {
        return "May";
    }
    else if (monthNumber == 6) {
        return "Juin";
    }
    else if (monthNumber == 7) {
        return "July";
    }
    else if (monthNumber == 8) {
        return "August";
    }
    else if (monthNumber == 9) {
        return "September";
    }
    else if (monthNumber == 10) {
        return "October";
    }
    else if (monthNumber == 11) {
        return "November";
    }
    else if (monthNumber == 12) {
        return "December";
    }
    else {
        return "Invalid";
    }
}

void printSelectedMonth(string selectedMonth) {
    if (selectedMonth == "Invalid") {
        cout << "Wrong Month :(" << endl;
    }
    else {
        cout << selectedMonth << endl;
    }
}

int main()
{
    int monthNumber;
    
    printSelectedMonth(decideMonthSelected(readMonthNumber(monthNumber)));
}