#pragma once

#include <iostream>
#include "../../../01- Project 1/01- My Solution/DS/clsDblLinkedList.h"

using namespace std;

template <class T>

class clsMyStack
{
protected:
    // Composition Concept
    clsDblLinkedList<T> myStack;

public:
    void Push(T value)
    {
        myStack.InsertAtBeginning(value);
    }

    void Print()
    {
        myStack.Print();
    }

    int Size()
    {
        return myStack.Size();
    }

    T Top()
    {
        return myStack.GetItem(0);
    }

    T Bottom()
    {
        return myStack.GetItem(Size() - 1);
    }

    void Pop()
    {
        myStack.DeleteFirstNode();
    }

    T GetItem(int index)
    {
        return myStack.GetItem(index);
    }

    void Reverse()
    {
        myStack.Reverse();
    }

    void UpdateItem(int index, T value)
    {
        myStack.UpdateItem(index, value);
    }

    void InsertAfter(int index, T value)
    {
        myStack.InsertAfter(index, value);
    }

    void InsertAtFront(T value)
    {
        myStack.InsertAtBeginning(value);
    }

    void InsertAtBack(T value)
    {
        myStack.InsertAtEnd(value);
    }

    void Clear()
    {
        myStack.Clear();
    }
};