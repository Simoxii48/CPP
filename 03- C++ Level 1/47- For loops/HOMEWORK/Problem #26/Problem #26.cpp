#include <iostream>
using namespace std;

int readNumbersFrom1ToN(int& N) {
    cout << "Please enter N : ";
    cin >> N;
    return N;
}

void PrintFrom1ToN(int N) {
    for (int i = 1; i <= N; i++) {
        cout << i << endl;
    }
}

int main()
{
    int N;
    PrintFrom1ToN(readNumbersFrom1ToN(N));
    
    return 0;
}