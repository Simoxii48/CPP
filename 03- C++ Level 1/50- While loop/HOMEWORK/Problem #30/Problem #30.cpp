#include <iostream>
using namespace std;

int readNumberN(int& N) {
    cout << "Please enter N : ";
    cin >> N;
    
    // validation positive number
    while (N < 0) {
        cout << "Negative number recieved :(\nPlease enter positive number : ";
        cin >> N;
    }
    
    return N;
}

int calculateFactorialN(int N) {
    int sum = 1;
    while (N >= 1) { // always make sure the loop is while(true), it will break when while(false)
        sum *= N;
        N--;
    }
    return sum;
}

void printFactorialOfN(int factorialN) {
    cout << factorialN << endl;
}

int main()
{
    int N;
    
    printFactorialOfN(calculateFactorialN(readNumberN(N)));
}