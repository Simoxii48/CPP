#include <iostream>
using namespace std;

// procedure to read inputs from user
void readInputs(int& num, int& M) {
    cout << "Please enter your number : ";
    cin >> num;

    cout << "Please enter your power M : ";
    cin >> M;
}

// function to read the number^M
int calculateNumPowerM(int num, int M) {
    return pow(num, M);
}

// procedure to print the result
void printResult(int result) {
    cout << result << endl;
}

int main()
{
    int num, M;
    readInputs(num, M);

    printResult(calculateNumPowerM(num, M));

    return 0;
}