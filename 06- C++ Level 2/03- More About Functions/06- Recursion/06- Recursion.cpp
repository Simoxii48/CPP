#include <iostream>
using namespace std;

void printNumbers(int N, int M) {
    if (N <= M) {
        cout << N << endl;
        printNumbers(N + 1, M);
    }
}

int main()
{
    printNumbers(1, 10);

    // Very carefull when dealing with recursive call because it's dealing with the stack

    // the below exemple will throw the stack overflow because the stack has limits
    printNumbers(1, 4000); // close number to the stack overflow

    // not very recommanded to use the recursion calls untill you really sure that you won't fill the stack with the calls

}