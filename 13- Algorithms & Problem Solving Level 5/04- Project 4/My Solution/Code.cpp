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

    myDynamicArray.SetItem(0, 10);
    myDynamicArray.SetItem(1, 20);
    myDynamicArray.SetItem(2, 30);
    myDynamicArray.SetItem(3, 40);
    myDynamicArray.SetItem(4, 50);

    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items:\n";
    myDynamicArray.PrintList();

    int index = myDynamicArray.Find(30);
    if (index == -1)
        cout << "\nItem was not found :(" << endl;
    else
        cout << "\n30 is found at index : " << index;

    myDynamicArray.DeleteItem(30);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after deleting 30 :\n";
    myDynamicArray.PrintList();

    myDynamicArray.InsertAt(2, 500);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after inserting 500 after item(2) :\n";
    myDynamicArray.PrintList();

    myDynamicArray.InsertAtBeginning(400);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after inserting 400 at beginning :\n";
    myDynamicArray.PrintList();

    myDynamicArray.InsertBefore(1, 600);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after inserting 600 before item(1) :\n";
    myDynamicArray.PrintList();

    myDynamicArray.InsertAfter(1, 700);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after inserting 700 after item(1) :\n";
    myDynamicArray.PrintList();

    myDynamicArray.InsertAtEnd(800);
    cout << "\nArray Size : " << myDynamicArray.Size() << endl;
    cout << "\nArray Items after inserting 800 at end :\n";
    myDynamicArray.PrintList();

    myDynamicArray.Clear();
    cout << "\nArray Items after Clear :\n";
    myDynamicArray.PrintList();
}