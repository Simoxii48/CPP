#include <iostream>
using namespace std;


int main()
{
    for (int i = 1; i <= 5; i++) {
        // condition to continue
        if (i == 3) {
            continue; // will skip the 3 and continue the loop
        }
        cout << i << endl;
    }
}