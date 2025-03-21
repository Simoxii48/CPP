#include <iostream>

using namespace std;

// Creating a node
class node
{
public:
    int value;
    node *next;
};

int main()
{
    node *Head;

    node *Node1 = NULL;
    node *Node2 = NULL;
    node *Node3 = NULL;

    // Allocate 3 nodes in the heap
    Node1 = new node();
    Node2 = new node();
    Node3 = new node();

    // Assign value values
    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    // Connect Nodes
    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL;

    // Print the linked list value
    Head = Node1;
    while (Head != NULL)
    {
        cout << "Head value is : " << Head->value << endl;
        Head = Head->next;
    }

    return 0;
}