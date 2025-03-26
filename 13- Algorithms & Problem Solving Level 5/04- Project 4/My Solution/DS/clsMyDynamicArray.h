#pragma once

#include <iostream>
#include <cmath>
using namespace std;

template <class T>

class clsDynamicArray
{

public:
protected:
    int _Size = 0;
    T *_TempArr;
    void _Swap(T &A, T &B)
    {
        T temp;
        temp = A;
        A = B;
        B = temp;
    }

public:
    T *OriginalArr;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;
        _Size = Size;

        OriginalArr = new T[_Size];
    }

    ~clsDynamicArray()
    {
        delete[] OriginalArr;
    }

    bool SetItem(int index, T value)
    {
        if (index >= _Size || _Size < 0)
            return false;

        OriginalArr[index] = value;
        return true;
    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return _Size == 0;
    }

    void PrintList()
    {
        for (int i = 0; i < _Size; i++)
        {
            cout << OriginalArr[i] << " ";
        }
        cout << endl;
    }

    void Resize(int new_size)
    {
        if (new_size < 0)
            new_size = 0;

        _TempArr = new T[new_size];
        if (new_size < _Size)
            _Size = new_size;

        for (int i = 0; i < _Size; i++)
        {
            _TempArr[i] = OriginalArr[i];
        }

        _Size = new_size;
        delete[] OriginalArr;
        OriginalArr = _TempArr;
    }

    T GetItem(int index)
    {
        return OriginalArr[index];
    }

    void Reverse()
    {
        int halfArr = floor(_Size / 2);
        for (int i = 0; i < halfArr; i++)
        {
            _Swap(OriginalArr[i], OriginalArr[_Size - 1 - i]);
        }
    }

    void Clear()
    {
        _Size = 0;
        delete[] OriginalArr;
        OriginalArr = nullptr;
    }

    bool DeleteItemAt(int index)
    {
        if (index >= _Size || index < 0)
            return false;

        _Size--;

        _TempArr = new T[_Size];

        // copy before index
        for (int i = 0; i < index; i++)
        {
            _TempArr[i] = OriginalArr[i];
        }

        // copy after index
        for (int i = index + 1; i < _Size + 1; i++)
        {
            _TempArr[i - 1] = OriginalArr[i];
        }

        delete[] OriginalArr;
        OriginalArr = _TempArr;
        return true;
    }

    void DeleteFirstItem()
    {
        DeleteItemAt(0);
    }

    void DeleteLastItem()
    {
        DeleteItemAt(_Size - 1);
    }

    int Find(T value)
    {
        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArr[i] == value)
                return i;
        }
        return -1;
    }

    bool DeleteItem(T value)
    {
        int index = Find(value);

        if (index == -1)
            return false;

        DeleteItemAt(index);
        return true;
    }

    bool InsertAt(int index, T value)
    {
        if (index > _Size || index < 0)
            return false;

        _Size++;
        _TempArr = new T[_Size];

        for (int i = 0; i < index; i++)
        {
            _TempArr[i] = OriginalArr[i];
        }

        _TempArr[index] = value;

        for (int i = index; i < _Size - 1; i++)
        {
            _TempArr[i + 1] = OriginalArr[i];
        }

        delete[] OriginalArr;
        OriginalArr = _TempArr;
        return true;
    }

    bool InsertAtBeginning(T value)
    {
        return InsertAt(0, value);
    }

    bool InsertBefore(T index, T value)
    {
        if (index < 1)
            return InsertAt(0, value);
        else
            return InsertAt(index - 1, value);
    }

    bool InsertAfter(T index, T value)
    {
        if (index >= _Size)
            return InsertAt(_Size - 1, value);
        else
            return InsertAt(index + 1, value);
    }

    bool InsertAtEnd(T value)
    {
        return InsertAt(_Size, value);
    }
};