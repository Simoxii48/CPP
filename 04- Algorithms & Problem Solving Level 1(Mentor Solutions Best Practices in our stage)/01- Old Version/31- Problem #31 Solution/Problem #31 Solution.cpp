#include <iostream>
using namespace std;

int readNumber() {
    int number = 0;
    cout << "Please enter a number : ";
    cin >> number;
    return number;
}

void powerOf2_3_4(int num) {
    int
        a = num * num,
        b = num * num * num,
        c = num * num * num * num;
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    powerOf2_3_4(readNumber());
}