#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void readNumbers(int& mark1, int& mark2, int& mark3) {
    cout << "Please enter mark 1 : ";
    cin >> mark1;

    cout << "Please enter mark 2 : ";
    cin >> mark2;

    cout << "Please enter mark 3 : ";
    cin >> mark3;
}

int sumOf3Marks(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}

float calculateAverage(int mark1, int mark2, int mark3) {
    return (float)sumOf3Marks(mark1, mark2, mark3) / 3;
}

enPassFail checkAverage(float average) {
    if (average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void printResult(float average) {
    cout << "Your average is " << average << endl;

    if (checkAverage(average) == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Failed" << endl;
}

int main()
{
    int mark1 = 0, mark2 = 0, mark3 = 0;
    readNumbers(mark1, mark2, mark3);
    printResult(calculateAverage(mark1, mark2, mark3));
}