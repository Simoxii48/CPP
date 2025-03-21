// ProgrammingAdvices.com
// Mohammed Abu-Hadhoud

#include <iostream>
using namespace std;

// This Algorithm Big O is O(n)
short FindNumberAlgorhim1(short arr1[10], short Number)

{
    int n = 10;
    short pos = -1;

    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            pos = i;
        }
    }

    return pos;
}

// This is also O(n)
short FindNumberAlgorhim2(short arr1[10], short Number)

{
    int n = 10;

    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            return i;
        }
    }

    return -1;
}

// Are they the same speed ? Yes in one case that is the worst case if we iterate
// to the last item, However The first one after finding the wanted index, it continues
// Iterating and it's a wase of time and ressource for nothing.

// The second algorithm after finding the index it breaks the loop and return the index
// immediately no need to continue iterating

// So 2 Algorithms have both O(n) Doesn't mean they have the same speed
int main()
{
    short arr1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << FindNumberAlgorhim1(arr1, 100) << "\n";
    cout << FindNumberAlgorhim2(arr1, 100) << "\n";

    system("pause>0");
    return 0;
}