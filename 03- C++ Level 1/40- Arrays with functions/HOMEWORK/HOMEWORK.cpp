#include <iostream>
using namespace std;

// procedure to read grades from user
void readGrades(float x[3]) {
    cout << "Please enter grade 1 : ";
    cin >> x[0];

    cout << "Please enter grade 2 : ";
    cin >> x[1];

    cout << "Please enter grade 3 : ";
    cin >> x[2];
}

// function to calculate the average
float calculateAverage(float x[3]) {
    return (x[0] + x[1] + x[2]) / 3;
}

// procedure to print average grade
void printAverageGrade(float grade) {
    cout << "**************************\n";

    cout << "The average grade is : " << grade << endl;
}

int main()
{
    // grades float array declaration
    float grades[3];

    // read grades from the user
    readGrades(grades);

    // calculate the grades, and the returned value is passed to the print procedure
    printAverageGrade(calculateAverage(grades));
    
}