#include <iostream>
#include "./DS/clsMyStackArr.h"

using namespace std;

int main()
{
    clsMyStackArr<int> myStack;

    myStack.Push(10);
    myStack.Push(20);
    myStack.Push(30);
    myStack.Push(40);
    myStack.Push(50);

    cout << "\nMy Stack :\n";
    myStack.Print();

    cout << "\nStack Size   : " << myStack.Size() << endl;
    cout << "\nStack Top    : " << myStack.Top() << endl;
    cout << "\nStack Bottom : " << myStack.Bottom() << endl;

    myStack.Pop();
    cout << "\nStack after Pop :\n";
    myStack.Print();

    // Extension 1
    cout << "\nItem(2) : " << myStack.GetItem(2) << endl;

    // Extension 2
    myStack.Reverse();
    cout << "\nMy Stack after Reverse :\n";
    myStack.Print();

    // Extension 3
    myStack.UpdateItem(2, 600);
    cout << "\nMy Stack after Updating item(2) to 600 :\n";
    myStack.Print();

    // Extension 4
    myStack.InsertAfter(2, 800);
    cout << "\nMy Stack after Inserting 800 after item(2) :\n";
    myStack.Print();

    // Extension 5
    myStack.InsertAtFront(1000);
    cout << "\nMy Stack after Inserting 1000 at front :\n";
    myStack.Print();

    // Extension 6
    myStack.InsertAtBack(2000);
    cout << "\nMy Stack after Inserting 2000 at back :\n";
    myStack.Print();

    // Extension 7
    myStack.Clear();
    cout << "\nMy Stack after clear :\n";
    myStack.Print();
}