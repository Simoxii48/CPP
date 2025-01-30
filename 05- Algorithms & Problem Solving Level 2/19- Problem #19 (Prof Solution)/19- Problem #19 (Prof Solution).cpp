#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to) {
    // generation a random number syntax
    return rand() % (to - from + 1) + from;
}

int main()
{
    // Seeds the rendom number generator in C++, called only once, must be called in main function
    srand((unsigned)time(NULL));

    cout << rand() << endl; // must include cstdlib library
    cout << rand()%10 << endl; // function return random number ranged in int size and % to take only the last digit

    cout << randomNumber(100, 200) << endl;
    cout << randomNumber(1, 5) << endl;
    cout << randomNumber(20, 50) << endl;
}