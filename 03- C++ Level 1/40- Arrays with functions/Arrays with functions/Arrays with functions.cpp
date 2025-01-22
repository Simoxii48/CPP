#include <iostream>
using namespace std;

// the array by default is sent by Ref & no need to send with & ref
void readArrayData(int x[3]) {
    cout << "Please enter number 1 : ";
    cin >> x[0];

    cout << "Please enter number 2 : ";
    cin >> x[1];

    cout << "Please enter number 3 : ";
    cin >> x[2];
}

void printArrayData(int x[3]) {
    cout << "*********************\n";

    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
}

int main()
{
    int x[3];
    readArrayData(x);
    printArrayData(x);
    
    return 0;
}