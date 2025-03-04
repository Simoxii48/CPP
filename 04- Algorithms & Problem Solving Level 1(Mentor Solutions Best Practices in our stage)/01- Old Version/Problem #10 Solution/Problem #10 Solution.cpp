#include <iostream>
using namespace std;

void readNumbers(int& mark1, int& mark2, int& mark3) {
    cout << "please enter number 1 : ";
    cin >> mark1;

    cout << "please enter number 2 : ";
    cin >> mark2;

    cout << "please enter number 3 : ";
    cin >> mark3;
}

int sumOf3Numbers(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}

float calculateAverage(int mark1, int mark2, int mark3) {
    return (float)sumOf3Numbers(mark1, mark2, mark3) / 3;
}

void printResult(float average) {
    cout << "The average is : " << average << endl;
}

int main()
{
    int mark1 = 0, mark2 = 0, mark3 = 0;
    readNumbers(mark1, mark2, mark3);
    printResult(calculateAverage(mark1, mark2, mark3));
    
}