#include <iostream>

using namespace std;

class node
{
public:
    int value;
    node *next;
    node *prev;
};

int main()
{
    node *head;

    // Allocate 3 nodes in the heap
    node *node1 = new node();
    node *node2 = new node();
    node *node3 = new node();

    // Assign value values
    node1->value = 1;
    node2->value = 2;
    node3->value = 3;

    // Connect nodes

    // node 1
    node1->prev = NULL;
    node1->next = node2;

    // node 2
    node2->prev = node1;
    node2->next = node3;

    // node 3
    node3->prev = node2;
    node3->next = NULL;

    // Assign the first node to the Head
    head = node1;

    // Print doubly linked list values
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}