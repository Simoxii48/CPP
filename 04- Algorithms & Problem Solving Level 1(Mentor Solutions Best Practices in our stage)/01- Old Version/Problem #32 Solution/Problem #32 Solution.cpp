#include <iostream>
using namespace std;

int readNumber() {
    int num = 0;

    cout << "Please enter a number : ";
    cin >> num;

    return num;
}

int readPower() {
    int p = 0;

    cout << "Please enter the power : ";
    cin >> p;

    return p;
}

int powerOfM(int num, int m) {
    if (m == 0)
        return 1;
    int p = 1;
    
    for (int i = 1; i <= m; i++) {
        p *= num;
    }
    return p;
}

int main()
{
    cout << endl << "Result = " << powerOfM(readNumber(), readPower());
}