#include <iostream>
using namespace std;

// using call by Ref&
void swap(int& n1, int& n2) {
    int temp = 0;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

// using pointers
void swap(int* n1, int* n2) {
    int temp = 0;
    // we can here in the runtime make the pointer point to anything else in the memory

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int calculateSum(int* num1, int* num2) {
    return *num1 + *num2;
}

int main()
{
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // swap function is accepting pointers as params, so we need to send addresses
    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "Sum of " << a << " + " << b << " = " << calculateSum(&a, &b) << endl;
}