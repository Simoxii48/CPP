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
};