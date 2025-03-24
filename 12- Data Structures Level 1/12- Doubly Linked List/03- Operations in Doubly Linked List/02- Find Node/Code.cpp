#include <iostream>

using namespace std;

class node
{
public:
    int value;
    node *prev;
    node *next;
};

void insertAtBeg(node *&head, int value)
{
    node *new_node = new node();

    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = head;

    if (head != NULL)
    {
        head->prev = new_node;
    }
    head = new_node;
}

node *find(node *head, int value)
{
    while (head != NULL)
    {
        if (head->value == value)
            return head;
        head = head->next;
    }
    return NULL;
}

void printNodeDetails(node *head)
{
    if (head->prev != NULL)
        cout << head->prev->value;
    else
        cout << "N";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n";
    else
        cout << "N";
}

void printListDetails(node *head)
{
    cout << "\n\n";
    while (head != NULL)
    {
        printNodeDetails(head);
        head = head->next;
    }
}

void printList(node *head)
{
    cout << "NULL <--> ";
    while (head != NULL)
    {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = NULL;

    cout << "Insert New Nodes at the beginning of the Doubly Linked List :\n\n";
    insertAtBeg(head, 1);
    insertAtBeg(head, 2);
    insertAtBeg(head, 3);
    insertAtBeg(head, 4);
    insertAtBeg(head, 5);

    cout << "Print Doubly Linked List In Line :\n";
    printList(head);

    cout << "\n\n";

    cout << "Print the Doubly Linked List In Details :";
    printListDetails(head);

    cout << "\n\n";

    cout << "Search For specific Node :\n\n";
    node *node3 = find(head, 3);

    if (node3 != NULL)
        cout << "Node Found" << endl;
    else
        cout << "Node Not Found" << endl;
}