#include <iostream>
#include <string>
using namespace std;

int main()
{
    // define an array of inetegers
    int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
    int searchFor = 44;

    // solution without break statement
    // this is actually working, but it's wrong solution let's break down why

    // in this loop after we find the number we are looking for the loop will continue untill the last index in the array
    // assuming arr[1M], we found the number in index 3, we will iterate 2 999 997 iteration for nothing
    for (int i = 0; i < 10; i++) {
        cout << "We are at iteration " << i + 1 << endl;

        if (arr[i] == searchFor) {
            cout << searchFor << " Found at position [" << i << "]" << endl << endl;
        }
        
    }

    cout << endl << endl;

    // solution using break statement
    // simply when we will find the number we will break the loop immediately
    for (int i = 0; i < 10; i++) {
        // condition to break the loop
        if (arr[i] == searchFor) {
            cout << searchFor << " Found at position [" << i << "]" << endl << endl;
            break;
        }
        
        cout << "We are at iteration " << i + 1 << endl;
        
    }
}