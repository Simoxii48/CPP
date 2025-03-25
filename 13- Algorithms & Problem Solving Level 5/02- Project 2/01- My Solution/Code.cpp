#include <iostream>
#include "./DS/clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue<int> myQueue;

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
}