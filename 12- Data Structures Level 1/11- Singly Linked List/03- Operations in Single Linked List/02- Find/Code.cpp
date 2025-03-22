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

void print(node *head)
{
    if (head != NULL)
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

int main()
{
    node *head = NULL;

    insertAtBeg(head, 1);
    insertAtBeg(head, 2);
    insertAtBeg(head, 3);
    insertAtBeg(head, 4);
    insertAtBeg(head, 5);

    print(head);

    node *n1 = find(head, 4);

    if (n1 != NULL)
        cout << "Node Found :)" << endl;
    else
        cout << "Node Not Found :(" << endl;

    return 0;
}