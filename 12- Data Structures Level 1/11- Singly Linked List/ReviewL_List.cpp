#include <iostream>

using namespace std;

class node
{
public:
    int value;
    node *next;
};

void insertAtBeg(node *&head, int value)
{
    node *new_node = new node();

    new_node->value = value;
    new_node->next = head;

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

void insertAfter(node *prev, int value)
{
    if (prev == NULL)
        return;

    node *new_node = new node();

    new_node->value = value;
    new_node->next = prev->next;
    prev->next = new_node;
}

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
}

void deleteNode(node *&head, int value)
{
    node *prev = head, *current = head;

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

void deleteFisrtNode(node *&head)
{
    if (head == NULL)
        return;

    node *current = head;
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
        return;
    }

    while (current != NULL && current->next != NULL)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return;

    prev->next = NULL;
    delete current;
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

int main()
{
    node *head = NULL;

    cout << "Inserting new nodes at the beginning of the linked list :\n\n";
    insertAtBeg(head, 0);
    print(head);

    insertAtBeg(head, 1);
    print(head);

    insertAtBeg(head, 2);
    print(head);

    insertAtBeg(head, 3);
    print(head);

    insertAtBeg(head, 4);
    print(head);

    insertAtBeg(head, 5);
    print(head);

    cout << "\n\n";

    cout << "Finding specific node within the linked list :\n\n";

    node *node3 = find(head, 3);
    if (node3 != NULL)
        cout << "Node Found" << endl;
    else
        cout << "Node Not Found" << endl;

    cout << "\n\n";

    cout << "Add new node after specific node :\n\n";
    cout << "New Node will be added after the 3rd node if exist :\n";

    insertAfter(node3, 55);
    print(head);

    cout << "\n\n";

    cout << "Add new Node At the End of the Linked List :\n\n";

    insertAtEnd(head, 1);
    print(head);

    insertAtEnd(head, 2);
    print(head);

    insertAtEnd(head, 3);
    print(head);

    insertAtEnd(head, 4);
    print(head);

    insertAtEnd(head, 5);
    print(head);

    cout << "\n\n";

    cout << "Delete specific node from the Linked List :\n\n";
    cout << "Delete the node has 55 value : \n";

    deleteNode(head, 55);
    print(head);

    cout << "\n\n";

    cout << "Delete The First Node Of The Linked List :\n\n";

    deleteFisrtNode(head);
    print(head);

    cout << "\n\n";

    cout << "Delete The Last Node Of The Linked List :\n\n";

    deleteLastNode(head);
    print(head);
}