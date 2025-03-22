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
    node *newNode = new node();

    newNode->value = value;
    newNode->next = head;

    head = newNode;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
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

    node *newNode = new node();
    newNode->value = value;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

int main()
{
    node *head = NULL;

    insertAtTheBeg(head, 1);
    insertAtTheBeg(head, 2);
    insertAtTheBeg(head, 3);

    print(head);

    node *n1 = find(head, 2);
    if (n1 != NULL)
        cout << "\nNode found, insert between 2 & 1 new value" << endl;
    else
        cout << "\nNode not found" << endl;

    insertAfter(n1, 9);

    print(head);
}