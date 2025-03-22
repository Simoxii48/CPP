#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node *next;
};

void insertAtEnd(node *&head, int value)
{
    node *new_node = new node();

    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    node *last_node = head;
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }

    last_node->next = new_node;
    return;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

void deleteFirstNode(node *&head)
{
    node *current = head;

    if (head == NULL)
        return;

    head = current->next;
    delete current;
}

void deleteLastNode(node *&head)
{
    node *prev = head, *current = head;
    if (head == NULL)
        return;

    if (current->next == NULL)
    {
        head = NULL;
        delete current;
        return;
    }

    while (current != NULL && current->next != NULL)
    {
        prev = current;
        current = current->next;
    }

    prev->next=NULL;
    delete current;
}

int main()
{
    node *head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    print(head);

    cout << endl;

    deleteFirstNode(head);
    print(head);

    cout << endl;

    deleteLastNode(head);
    print(head);
}