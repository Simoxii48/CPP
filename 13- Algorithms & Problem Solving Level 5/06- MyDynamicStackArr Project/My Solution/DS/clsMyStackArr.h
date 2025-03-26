#pragma once

#include <iostream>
#include "../../../05- MyDynamicQueueArray Project/My Solution/DS/clsMyQueueArr.h"

using namespace std;

template <class T>

class clsMyStackArr : public clsMyQueueArr<T>
{
protected:
    // Composition Concept
    // clsDblLinkedList<T> myStack;

public:
    void Push(T value)
    {
        clsMyQueueArr<T>::_MyQueue.InsertAtBeginning(value);
    }

    T Top()
    {
        return clsMyQueueArr<T>::Front();
    }

    T Bottom()
    {
        return clsMyQueueArr<T>::Back();
    }

    void Pop()
    {
        clsMyQueueArr<T>::_MyQueue.DeleteFirstItem();
    }
};