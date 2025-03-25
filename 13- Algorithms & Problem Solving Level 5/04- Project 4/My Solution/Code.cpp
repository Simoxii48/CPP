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

    cout << "\nItem(2) : " << myDynamicArray.GetItem(2) << endl;

    myDynamicArray.Reverse();
    cout << "\nArray Items after reverse :\n";
    myDynamicArray.PrintList();

    myDynamicArray.DeleteItemAt(2);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after Delete item(2) :\n";
    myDynamicArray.PrintList();

    myDynamicArray.DeleteFirstItem();
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after Delete first item :\n";
    myDynamicArray.PrintList();

    myDynamicArray.DeleteLastItem();
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after Delete last item :\n";
    myDynamicArray.PrintList();

    myDynamicArray.Resize(2);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after resize to 2 :\n";
    myDynamicArray.PrintList();

    myDynamicArray.Resize(10);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after resize to 10 :\n";
    myDynamicArray.PrintList();

    myDynamicArray.Clear();
    cout << "\nArray Items after Clear :\n";
    myDynamicArray.PrintList();
}