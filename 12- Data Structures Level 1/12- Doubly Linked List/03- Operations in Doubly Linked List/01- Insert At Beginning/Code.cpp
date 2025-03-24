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

void printNodeDetalis(node *head)
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

void printListDetalis(node *head)
{
    cout << "\n\n";
    while (head != NULL)
    {
        printNodeDetalis(head);
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

    insertAtBeg(head, 5);
    insertAtBeg(head, 4);
    insertAtBeg(head, 3);
    insertAtBeg(head, 2);
    insertAtBeg(head, 1);

    printList(head);
    printListDetalis(head);
}