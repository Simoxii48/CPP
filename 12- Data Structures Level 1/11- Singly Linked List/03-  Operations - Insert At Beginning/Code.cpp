#include <iostream>

using namespace std;

// Create node
class node
{
public:
    int value;
    node *next;
};

void insertAtBeginning(node *&head, int value)
{
    // Allocate memory to a node
    node *newNode = new node();

    // Insert the data
    newNode->value = value;
    newNode->next = head;

    // Move head to new node
    head = newNode;
}

void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;

    insertAtBeginning(head, 1);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 4);
    insertAtBeginning(head, 5);

    printList(head);

    return 0;
}