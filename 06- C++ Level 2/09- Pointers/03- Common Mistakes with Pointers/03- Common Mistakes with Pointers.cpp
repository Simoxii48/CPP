#include <iostream>
using namespace std;


int main()
{
    int x, * p;

    // wrong ! p is an address but x is not
    p = x;

    // correct ! p is an address and so is &x
    p = &x;

    // wrong ! &x is an address and *p is the value stored in &x
    *p = &x;

    // correct ! *p is the value and so x
    *p = x;
}