#include <iostream>
#include "./DS/clsMyQueueArr.h"

using namespace std;

int main()
{
    clsMyQueueArr<int> myQueue;

    myQueue.Push(10);
    myQueue.Push(20);
    myQueue.Push(30);
    myQueue.Push(40);
    myQueue.Push(50);

    cout << "\n Queue :\n";
    myQueue.Print();

    cout << "\nQueue Size : " << myQueue.Size() << endl;
    cout << "\nQueue Front : " << myQueue.Front() << endl;
    cout << "\nQueue Back : " << myQueue.Back() << endl;

    myQueue.Pop();

    cout << "\nQueue after Pop : ";
    myQueue.Print();

    // Extension 1
    cout << "\n\nItem(2) : " << myQueue.GetItem(2) << endl;

    // Extension 2
    myQueue.Reverse();
    cout << "\n\nQueue after Reverse :\n";
    myQueue.Print();

    // Extension 3
    myQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after Updating item(2) to 600 :\n";
    myQueue.Print();

    // Extension 4
    myQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after item(2) :\n";
    myQueue.Print();

    // Extension 5
    myQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front :\n";
    myQueue.Print();

    // Extension 6
    myQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back :\n";
    myQueue.Print();

    // Extension 7
    myQueue.Clear();
    cout << "\n\nQueue after Clear :\n";
    myQueue.Print();
}