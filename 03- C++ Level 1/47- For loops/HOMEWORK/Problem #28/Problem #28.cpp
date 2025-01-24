#include <iostream>
using namespace std;

int readNumber(int& number) {
    cout << "Please enter your number : ";
    cin >> number;
    return number;
}

int sumOddNumbers(int number) {
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

void printSumOddNumber(int sum) {
    cout << sum << endl;
}

int main()
{
    int number;

    printSumOddNumber(sumOddNumbers(readNumber(number)));
    
    return 0;
}