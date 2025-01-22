#include <iostream>
using namespace std;

    // HOMEWORK solved my way
void readNumbersToSwap(int& a, int& b) {
    cout << "Please enter number 1 : ";
    cin >> a;

    cout << "Please enter number 2 : ";
    cin >> b;
}

void swapNumbers(int& a, int& b) {
    // to demonstrate that the parameters sent to the function has the same memory location for the variables in the main
    //  cout << &a << endl;
    //  cout << &b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Function swap invoked\n\n";
}

void printNumbers(int a, int b) {
    cout << "Number 1 is : " << a << endl;
    cout << "Number 2 is : " << b << endl;
    cout << endl;
}


int main()
{
    int a , b;

    readNumbersToSwap(a, b);
    
    // to check what is the memory location that holds the variables
    //cout << &a << endl;
    //cout << &b << endl;

    printNumbers(a, b);

    swapNumbers(a, b);

    printNumbers(a, b);

    return 0;
}