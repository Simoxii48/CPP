#include <iostream>
using namespace std;

float readGrade(float& grade) {
    cout << "Please enter your Grade : ";
    cin >> grade;
    return grade;
}

string decideTheGrade(float grade) {
    if (grade < 100 && grade >=90) {
        return "A";
    }
    else if (grade < 90 && grade >= 80) {
        return "B";
    }
    else if (grade < 80 && grade >= 70) {
        return "C";
    }
    else if (grade < 70 && grade >= 60) {
        return "D";
    }
    else if (grade < 60 && grade >= 50) {
        return "E";
    }
    else {
        return "F";
    }
}

void printGradeMark(string gradeMark) {
    cout << gradeMark << endl;
}

int main()
{
    float grade;

    printGradeMark(decideTheGrade(readGrade(grade)));

    return 0;
}