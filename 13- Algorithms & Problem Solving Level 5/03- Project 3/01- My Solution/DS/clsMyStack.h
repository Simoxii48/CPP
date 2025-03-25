#pragma once

#include <iostream>
#include "../../../01- Project 1/01- My Solution/DS/clsDblLinkedList.h"
#include "../../../02- Project 2/01- My Solution/DS/clsMyQueue.h"

using namespace std;

template <class T>

class clsMyStack : public clsMyQueue<T>
{
protected:
    // Composition Concept
    // clsDblLinkedList<T> myStack;

public:
    void Push(T value)
    {
        clsMyQueue<T>::_myQueue.InsertAtBeginning(value);
    }

    T Top()
    {
        return clsMyQueue<T>::Front();
    }

    T Bottom()
    {
        return clsMyQueue<T>::Back();
    }
};