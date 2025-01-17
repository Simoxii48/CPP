#include <iostream>
using namespace std;

int main() {
    int A = 10, B = 20;

    cout << "A == B\t>> " << (A == B) << endl; // Will print if A is equal B

    cout << "A != B\t>> " << (A != B) << endl; // Will print if A is not equal B

    cout << "A >  B\t>> " <<  (A > B) << endl; // Will print if A is greater than B

    cout << "A <  B\t>> " <<  (A < B) << endl; // Will print if A is smaller than B

    cout << "A <= B\t>> " << (A <= B) << endl; // Will print if A is smaller or equal than B

    cout << "A >= B\t>> " << (A >= B) << endl; // Will print if A is greater or equal than B
}