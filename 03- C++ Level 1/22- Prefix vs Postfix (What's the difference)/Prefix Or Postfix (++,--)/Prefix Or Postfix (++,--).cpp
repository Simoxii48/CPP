
#include <iostream>
using namespace std;


int main()
{
    int A = 10;
    int B = A++; // Here when we use the prefix, the variable B will hold the A value 10, then A will increase by 1 to become 11
    
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    B = ++A; // Here when we use the postfix, the variable will hold the Value of B incresed by 1 already
    
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

}