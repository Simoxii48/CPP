//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);
   
    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.Reverse();

    cout << "\nLinked List Contenet after reverse:\n";
    MydblLinkedList.PrintList();


    system("pause>0");

}