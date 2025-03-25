#include <iostream>
#include "./DS/clsMyDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> myDynamicArray(5);

    myDynamicArray.SetItem(0, 10);
    myDynamicArray.SetItem(1, 20);
    myDynamicArray.SetItem(2, 30);
    myDynamicArray.SetItem(3, 40);
    myDynamicArray.SetItem(4, 50);

    cout << "\n\nIs Empty : " << myDynamicArray.IsEmpty() << endl;
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items:\n";

    myDynamicArray.PrintList();
}