#include <iostream>

using namespace std;

class node
{
public:
    int value;
    node *next;
};

void insertAtTheBeg(node *&head, int value)
{
    node *new_node = new node();

    new_node->value = value;
    new_node->next = head;

    head = new_node;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
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

void insertAfter(node *prev_node, int value)
{
    if (prev_node == NULL)
    {
        cout << "Previous node cannot be null" << endl;
        return;
    }

    node *new_node = new node();

    new_node->value = value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void insertAtEnd(node *&head, int value)
{
    // create the last node to be inserted
    node *new_node = new node();

    // assign the value & null pointer to next value make it the last node
    new_node->value = value;
    new_node->next = NULL;

    // check if the head was empty
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    // assuming the last node is the head
    node *last_node = head;

    // iterating to the last node that points to null
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }

    // make it point to the new created node to be the last
    last_node->next = new_node;
    return;
}

int main()
{
    node *head = NULL;

    insertAtTheBeg(head, 1);
    insertAtTheBeg(head, 2);
    insertAtTheBeg(head, 3);

    print(head);

    node *node2 = find(head, 2);

    if (node2 != NULL)
        cout << "\nNode 2 found\n"
             << endl;
    else
        cout << "\nNode 2 not found\n"
             << endl;

    insertAfter(node2, 100);
    print(head);

    cout << endl;

    node *head2 = NULL;

    insertAtEnd(head2, 9);
    insertAtEnd(head2, 10);

    print(head2);
}