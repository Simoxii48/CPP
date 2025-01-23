#include <iostream>
using namespace std;

void readUserMarks(float& mark1, float& mark2, float& mark3) {
    cout << "Please enter the mark 1 : ";
    cin >> mark1;

    cout << "Please enter the mark 2 : ";
    cin >> mark2;

    cout << "Please enter the mark 3 : ";
    cin >> mark3;
}

float calculateTheAverage(float mark1, float mark2, float mark3) {
    return (mark1 + mark2 + mark3) / 3;
}

string passFail(float avg) {
    if (avg >= 50) {
        return "PASS";
    }
    else {
        return "FAIL";
    }
}

void printPassFail(string result, float avg) {
    cout << avg << endl;
    cout << result << endl;
}

int main()
{
    float mark1, mark2, mark3, avg;
    
    readUserMarks(mark1, mark2, mark3);

    avg = calculateTheAverage(mark1, mark2, mark3);
    string result = passFail(avg);

    printPassFail(result, avg);
}