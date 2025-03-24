#pragma once

#include <iostream>
using namespace std;

template <class T>

class clsDblLinkedList
{

public:
    class Node
    {
    public:
        T value;
        Node *prev;
        Node *next;
    };

    Node *Head = NULL;

    Node *getHead()
    {
        return Head;
    }

    void InsertAtBeginning(T value)
    {
        Node *new_node = new Node();

        new_node->value = value;
        new_node->prev = NULL;
        new_node->next = Head;

        if (Head != NULL)
        {
            Head->prev = new_node;
        }

        Head = new_node;
    }

    void _PrintNodeDetails(Node *Head)
    {
        if (Head->prev != NULL)
            cout << Head->prev->value;
        else
            cout << "N";

        cout << " <--> " << Head->value << " <--> ";

        if (Head->next != NULL)
            cout << Head->next->value << "\n";
        else
            cout << "N" << endl;
    }

    void PrintListDetails()
    {
        Node *temp = Head;

        cout << "\n\n";
        while (temp != NULL)
        {
            _PrintNodeDetails(temp);
            temp = temp->next;
        }
    }

    void PrintList()
    {
        Node *temp = Head;

        cout << "NULL <--> ";
        while (temp != NULL)
        {
            cout << temp->value << " <--> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    Node *Find(T value)
    {
        Node *temp = Head;

        while (temp != NULL)
        {
            if (temp->value == value)
                return temp;
            temp = temp->next;
        }
        return NULL;
    }

    void InsertAfter(Node *current, T value)
    {
        Node *new_node = new Node();

        new_node->value = value;
        new_node->next = current->next;
        new_node->prev = current;

        if (current->next != NULL)
            current->next->prev = new_node;
        current->next = new_node;
    }

    void InsertAtEnd(T value)
    {
        Node *current = Head;
        Node *new_node = new Node();

        new_node->value = value;
        new_node->next = NULL;

        if (current == NULL)
        {
            new_node->prev = NULL;
            Head = new_node;
        }
        else
        {
            while (current->next != NULL)
            {
                current = current->next;
            }

            current->next = new_node;
            new_node->prev = current;
        }
    }

    void DeleteNode(Node *current)
    {
        if (Head == NULL || current == NULL)
            return;

        if (Head == current)
            Head = current->next;

        if (current->next != NULL)
            current->next->prev = current->prev;

        if (current->prev != NULL)
            current->prev->next = current->next;

        delete current;
    }

    void DeleteFirstNode()
    {
        if (Head == NULL)
            return;

        Node *FirstNode = Head;

        Head = Head->next;

        if (Head != NULL)
            Head->prev = NULL;
        delete FirstNode;
    }

    void DeleteLastNode()
    {
        if (Head == NULL)
            return;

        if (Head->next == NULL)
        {
            delete Head;
            Head = NULL;
            return;
        }

        Node *Last_node = Head;
        while (Last_node->next->next != NULL)
        {
            Last_node = Last_node->next;
        }

        Node *temp = Last_node->next;
        Last_node->next = NULL;

        delete temp;
    }

    int Size()
    {
        int size = 0;
        Node *current = Head;

        while (current != NULL)
        {
            size++;
            current = current->next;
        }

        return size;
    }
};