#include <iostream>
using namespace std;

float readTheMark(float& mark) {
    cout << "Please enter your mark : ";
    cin >> mark;
    return mark;
}

string passFail(float mark) {
    if (mark >= 50) {
        return "PASS";
    }
    else {
        return "FAIL";
    }
}

void printPassFail(string result) {
    cout << result << endl;
}

int main()
{
    float mark;

    printPassFail(passFail(readTheMark(mark)));

    return 0;
}