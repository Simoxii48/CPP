#include <iostream>
using namespace std;



int main()
{
    int arr[4] = { 10,20,30,40 };
    int* ptr;
    ptr = arr;

    // console the first index address

    // ptr is equivalent to &arr[0];
    // ptr + 1 is equivalent to to &arr[1];
    // ptr + 2 is equivalent to to &arr[2];
    // ptr + 3 is equivalent to to &arr[3];

    cout << "Addresses are :\n";

    cout << ptr << endl;
    cout << ptr + 1 << endl;    
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;

    cout << "\nValues are :\n";

    cout << *(ptr) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;

    // using for loop
    for (int i = 0; i < 4; i++) {
        cout << "Address index [" << i << "] : ";
        cout << ptr + i << endl;
        cout << "Address value = ";
        cout << *(ptr + i) << endl;
    }
}