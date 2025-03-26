#pragma once

#include <iostream>
#include "../../../04- Project 4/My Solution/DS/clsMyDynamicArray.h"

using namespace std;

template <class T>

class clsMyQueueArr
{
protected:
    clsDynamicArray<int> _MyQueue;

public:
    void Push(T value)
    {
        _MyQueue.InsertAtEnd(value);
    }

    void Print()
    {
        _MyQueue.PrintList();
    }

    int Size()
    {
        return _MyQueue.Size();
    }

    T Front()
    {
        return _MyQueue.GetItem(0);
    }

    T Back()
    {
        return _MyQueue.GetItem(_MyQueue.Size() - 1);
    }

    void Pop()
    {
        _MyQueue.DeleteLastItem();
    }

    T GetItem(int index)
    {
        return _MyQueue.GetItem(index);
    }

    void Reverse()
    {
        _MyQueue.Reverse();
    }

    void UpdateItem(int index, T value)
    {
        _MyQueue.SetItem(index, value);
    }

    void InsertAfter(int index, T value)
    {
        _MyQueue.InsertAfter(index, value);
    }

    void InsertAtFront(T value)
    {
        _MyQueue.InsertAtBeginning(value);
    }

    void InsertAtBack(T value)
    {
        _MyQueue.InsertAtEnd(value);
    }

    void Clear()
    {
        _MyQueue.Clear();
    }
};