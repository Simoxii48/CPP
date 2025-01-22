#include <iostream>
using namespace std;

// procedure to read user input
void readUserGrades(float grades[]) {
    cout << "Please enter grade 1 : ";
    cin >> grades[0];

    cout << "Please enter grade 2 : ";
    cin >> grades[1];

    cout << "Please enter grade 3 : ";
    cin >> grades[2];
}

// function to calculate the average
float calculateAverage(float grades[]) {
    return (grades[0] + grades[1] + grades[2]) / 3;
}

// procedure to print the result
void printAverage(float avg) {
    cout << "\n****************************\n";
    cout << "The average of grades is : " << avg << endl;
}

int main()
{
    // grades array declaration
    float grades[3];

    // read grades from the user
    readUserGrades(grades);

    // calculation the avg and print it on screen
    printAverage(calculateAverage(grades));
    
}