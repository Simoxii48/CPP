#include <iostream>
using namespace std;

int main()
{
    // exemple to make multiplication table
    for (int i = 1; i <= 10; i++) {
        cout << "i = " << i << endl;

        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }

        cout << "-----------------------" << endl;
    }

    // exemple of printing stars
    for (int i = 1; i <= 10; i++) {
        
        for (int j = 1; j <= 10; j++) {
            cout << "*";
        }
        
        cout <<endl;
    }

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 10; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << "\n";
    }
    
}