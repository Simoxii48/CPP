#include <iostream>

using namespace std;

// procedure to swap the numbers
// i used parameters by reference &
void swapNumbers(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// procedure to print the numbers
void printNumbers(int a, int b) {
    cout << a << endl;
    cout << b << endl;
}

// read numbers from user
void readNumbers(int &a, int &b) {

    cout << "Please enter number 1 : ";
    cin >> a;

    cout << "Please enter number 2 : ";
    cin >> b;
}

int main()
{
    int a, b;
    readNumbers(a, b);
    
    printNumbers(a, b);

    swapNumbers(a, b);

    printNumbers(a, b);
}