#include <iostream>
#include "./DS/clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> MyDblLinkedList;

    if (MyDblLinkedList.IsEmpty())
        cout << "\n\nYes, List is Empty.\n";
    else
        cout << "\n\nNo, List is not Empty.\n";

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "Linked List Content :\n\n";
    MyDblLinkedList.PrintList();

    cout << "\nDetails Linked List Content :";
    MyDblLinkedList.PrintListDetails();

    clsDblLinkedList<int>::Node *N1 = MyDblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\n\nNode with value 2 is Found :)" << endl;
    else
        cout << "\n\nNode is not Found :(" << endl;

    MyDblLinkedList.InsertAfter(N1, 500);
    cout << "\n\nAfter insert 500 after 2 :\n";

    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAtEnd(700);
    cout << "\n\nAfter insert 700 at end :\n";

    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node *N2 = MyDblLinkedList.Find(4);
    MyDblLinkedList.DeleteNode(N2);

    cout << "\n\nAfter Delete 4 :\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteFirstNode();

    cout << "\n\nAfter Delete First Node :\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteLastNode();

    cout << "\n\nAfter Delete Last Node :\n";
    MyDblLinkedList.PrintList();

    cout << "\nNumber of items in the Linked List = " << MyDblLinkedList.Size() << endl;

    if (MyDblLinkedList.IsEmpty())
        cout << "\n\nYes, List is Empty.\n";
    else
        cout << "\n\nNo, List is not Empty.\n";

    clsDblLinkedList<int>::Node *N = MyDblLinkedList.GetNode(2);
    cout << "\nNode value is : " << N->value << endl;

    cout << "\nItem[2] value is : " << MyDblLinkedList.GetItem(2) << endl;

    MyDblLinkedList.UpdateItem(2, 90);
    cout << "\nAfter updating item[2] :\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAfter(1, 17);
    cout << "\nAfter insert :\n";
    MyDblLinkedList.PrintList();

    cout << "\nLinked List Content after Reverse :\n\n";
    MyDblLinkedList.Reverse();
    MyDblLinkedList.PrintList();

    cout << "\n\nExecuting .Clear() :\n";

    MyDblLinkedList.Clear();
    MyDblLinkedList.PrintList();

    cout << "\nNumber of items in the Linked List = " << MyDblLinkedList.Size() << endl;
}