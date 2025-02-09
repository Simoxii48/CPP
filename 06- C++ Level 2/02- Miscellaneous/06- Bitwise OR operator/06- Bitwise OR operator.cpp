#include <iostream>
using namespace std;

int main()
{
    // to revise the logical operator ||

    cout << (1 || 1) << endl; // will print bool value
    
    // the bitwise operator &
    // exemple Bitwise | (12 | 25) ?
    
    // 12 in decimal = 0 0 0 0 1 1 0 0    (Binary)
    // 25 in decimal = 0 0 0 1 1 0 0 1    (Binary)
    
    // Bit operation of 12 and 25
    //      0 0 0 0 1 1 0 0 
    // |    0 0 0 1 1 0 0 1 
    //      ---------------
    //      0 0 0 1 1 1 0 1 =  29 (in decimal)
    
    cout << (25 | 12) << endl; // will print the bitwise and value which is 29
}