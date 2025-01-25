#include <iostream>
using namespace std;

int readNumberN(int& N) {
    cout << "Please enter the number N : ";
    cin >> N;
    return N;
}

void PrintNumbersFrom1ToN(int N) {
    int i = 1;
    while (i <= N) {
        cout << i << endl;
        i++;
    }
}

int main()
{
    int N;
    
    PrintNumbersFrom1ToN(readNumberN(N));
}