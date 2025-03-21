#include <iostream>

using namespace std;

// Instead of making 4 overloaded functions myMax with different types, we can use 
// Template Function

template <typename T> T myMax(T number1, T number2)
{
    return (number1 > number2) ? number1 : number2;
}

int main()
{
    cout << myMax<int>(3, 7) << endl; // myMax called for int type
    cout << myMax<double>(15.24, 94.15) << endl; // myMax called for double type
    cout << myMax<char>('a', 'b') << endl; // myMax called for char type
}