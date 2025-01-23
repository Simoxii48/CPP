#include <iostream>
using namespace std;

int readDayNumber(int& dayNumber) {
    cout << "Please enter the day number : ";
    cin >> dayNumber;

    return dayNumber;
}

string decidePresentDay(int dayNumber) {
    if (dayNumber == 1) {
        return "Sunday";
    }
    else if (dayNumber == 2) {
        return "Monday";
    }
    else if (dayNumber == 3) {
        return "Tuesday";
    }
    else if (dayNumber == 4) {
        return "Wednesday";
    }
    else if (dayNumber == 5) {
        return "Thursday";
    }
    else if (dayNumber == 6) {
        return "Friday";
    }
    else if (dayNumber == 7) {
        return "Saturday";
    }
    else {
        return "Invalid input";
    }
}

void printPresentDay(string presentDay) {
    if (presentDay == "Invalid input") {
        cout << "Wrong Day :(" << endl;
    }
    else {
        cout << "It's " << presentDay << endl;
    }
}

int main()
{
    int dayNumber;
    
    printPresentDay(decidePresentDay(readDayNumber(dayNumber)));
}