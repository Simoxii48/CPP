#pragma once

#include <iostream>
#include "../../../01- Project 1/01- My Solution/DS/clsDblLinkedList.h"

using namespace std;

template <class T>

class clsMyQueue
{
protected:
    clsDblLinkedList<T> _myQueue;

public:
    void Push(T value)
    {
        _myQueue.InsertAtEnd(value);
    }

    void Print()
    {
        _myQueue.Print();
    }

    int Size()
    {
        return _myQueue.Size();
    }

    T Front()
    {
        return _myQueue.GetItem(0);
    }

    T Back()
    {
        return _myQueue.GetItem(_myQueue.Size() - 1);
    }

    void Pop()
    {
        _myQueue.DeleteFirstNode();
    }

    int GetItem(int index)
    {
        return _myQueue.GetItem(index);
    }
};