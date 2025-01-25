#include <iostream>
using namespace std;

void readNumberAndM(int& number, int& M) {
    cout << "Please enter your number : ";
    cin >> number;

    cout << "Please enter power M : ";
    cin >> M;
}

int calculatePowerM(int number, int M) {
    int i = 1, sum = 1;

    if (M == 0) {
        return 1;
    }
    
    while (i <= M) {
        sum *= number;
        i++;
    }
    return sum;
}

void printPowerM(int M) {
    cout << M << endl;
}

int main()
{
    int number, M;
    readNumberAndM(number, M);

    printPowerM(calculatePowerM(number,M));
}