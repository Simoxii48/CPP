#include <iostream>
using namespace std;


int main()
{
    for (int i = 1; i <= 5; i++) {
        cout << "Mohammed " << i << endl;
    }
    
    cout << endl;

    for (int i = 5; i >= 1; i--) {
        cout << "Mohammed " << i << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }

    cout << endl;

    for (int i = 0; i <= 10; i += 2) {
        cout << i << endl;
    }
}