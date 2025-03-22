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
    cout << endl;
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

void DeleteNode(node *&head, int value)
{
    node *current = head, *prev = head;

    if (head == NULL)
        return;

    if (current->value == value)
    {
        head = current->next;
        delete current;
        return;
    }

    while (current != NULL && current->value != value)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return;

    prev->next = current->next;
    delete current;
}

int main()
{
    node *head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);

    print(head);

    DeleteNode(head, 2);
    print(head);
}